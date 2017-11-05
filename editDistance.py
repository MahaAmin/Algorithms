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
    print(L[lenS2][lenS1])

    # Traceback
    
    updated_s2 = ""
    i = lenS2
    j = lenS1

    while i > 0 and j > 0:
        up = L[i-1][j]+1
        left = L[i][j-1]+1
        
        if s1[j-1] == s2[i-1]: 
            updated_s2 += s2[i-1]
            i = i-1
            j = j-1
            print("*")
        else:
            diagonal = L[i-1][j-1]+1
            if up <= left :    # go up ^
                updated_s2 += s2[i-1]
                print(updated_s2)
                i = i-1
            #else if 
            
            
        

    

str1 = "PARK"
str2 = "SPAKE"

editDistance(str1, str2)
    
