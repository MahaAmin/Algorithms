def SUBS(seq, pattern):
    l = len(seq)
    k = len(pattern)
    for i in range(0,l-k+1):
        if(seq[i:i+k] == pattern):
            print(str(i+1))


SUBS("TATAATACGATTTATAATACCGATTATAATACTCATATAATATATAATATCGGCACCATAGTTATAATACTGCCCTATAATAGAGTATAATATTATAATACTGTATAATAATATAATATCTCTTTGTTTATAATAATTATAATATATAATATCCGACATATAATATTGTATAATATAAAATATAATAAATGCTATAATAAATATCATAGTATAATAATTATAATAATATAATATATAATATTTAATTATAATATATAATAGGTATAATACTATAATATATATAATAGCTATAATACACATATAATATATAATATATAATAATATAATATTGCAGTATAATATATAATAAGTTACCATATAATATATAATAAAGCATATATAATACTTATAATATATAATATATAATACTATAATAACTATAATACGGCGGCCGAACCGCCACATCTATAATAGATATAATAATGGTATATAATACGAATCTGTACACGAACATTATAATAGGTATAATAGTATAATAAGCCTATAATAGACTTCGTATAATACCTATAATATATAATAGGCTATAATAAAGGGTATAATAGTATAATATACTATAATATTGCATATAATACTATAATACACCAGTCCTATAATAGTATAATATCTAATAGCATATAATATATCTTATAATATATAATAGTTATAATAGGTATAATATATAATATGATTATAATAGGTTATAATAGCTATAATATATAATACTATAATATCCGTATAATATATTATAATAGGCTATAATACTATAATACGTATAATATATAATATATATAATATGTATAGATATAATAGTAATATAATACGCGTATAATATATAATATATAATATATAATAGGTATAATAGCTATAATATATAATATATAATA", "TATAATATA")