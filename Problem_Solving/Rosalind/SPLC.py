def readFasta(fileName):
    seq = ""
    with open(fileName, 'r') as f:
        lines = f.readlines()
    l = len(lines)
    INTRONS = []
    for i in range(1,l):
        if(lines[i][0] == ">"):
            flag = i
            break;
        else:
            seq += lines[i][:-1]
    for j in range(flag,l):
        if(lines[j][0] == ">"):
            continue
        else:
            INTRONS.append(lines[j][:-1])
    return seq,INTRONS


def TRANSCRIPTION(DNA):
    ## transcripts DNA into imature-mRNA
    l = len(DNA)
    mRNA = ""
    for i in range(l):
        if(DNA[i] == "T"):
            mRNA += "U"
        else:
            mRNA += DNA[i]
    return mRNA

def TRANSLATION(RNA):
    ## input mRNA and returns protein sequence
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

    l = len(RNA)
    protein = ""
    start = False
    for i in range(0,l-2,3):
        if(CODONS[RNA[i:i+3]] == "M"):
            start = True
            protein += CODONS[RNA[i:i+3]]
            continue
        if (CODONS[RNA[i:i+3]] == "STOP" and start == True) :
            break
        if start:
            protein += CODONS[RNA[i:i+3]]
    return protein


def SPLC(seq, introns):
    exon = seq
    for intron in introns:
        exon = exon.replace(intron,'')
    matureMRNA = TRANSCRIPTION(exon)
    protein = TRANSLATION(matureMRNA)
    print(len(protein))
    return protein

Seq,introns = readFasta("rosalind_splc.txt")
PROTEIN = SPLC(Seq,introns)
print(PROTEIN)
