[n, s] = String.split(String.trim(IO.gets(""))) |> Enum.map(&String.to_integer/1)

min = IO.stream(:stdio, :line)
|> Stream.map(&String.strip/1)
|> Stream.map(&String.to_integer/1)
|> Stream.scan(&(&1 + &2))
|> Enum.take(n)
|> Enum.min

IO.puts min + s

