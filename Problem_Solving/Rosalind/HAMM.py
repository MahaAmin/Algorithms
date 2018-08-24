def HammingDistance(s1, s2):
    hamm = 0
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            hamm += 1
    return hamm

t1 = input()
t2 = input()
hamming_distance = HammingDistance(t1,t2)
print(str(hamming_distance))
