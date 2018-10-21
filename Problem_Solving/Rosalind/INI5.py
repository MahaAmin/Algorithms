def readFileLineByLine(fileName):
    # read file line by line and returns
    with open(fileName, 'r') as f:
        lines = f.readlines()
    return lines


def writeLinesToFile(fileName, lines):
    # input --> list of lines
    # output --> write the input in OUTPUT.txt

    with open(fileName, 'w') as f:
        for line in lines:
            f.write(line)


## read file and output even-numbered lines (1-based) to OUTPUT file
content = readFileLineByLine("rosalind_ini5.txt")
l = len(content)
toWrite = []
for i in range(1,l,2):
    toWrite.append(content[i])
writeLinesToFile("OUTPUT", toWrite)
