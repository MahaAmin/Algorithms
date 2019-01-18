def readInput(fileName):
    seq = ""
    with open(fileName, 'r') as f:
        lines = f.readlines()
    l = len(lines)
    for i in range(l):
        lines[i] = lines[i].rstrip()
    for i in range(l):
        seq += lines[i]

    return seq

def RC(sequence):
    rc = ""
    l = len(sequence)
    for i in range(l):
        if sequence[i] == "A":
            rc += "T"
        elif sequence[i] == "T":
            rc += "A"
        elif sequence[i] == "G":
            rc += "C"
        elif sequence[i] == "C":
            rc  += "G"
    rc = rc[::-1]
    return rc


def ORF(sequence):
    starting_codons_original = []
    starting_codons_rc = []
    proteins = []
    l = len(sequence)

    #replace "T" by "U"
    seq = sequence.replace("T","U")

    #search for starting codons in original starnd
    for i in range(0,l-2,1):
        if seq[i:i+3] == "AUG":
            starting_codons_original.append(int(i))

    # reverse complement
    rc = RC(sequence)
    rc = rc.replace("T","U")

    #search for starting codons in reverse complement strand
    for i in range(0,l-2,1):
        if rc[i:i+3] == "AUG":
            starting_codons_rc.append(int(i))


    #TRANSLATION
    CODONS = {"UUU":"F", "UUC":"F", "UUA":"L", "UUG":"L",
    "UCU":"S", "UCU":"S", "UCA":"S", "UCG":"S", "UCC":"S", "UAU":"Y",
    "UAC":"Y", "UAA":"STOP", "UAG":"STOP", "UGU":"C", "UGC":"C",
    "UGA":"STOP", "UGG":"W", "CUU":"L", "CUC":"L", "CUA":"L", "CUG":"L",
    "CCU":"P", "CCC":"P", "CCA":"P", "CCG":"P", "CAU":"H", "CAC":"H",
    "CAA":"Q", "CAG":"Q", "CGU":"R", "CGC":"R", "CGA":"R", "CGG":"R",
    "AUU":"I", "AUC":"I", "AUA":"I", "AUG":"M", "ACU":"T", "ACC":"T", "ACA":"T",
    "ACG":"T", "AAU":"N", "AAC":"N", "AAA":"K", "AAG":"K", "AGU":"S", "AGC":"S",
    "AGA":"R", "AGG":"R", "GUU":"V", "GUC":"V", "GUA":"V", "GUG":"V", "GCU":"A",
    "GCC":"A", "GCA":"A", "GCG":"A", "GAU":"D", "GAC":"D", "GAA":"E", "GAG":"E",
    "GGU":"G", "GGC":"G", "GGA":"G", "GGG":"G"}

    ll = len(starting_codons_original)
    for i in range(ll):
        stop_codon_found = False
        protein = ""
        for j in range(starting_codons_original[i],l-2,3):
            if CODONS[seq[j:j+3]] == "STOP":
                stop_codon_found = True
                break
            else:
                protein += CODONS[seq[j:j+3]]
        if stop_codon_found:
            if protein not in proteins:
                proteins.append(protein)


    ll = len(starting_codons_rc)
    for i in range(ll):
        stop_codon_found = False
        protein = ""
        for j in range(starting_codons_rc[i],l-2,3):
            try:
                if CODONS[rc[j:j+3]] == "STOP":
                    stop_codon_found = True
                    break
                else:
                    protein += CODONS[rc[j:j+3]]
            except:
                continue
        if stop_codon_found:
            if protein not in proteins:
                proteins.append(protein)

    return proteins

SEQ = readInput("rosalind_orf.txt")
result = ORF(SEQ)
l = len(result)
for i in range(l):
    print(result[i])
