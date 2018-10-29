# def GC(fileName):
#     # read file and split it into lines
#     with open(fileName, 'r') as f:
#         lines = f.readlines()
#
#     max_gc = 0.0
#     max_id = ""
#
#     for line in lines:
#         gc = 0.0
#         l = len(line) - 1
#         if line[0] == ">":
#             id = line[1:-1]
#         else:
#             for i in range(l):
#                 if(line[i] == "G" or line[i] == "C"):
#                     gc += 1.0
#             if gc/l > max_gc:
#                 max_gc = gc/l
#                 max_id = id
#
#     return max_id, max_gc*100

def GC(fileName):
    # read file and split it into lines
    with open(fileName, 'r') as f:
        lines = f.readlines()

    SEQS = {}
    seq = ""
    max_gc = 0.0
    max_id = ""
    for line in lines:
        if(line[0] == ">"):
            key = line[1:-1]
            SEQS[key] = ""
            continue
        else:
            SEQS[key] += line[0:-1]

    for key in SEQS:
        gc = 0.0
        l = len(SEQS[key])
        for i in range(l):
            if(SEQS[key][i] == "G" or SEQS[key][i] == "C"):
                gc += 1.0
        if gc/l > max_gc:
            max_gc = gc/l
            max_id = key

    return max_id, max_gc*100







id , gc = GC("rosalind_gc.txt")

print(id + " " + str(gc) + "%")
