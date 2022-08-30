n=int(input("Enter the number of elements of the list"))
list_nos=[]
for item in range(0,n):
    print("Enter the element at index--", item)
    items=int(input())
    list_nos.append(items)
print("The list in Ascending order is:")
list_nos.sort(reverse=True)
print(list_nos)

