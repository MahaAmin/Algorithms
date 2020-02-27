import itertools

def factorial(n):
    result = 1
    tmp = n
    for i in range(n):
        result *= tmp
        tmp -=1
    return result

def PERM(n,k):
    arr = []
    for i in range(1,n+1):
        arr.append(i)
    permutations = list(itertools.permutations(arr))
    return permutations

print(PERM(3))
