def DnaIntoRna(text):
    rna = text.replace("T", "U")
    return rna

dna = input()
print(DnaIntoRna(dna))
