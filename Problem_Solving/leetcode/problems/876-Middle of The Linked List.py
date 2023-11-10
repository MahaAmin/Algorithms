def middleNode(head):
    return head[int(len(head)/2):]

head = [1,2,3,4,5]
print(middleNode(head))
head = [1,2,3,4,5,6]
print(middleNode(head))