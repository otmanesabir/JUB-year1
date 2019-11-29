import Prelude hiding (head)

data State = S0 | S1 | S2 | S3 | S4 | S5 | S6 deriving (Show)
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

decrease :: State  -> Tape -> Tape
decrease S0 tape 
 | head tape '$' = decrease S1 ( right ( write tape '$'))
decrease S1 tape
 | head tape '1' = decrease S1 ( right ( write tape '0' ))
 | head tape '0' = decrease S1 ( right ( write tape '1' ))
 | head tape '$' = decrease S2 ( left ( write tape '$' ))
decrease S2 tape
 | head tape '1' = decrease S4 ( left ( write tape '0' ))
 | head tape '0' = decrease S3 ( left ( write tape '1' ))
decrease S3 tape
 | head tape '0' = decrease S3 ( left ( write tape '0' ))
 | head tape '1' = decrease S3 ( left ( write tape '1' ))
 | head tape '$' = decrease S5 ( right ( write tape '$' ))
decrease S4 tape 
 | head tape '1' = decrease S4 ( left ( write tape '0' ))
 | head tape '0' = decrease S3 ( left ( write tape '1' ))
decrease S5 tape
 | head tape '1' = decrease S5 ( right ( write tape '0' ))
 | head tape '0' = decrease S5 ( right ( write tape '1' ))
 | head tape '$' = decrease S6 ( left ( write tape '$' ))
decrease S6 tape = tape
decrease state tape = error ("machine failed in " ++ show state ++ " last form : " ++ show tape)

rundecrease xs = text (decrease S0 (Tape xs 0)) 