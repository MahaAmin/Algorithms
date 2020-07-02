def LEXF(L):
    l=len(L)
    for i in range(l):
        for j in range(l):
            print(L[i] + L[j])



input = ['A', 'C', 'G', 'T']
k = 2

LEXF(input)
