def readInput(fileName):
    SEQS=[]
    with open(fileName, 'r') as f:
        lines = f.readlines()
    l=len(lines)
    for i in range(l):
        lines[i] = lines[i].rstrip()

    seq=""
    for i in range(1,l):
        if(lines[i][0] == ">"):
            SEQS.append(seq)
            seq=""
        else:
            seq+=lines[i]
    SEQS.append(seq)
    return SEQS


def LCSQ(s1,s2):
    # s1 = "AGGTAB" --> m = 6  --> colms --> j
    # s2 = "GXTXAYB" --> n = 7 --> rows --> i

    m = len(s1)
    n = len(s2)
    LCS = [[0 for x in range(m+1)] for y in range(n+1)]

    #Filling the matrix
    for i in range(n+1):
        for j in range(m+1):
            if i==0 or j==0:
                LCS[i][j] = 0
            elif s2[i-1] == s1[j-1]:
                LCS[i][j] = LCS[i-1][j-1]+1
            else:
                LCS[i][j] = max(LCS[i-1][j],LCS[i][j-1])

    # Traceback
    lcs=""
    i = n
    j = m
    while i>0 and j>0:
        if LCS[i][j] > LCS[i-1][j] and LCS[i][j] > LCS[i][j-1]:  #diagonal
            lcs+=s1[j-1]
            i-=1
            j-=1
        elif LCS[i][j] == LCS[i-1][j]:   #UP
            i-=1
        else:   #left
            j-=1
    lcs = lcs[::-1]
    return lcs

seqs = readInput("rosalind_lcsq.txt")
print(LCSQ(seqs[0],seqs[1]))
