import Prelude hiding (head)

data State = S0 | S1 | S2 | S3 | S4 | S5 deriving (Show)
data Tape = Tape String Int deriving (Show)

head :: Tape -> Char -> Bool
head ( Tape xs i ) c = xs !! i == c

left :: Tape -> Tape
left  ( Tape xs i )
 | i == 0 = Tape ( "$" ++ xs ) 0
 | otherwise = Tape xs (i - 1)

right :: Tape -> Tape
right  ( Tape xs i )
 | i + 1 == length xs = Tape ( xs ++ "$") ( i+1 )
 | otherwise = Tape xs ( i + 1 )

write :: Tape -> Char -> Tape
write ( Tape xs i ) c = Tape (take i xs ++ [c] ++ drop (i + 1) xs) i

increase :: State  -> Tape -> Tape
increase S0 tape 
 | head tape '$' = increase S1 ( right ( write tape '$'))
increase S1 tape
 | head tape '1' = increase S1 ( right ( write tape '1' ))
 | head tape '0' = increase S1 ( right ( write tape '0' ))
 | head tape '$' = increase S2 ( left ( write tape '$' ))
increase S2 tape
 | head tape '1' = increase S4 ( left ( write tape '0' ))
 | head tape '0' = increase S3 ( left ( write tape '1' ))
increase S3 tape 
 | head tape '1' = increase S3 ( left ( write tape '1' ))
 | head tape '0' = increase S3 ( left ( write tape '0' ))
 | head tape '$' = increase S5 ( right  (write tape '$' ))
increase S4 tape 
 | head tape '1' = increase S4 ( left ( write tape '0' ))
 | head tape '0' = increase S3 ( left ( write tape '1' ))
increase S5 tape = tape
increase state tape = error ("machine failed in " ++ show state ++ " last form : " ++ show tape)


runadd xs = text (increase S0 (Tape xs 0)) 
