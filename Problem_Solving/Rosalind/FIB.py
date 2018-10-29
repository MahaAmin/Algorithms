def Fib(n):
    # classic Fibonacci sequence
    if n == 1 or n == 2:
        return 1
    elif n == 0:
        return 0
    else:
        return Fib(n-2) + Fib(n-1)


def FibCustom(n, k):
    # each imature pair takes 2 months to be imature
    # each mature pair produces k imature pairs

    if n == 1 or n == 2:
        return 1
    elif n == 0:
        return 0
    else:
        return k*FibCustom(n-2, k) + FibCustom(n-1, k)

print(FibCustom(28,5))
