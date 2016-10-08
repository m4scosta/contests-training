sum = String.split(String.strip(IO.gets("")), [" "]) 
|> Enum.map(&String.to_integer/1)
|> Enum.sum

IO.puts sum - 3
