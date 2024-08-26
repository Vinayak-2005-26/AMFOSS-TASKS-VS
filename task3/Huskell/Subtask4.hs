import System.IO
import Control.Monad (forM_)

-- Function to generate the diamond pattern as a string
generateDiamond :: Int -> String
generateDiamond n = unlines $ topHalf ++ bottomHalf
  where
    -- Generate the top half of the diamond
    topHalf = [ replicate (n - i - 1) ' ' ++ replicate (2 * i + 1) '*' | i <- [0..(n-1)] ]
    -- Generate the bottom half of the diamond
    bottomHalf = [ replicate (n - i - 1) ' ' ++ replicate (2 * i + 1) '*' | i <- [(n-2),(n-3)..0] ]

main :: IO ()
main = do
    -- Open the input file vsofficial.txt and read the number
    content <- readFile "vsofficial.txt"
    let n = read content :: Int
    
    -- Generate the diamond pattern
    let diamond = generateDiamond n
    
    -- Write the diamond pattern to the output file
    writeFile "output.txt" diamond
    
    putStrLn "Diamond pattern generated in output.txt"
