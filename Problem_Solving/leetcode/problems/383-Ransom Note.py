import string
# alphabet_dict = dict.fromkeys(string.ascii_lowercase, 0)
# print(alphabet_dict)

def canConstruct(ransomNote: str, magazine: str) -> bool:
    dict_ransomNote = dict.fromkeys(string.ascii_lowercase, 0)
    dict_magazine = dict.fromkeys(string.ascii_lowercase, 0)

    for letter in ransomNote:
        dict_ransomNote[letter]+=1
    for letter in magazine:
        dict_magazine[letter]+=1
    
    can_construct = True
    for letter in ransomNote:
        if dict_ransomNote[letter] > dict_magazine[letter]:
            can_construct = False
    return can_construct

ransomNote = "a"
magazine = "b"
print(canConstruct(ransomNote, magazine))