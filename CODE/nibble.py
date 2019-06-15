def swap_nibble(x):
    return ((x & 0x0f) << 4 | (x & 0xf0) >> 4)

x = 100
print(x)
print(swap_nibble(x))
