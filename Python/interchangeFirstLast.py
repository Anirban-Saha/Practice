number_list = []
n = int(input("Enter the list size "))

print("\n")
for i in range(0, n):
    print("Enter number at index", i )
    item = int(input())
    number_list.append(item)
number_list[0],number_list[-1]=number_list[-1],number_list[0]
print(number_list)