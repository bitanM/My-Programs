'''class computer:
	def __init__(self,cpu,ram):
		self.cpu = cpu
		self.ram = ram
		print(self.cpu, self.ram)
	def config(self):
		print("8 TB")
com1 = computer("Ryzen",8)
com1.config()'''
'''class Computer:
	# def __init__(self) -> None:
	screensize = 0
	price = 0
	OS = "0"
	Name = "0"
	def Machine(self):
		print("Product: ",self.Name)
		print("The Screen Size is: ",self.screensize," inches")
		print("The Price is: ",self.price,"INR")
		print("The OS is: ",self.OS)
		
class Laptop(Computer):
	warranty = 2
	Name = "Laptop"
	screensize = 14
	price = 55000
	OS = "Linux"
	def Show(self):
		super().Machine()
		print("Warranty: ",self.warranty,"years")
		
class Mobile(Computer):
	warranty = 3
	Name = "Mobile"
	screensize = 6
	price = 12000
	OS = "Android"
	def Show(self):
		super().Machine()
		print("Warranty: ",self.warranty,"years")
lptp = Laptop()
mbl = Mobile()
lptp.Show()
mbl.Show()'''
