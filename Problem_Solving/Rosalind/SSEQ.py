def readFasta(fileName):
    seq = ""
    pattern = ""
    with open(fileName, 'r') as f:
        lines = f.readlines()
    l = len(lines)
    id = 0
    for line in lines:
        if(line[0] == ">"):
            id += 1
        elif(id == 1):
            seq += line[:-1]
        elif(id == 2):
            pattern += line[:-1]
    return seq,pattern


def SSEQ(seq, motif):
    positions = []
    l = len(seq)
    max_index = -1
    counter = 0
    for c in motif:
        for i in range(l):
            if seq[i] == c and i > max_index:
                positions.append(i+1)
                max_index = i
                counter += 1
                break
    return positions

SEQ,PATTERN = readFasta("rosalind_sseq.txt")
result = SSEQ(SEQ,PATTERN)
for item in result:
    print(str(item) + " ",end='')
print()
