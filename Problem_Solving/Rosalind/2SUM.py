def readInput(fileName):
    with open(fileName, 'r') as f:
        lines=f.readlines()
    l=len(lines)
    for i in range(l):
        lines[i] = lines[i].rstrip()
    arrays=[]
    for i in range(l):
        tmp=lines[i].split(" ")
        arrays.append(tmp)
    return arrays


def sum2(k,n,arrays):
    for i in range(k):
        sum1(arrays[i])


def sum1(arr):
    n = len(arr)
    flag=False
    for i in range(n):
        for j in range(i+1,n):
            if int(arr[i])+int(arr[j]) == 0:
                print(str(i+1) + " " + str(j+1))
                flag=True
                break
        if flag:
            break
    if flag==False:
        print("-1")

arr1=[2, -3, 4, 10, 5]
arr2=[8, 2, 4, -2, -8]
arr3=[-5, 2, 3, 2, -4]
arr4=[5, 4, -5, 6, 8]
arrays=readInput("rosalind_2sum.txt")
sum2(14,9431,arrays)
