s = input()
dict = {}
keys = set(s.split(' '))
words = s.split(' ')
for key in keys:
    dict[key] = 0

for word in words:
    dict[word] += 1

lines = []
for key, value in dict.items():
    line = key + " " + str(value) + "\n"
    lines.append(line)

with open("OUTPUT", 'w') as f:
    for line in lines:
        f.write(line)
