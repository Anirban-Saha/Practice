number_list = []
n = int(input("Enter the list size "))

print("\n")
for i in range(0, n):
    print("Enter number at index", i )
    item = int(input())
    number_list.append(item)
# The maximum value out of all the list elements is 
print("The maximum value out of all the elements is:", max(number_list))