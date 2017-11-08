# s1 --> columns
# s2 --> rows


def editDistance(s1, s2):
    lenS1 = len(s1)
    lenS2 = len(s2)
    L = [[ 0 for x in range(lenS1+1) ] for x in range(lenS2+1) ]

    for i in range(lenS2+1):
        for j in range(lenS1+1):

            if i == 0:
                L[i][j] = j   #insertion
                
            elif j == 0:
                L[i][j] = i   #deletion

            elif s2[i-1] == s1[j-1]:
                L[i][j] = L[i-1][j-1]

            else:
                L[i][j] = 1 + min(L[i][j-1],
                                  L[i-1][j],
                                  L[i-1][j-1])
    print("Number of operations = ",L[lenS2][lenS1])

    # Traceback
    
    updated_s2 = ""
    i = lenS2
    j = lenS1
    step = 0

    while i > 0 or j > 0:
        up = L[i-1][j]+1
        left = L[i][j-1]+1
        step+=1
        
        if s1[j-1] == s2[i-1]:          #MATCH --> go diagonal + Do Nothing
            updated_s2 += s2[i-1]
            i = i-1
            j = j-1
            print(step,"-Do nothing")
            print("    Updated String : ", updated_s2)
        else:                               # MIS-MATCH
            diagonal = L[i-1][j-1]+1
            if up <= left and up <= diagonal :    # go up 
                updated_s2 += s2[i-1]
                print(step,"-Insert ",s2[i-1])
                print("    Updated String : ", updated_s2)
                i = i-1
            elif left < up :            # go left
                updated_s2 += "-"
                print(step,"Delete ",s1[j-1])
                print("    Updated String : ", updated_s2)
                j = j-1

            elif diagonal < up :        # go diagonal 
                updated_s2 += s2[i-1]
                print(step,"Convert ",s1[j-1]," into ",s2[i-1])
                print("    Updated String : ", updated_s2)
                i = i-1
                j = j-1
                
            
            
        

    

str1 = "PARK"
str2 = "SPAKE"

editDistance(str1, str2)
    
