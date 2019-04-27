def sortfn(a, b):
    if a[1] != b[1]:
        return a[1] - b[1]
    return b[0] - a[0]

t = 0
while True:
    try:
        freq_map = {}
        text = map(lambda c: ord(c), raw_input())

        if t != 0:
            print

        t += 1

        for c in text:
            if freq_map.get(c) is None:
                freq_map[c] = 0
            freq_map[c] += 1

        for c, f in sorted(freq_map.items(), cmp=sortfn):
            print("{} {}".format(c, f))
    except:
        break
