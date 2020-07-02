def readInput(fileName):
    with open(fileName, 'r') as f:
        lines = f.readlines()
    length=len(lines)
    for i in range(length):
        lines[i]=lines[i].rstrip()
    inputs=lines[0].split(" ")
    n=int(inputs[0])
    l=int(inputs[1])
    d=int(inputs[2])
    seq=lines[1]
    return n,l,d,seq

def transposableElements(n,l,d,seq):
    motifs={}


n,l,d,seq=readInput("1.txt")
