def is_leapYear(year):
    if (year%400==0):
        print("The year is a leap year")
    elif year%100!=0 and year%4==0:
        print("The year is a leap year")
    else:
        print("The year is not a leap year")
        
year= int(input("Enter the year of your choice:"))
is_leapYear(year)