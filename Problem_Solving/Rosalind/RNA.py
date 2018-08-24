def ReverseComplement(text):
    complement = ""
    for i in range(len(text)):
        if text[i] == 'A':
            complement += 'T'
        elif text[i] == 'T':
            complement += 'A'
        elif text[i] == 'C':
            complement += 'G'
        elif text[i] == 'G':
            complement += 'C'

    return complement[::-1]

dna = input()
print(ReverseComplement(dna))
