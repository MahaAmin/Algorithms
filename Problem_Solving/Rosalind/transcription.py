def TRANSCRIPTION(DNA):
    ## transcripts DNA (template-strand) into imature-mRNA
    l = len(DNA)
    mRNA = ""
    for i in range(l):
        if(DNA[i] == "A"):
            mRNA += "U"
        elif(DNA[i] == "C"):
            mRNA += "G"
        elif(DNA[i] == "G"):
            mRNA += "C"
        elif(DNA[i] == "T"):
            mRNA += "A"
    return mRNA
