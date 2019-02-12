main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    putStrLn ("X = " ++ show (a+b))