def readFASTA(fileName):
    with open(fileName, 'r') as f:
        lines = f.readlines()

    SEQS = {}
    for line in lines:
        if(line[0] == ">"):
            key = line[1:-1]
            SEQS[key] = ""
            continue
        else:
            SEQS[key] += line[0:-1]
    return SEQS


def getSeqs(SEQS):
    seqs = []
    for key in SEQS:
        seqs.append(SEQS[key])
    return seqs


def Count(Motifs):
    count = {}
    k = len(Motifs[0])
    for symbol in "ACGT":
        count[symbol] = []
        for j in range(k):
            count[symbol].append(0)

    t = len(Motifs)
    for i in range(t):
        for j in range(k):
            symbol = Motifs[i][j]
            count[symbol][j] += 1

    return count

def Consensus(Motifs):
    k = len(Motifs[0])
    count = Count(Motifs)

    consensus = ""
    for j in range(k):
        m = 0
        frequencySymbol = ""
        for symbol in "ACGT":
            if count[symbol][j] > m :
                m = count[symbol][j]
                frequencySymbol = symbol
        consensus += frequencySymbol
    return consensus

def CONS(fileName):
    seqDict = readFASTA(fileName)
    seqList = getSeqs(seqDict)
    consensus = Consensus(seqList)
    print(consensus)
    output = Count(seqList)
    display = ""
    for key in output:
        l = len(output[key])
        display += key+": "
        for i in range(l):
            display += str(output[key][i])+ " "
        display += "\n"
    print(display+" ")



CONS("rosalind_cons.txt")
