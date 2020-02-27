import sys
print(sys.float_info.min)

def readInput(fileName):
    n=[]
    a=[]
    b=[]
    with open(fileName, 'r') as f:
        lines = f.readlines()
    l = len(lines)
    for i in range(l):
        lines[i] = lines[i].rstrip()
    t=int(lines[0])
    for i in range(1,l):
        tmp=lines[i].split(" ")
        n.append(float(tmp[0]))
        a.append(float(tmp[1]))
        b.append(float(tmp[2]))
    return t,n,a,b


t,n,a,b = readInput("tests.txt")
f=open("OUTPUT1", 'a')
for i in range(t):
    for j in range(100000):
        if n[i]<0:
            n[i]=0
            break
        n[i]=(a[i]*n[i])-(b[i]*(n[i]*n[i]))
    f.write(str(n[i])+"\n")
f.close()
