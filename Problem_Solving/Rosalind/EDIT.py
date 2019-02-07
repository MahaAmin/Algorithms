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

def EDIT(s1,s2):
    # s1 = "CART" --> m = 4 --> colms --> j
    # s2 = "MARCH" --> n = 5 --> rows --> i
    m = len(s1)
    n = len(s2)

    # creating empty matrix (0s) edit[n+1][m+1]
    edit = [[0 for x in range(m+1)] for y in range(n+1)]

    # Filling the matrix
    for i in range(n+1):
        for j in range(m+1):
            if i==0:
                edit[i][j]=j
            elif j==0:
                edit[i][j]=i
            elif s2[i-1]==s1[j-1]:
                edit[i][j]=edit[i-1][j-1]
            else:
                edit[i][j]=min(min(edit[i-1][j-1],edit[i-1][j]), edit[i][j-1])+1
    return edit[n][m]

seqs = readInput("rosalind_edit.txt")
print(EDIT(seqs[0],seqs[1]))
