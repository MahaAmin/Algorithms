def editDistance(s1, s2):
    m = len(s1)
    n = len(s2)
    L = [[ 0 for x in range(n+1)] for x in range(m+1)]

    for i in range(m+1):
        for j in range(n+1):

            if i == 0:
                L[i][j] = j    #insertion

            elif j == 0:
                L[i][j] = i   #deletion

            elif s1[i-1] == s2[j-1]:
                L[i][j] = L[i-1][j-1]

            else:
                L[i][j] = 1 + min(L[i][j-1],  
                            L[i-1][j],
                            L[i-1][j-1])
    return L[m][n]

str1 = "abac"
str2 = "baac"

print(editDistance(str1, str2))
