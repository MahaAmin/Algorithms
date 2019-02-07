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
    return SEQS




def LCSM(fileName):
    patterns=readInput(fileName)
    print(patterns)
    #get the shortest pattern
    k=len(patterns[0])
    index=0
    l=len(patterns)
    for i in range(1,l):
        if len(patterns[i]) < k:
            k=len(patterns[i])
            index=i

    for i in range(1,k+2):
        for j in range(k-i+1):
            tmp=patterns[index][j:j+i]
            count=0
            for s in range(l):
                if tmp not in patterns[s]:
                    break
                else:
                    count+=1
                if count==l:
                    lcsm=tmp
    return lcsm


print(LCSM("rosalind_lcsm.txt"))
