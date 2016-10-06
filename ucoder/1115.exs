[a, b, c, d] = IO.stream(:stdio, :line)
|> Stream.map(&String.strip/1)
|> Stream.map(&String.to_integer/1)
|> Enum.take(4)

response =
  cond do
    a == b + c + d and d == b + c and b == c -> "S"
    true -> "N"
  end

IO.puts response
