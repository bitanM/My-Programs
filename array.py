print("Enter a month: ")
month = int(input())
arrMonth = [ None , "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
season = None
if(month == 12 or month == 1):
	season = "Winter"
elif(month == 2 or month == 3):
		season = "Spring"
elif(month == 4 or month == 5):
		season = "Summer"
elif(month == 6 or month == 7):
		season = "Monsoon"
elif(month == 8 or month == 9):
		season = "Autumn"
elif(month == 10 or month == 11):
		season = "Late Autumn"

print(arrMonth[month],"is in ",season)
