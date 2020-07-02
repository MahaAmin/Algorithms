def DNACountingNucleotides(text):
    A=0
    C=0
    G=0
    T=0

    for i in range(len(text)):
        if text[i] == 'A':
            A += 1
        elif text[i] == 'T':
            T += 1
        elif text[i] == 'G':
            G += 1
        elif text[i] == 'C':
            C += 1
    return A,C,G,T

dna = input()
A,C,G,T = DNACountingNucleotides(dna)
print(str(A) + " " + str(C) + " " + str(G) + " " + str(T))
