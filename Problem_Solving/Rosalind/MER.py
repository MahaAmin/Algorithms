def readInput(fileName):
    with open(fileName, 'r') as f:
        lines = f.readlines()
    l = len(lines)
    for i in range(l):
        lines[i] = lines[i].rstrip()
    n1 = int(lines[0])
    values = []
    for i in range(1,l):
        tmp = lines[i].split(" ")
        ll = len(tmp)
        for j in range(ll):
            values.append(int(tmp[j]))
    arr1 = []
    arr2 = []
    for i in range(n1):
        arr1.append(values[i])
    n2 = int(values[n1])
    for i in range(n1+1,n1+n2+1):
        arr2.append(values[i])
    return arr1, n1, arr2, n2


def MER(arr1, n1, arr2, n2):
    arr3 = []
    index1 = 0
    index2 = 0
    while(index1 < n1 and index2 < n2):
        if(arr1[index1] <= arr2[index2]):
            arr3.append(arr1[index1])
            index1+=1
        else:
            arr3.append(arr2[index2])
            index2+=1
    while(index1<n1):
        arr3.append(arr1[index1])
        index1+=1
    while(index2<n2-1):
        arr3.append(arr2[index2])
        index2+=1
    return arr3


arr1,n1,arr2,n2 = readInput("rosalind_mer.txt")
n1 = int(n1)
n2 = int(n2)
arr3 = MER(arr1,n1,arr2,n2)
l = len(arr3)
data = ""
for i in range(l):
    data += str(arr3[i])+" "
with open("OUTPUT.txt", 'w+') as f:
    f.write(data)
