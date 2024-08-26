import System.IO

main :: IO ()
main = do
    -- Open the input file for reading
    content <- readFile "input.txt"
    -- Write the content to the output file
    writeFile "output.txt" content
    putStrLn "Content copied from input.txt to output.txt successfully!"
