def readInput(fileName):
    with open(fileName, 'r') as f:
        lines = f.readlines()
    l = len(lines)
    for i in range(l):
        lines[i] = lines[i].rstrip()
    values = []
    for i in range(1,l):
        values.append(lines[i].split(" "))
    return values


def MAJ(t,n,values):
    result = ""
    for i in range(t):
        l = len(values[i])
        dict = {}
        for j in range(l):
            dict[values[i][j]] = 0
        for j in range(l):
            dict[values[i][j]] += 1

        flag = False
        for key in dict:
            flag = False
            if dict[key] > l/2:
                flag = True
                value = key
                break
            else:
                flag = False
        if flag:
            result += value + " "
        else:
            result += "-1 "
    return result

values = readInput("rosalind_maj.txt")
print(MAJ(18,8054,values))
