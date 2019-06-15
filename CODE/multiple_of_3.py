def multiple_of_3 (n):
    return (0 if (n % 3) else -1)

n = 7
ret =multiple_of_3 (n)
if ret:
    print("multiple of 3")
else:
    print("not multiple of 3")
