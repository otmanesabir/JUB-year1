import Prelude hiding (head)

data State = S0 | S1 | S2 | S3 | S4 | S5 | S6 | S7 | S8 | S9 | S10 | S11 | S12 | MID deriving (Show)
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

text :: Tape -> String
text (Tape xs _) = xs

--tinc turing machine

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


runincrease xs = text (increase S0 (Tape xs 0)) 

--tdec turing machine

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

--tadd turing machine

add :: State  -> Tape -> Tape
add S0 tape 
 | head tape '$' = add S1 ( right ( write tape '$'))
add S1 tape
 | head tape '0' = add S1 ( right ( write tape '0' ))
 | head tape '1' = add S2 ( left ( write tape '1' ))
 | head tape '$' = add S12 ( right ( write tape '$' ))
add S2 tape  
 | head tape '0' = add S2 ( left ( write tape '0' ))
 | head tape '1' = add S2 ( left ( write tape '1'))
 | head tape '$' = add S3 ( right ( write tape '$' ))
add S3 tape
 | head tape '1' = add S3 ( right ( write tape '0' ))
 | head tape '0' = add S3 ( right ( write tape '1' ))
 | head tape '$' = add S4 ( left ( write tape '$' ))
add S4 tape
 | head tape '1' = add S5 ( left ( write tape '0' ))
 | head tape '0' = add S6 ( left ( write tape '1' )) 
add S5 tape
 | head tape '1' = add S5 ( left ( write tape '0' ))
 | head tape '0' = add S6 ( left ( write tape '1' ))
add S6 tape 
 | head tape '1' = add S6 ( left ( write tape '1' ))
 | head tape '0' = add S6 ( left ( write tape '0' ))
 | head tape '$' = add S7 ( right ( write tape '$' ))
add S7 tape
 | head tape '1' = add S7 ( right ( write tape '0' ))
 | head tape '0' = add S7 ( right ( write tape '1' ))
 | head tape '$' = add MID ( right ( write tape '$' ))
add MID tape 
 | head tape '1' = add MID ( right (write tape '1'))
 | head tape '0' = add MID ( right (write tape '0'))
 | head tape '$' = add S8 (left ( write tape '$'))
add S8 tape
 | head tape '1' = add S9 ( left ( write tape '0' ))
 | head tape '0' = add S10 ( left ( write tape '1' ))
add S9 tape
 | head tape '1' = add S9 ( left ( write tape '0' ))
 | head tape '0' = add S10 ( left ( write tape '1' ))
add S10 tape
 | head tape '0' = add S10 ( left ( write tape '0' ))
 | head tape '1' = add S10 ( left ( write tape '1' ))
 | head tape '$' = add S11 ( left ( write tape '$' ))
add S11 tape
 | head tape '0' = add S11 ( left ( write tape '0' )) 
 | head tape '1' = add S2 ( left ( write tape '1' ))
 | head tape '$' = add S12 ( right ( write tape '$' ))
add S12 tape = tape
add state tape = error ("machine failed in " ++ show state ++ " last form : " ++ show tape)

runadd xs = text (add S0 (Tape xs 0)) 