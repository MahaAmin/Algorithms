def readInput(fileName):
    with open(fileName, 'r') as f:
        lines = f.readlines()
    l = len(lines)
    for i in range(l):
        lines[i] = lines[i].rstrip()
    n = int(lines[0])
    values = []
    for i in range(1,l):
        tmp = lines[i].split(" ")
        ll = len(tmp)
        for j in range(ll):
            values.append(int(tmp[j]))
    return values


def MS(arr):
    if len(arr) >1:
        mid=len(arr)//2
        L=arr[:mid]
        R=arr[mid:]

        MS(L)
        MS(R)

        i=j=k=0

        while i<len(L) and j<len(R):
            if L[i] < R[j]:
                arr[k]=L[i]
                i+=1
            else:
                arr[k]=R[j]
                j+=1
            k+=1

        while i < len(L):
            arr[k] = L[i]
            i+=1
            k+=1

        while j < len(R):
            arr[k] = R[j]
            j+=1
            k+=1

    return arr

arr = readInput("rosalind_ms.txt")
arr = MS(arr)
l = len(arr)
for i in range(l):
    print(str(arr[i])+" ",end='')
print()
