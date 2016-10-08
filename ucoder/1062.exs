[xm, ym, xr, yr] = String.split(String.strip(IO.gets("")), [" "])
|> Enum.map(&String.to_integer/1)

IO.puts Kernel.abs(xm - xr) + Kernel.abs(ym - yr)
