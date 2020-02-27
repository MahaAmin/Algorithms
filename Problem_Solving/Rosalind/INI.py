from Bio.Seq import Seq
my_seq = Seq("CTTCTCAATAGCAATATGTGGCAAGAACTCACTTGGTCCGCTTGACTGGGTGACGCTCTCTGGTCACTATCTGGTCTGCGAGTGCTGTGGACTCGGAACGATCAAGATCTAGACGCGCCGATTTGGCTCCACCCCATAATCAGTAACAGTCGCACTTAGGATATATAGTCGACGCCTGACTGGTTCCTATGAAGCACGATTTTCACTGGTACTGACTGTCTTGTGCATTATGTCGTCGTTCTTAATACACGCAGTGCATGCGTCGAGATCGAACGATTGGGCGGACTTTCCTGGTTGCTGAAGGAGAAACGCATGCTAGTTAAGTGCCCGTAGCTTACCCCCGAGTATATATACCGGCTCCAATTGTGGAACATTATAAAGGTCAGCCGAGGAACATGTGTGGGACCCAGTTAATTCAGTCATGCAGCTAACGTCAATGAGCAGGAATCGTGGGTTCCGTATCTTATTACAGAGTGTCCGGCGACGCTGATAGCCAGACGCGACTGAGTGATAATACACTCTTGAGCTGTGTTCAGTACACTTTCCGTGGCGAATCAAGGTATCCTCGACCGATTACATTGCGAGCTGTGTCCATGAGCAAAGAAGGATCGCAGTATGGTCTACCATGCATCTAATGAGATAATACTTGGTGGCTATAACCTCCTATCAAGCGTTAATAGAGTGATTTTTTACAGATCAAGATCGTGTGGAGTCGCTGCACTTGTAAGCTACATTTCTAAGCCGCTTGCTTTCTGAGGCACGGCAGATTAGCTGGTTGAGGCGCAGACCACCGAAAAAATCATGCTAGTTCCCCGTGCTCTGAAACGAAACAACATGGGG")
a = my_seq.count("A")
g = my_seq.count("G")
c = my_seq.count("C")
t = my_seq.count("T")

print(str(a) + " " + str(c) + " " + str(g) + " " + str(t))
