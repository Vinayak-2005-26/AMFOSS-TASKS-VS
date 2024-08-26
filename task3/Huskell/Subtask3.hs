import Control.Monad (forM_)

-- Function to generate and print the diamond pattern
printDiamond :: Int -> IO ()
printDiamond n = do
    -- Print the top half of the diamond
    forM_ [0..(n-1)] $ \i -> do
        putStrLn $ replicate (n - i - 1) ' ' ++ replicate (2 * i + 1) '*'
    -- Print the bottom half of the diamond
    forM_ [(n-2),(n-3)..0] $ \i -> do
        putStrLn $ replicate (n - i - 1) ' ' ++ replicate (2 * i + 1) '*'

main :: IO ()
main = do
    -- Prompt the user for input
    putStrLn "Enter the number of rows for the diamond pattern:"
    -- Read the number from the user
    input <- getLine
    let n = read input :: Int
    -- Generate and print the diamond pattern
    printDiamond n
