IO.puts String.split(String.strip(IO.gets("")), [" "])
|> Enum.map(&String.to_integer/1)
|> Enum.sort
|> Enum.at(1)

