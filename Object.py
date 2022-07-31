'''class Dog:
	attr1 = "Bark"
	attr2 = "Tail wagging"
	
	def fun(self):
		print(self.attr1)
		print(self.attr2)
		
Tommy = Dog()
print(Tommy.attr1)
Tommy.fun()'''
#############################################################

'''class Box {
    double width, height, depth;
}

class BoxDemo{
    public static void main(String[]args){
        Box mybox = new Box();

        //assign values to mybox's instance variables
        mybox.width = 10;
        mybox.height = 20;
        mybox.depth = 30;

        //compute volume of mybox
        double vol = mybox.width * mybox.height * mybox.depth;
        System.out.println("Volume  = " + vol);
    }
}'''
##############################################################
'''class Box:
	width = 0
	height = 0
	depth = 0

mybox = Box()
mybox.width = 10
mybox.height = 20
mybox.depth = 30

vol = mybox.width*mybox.height*mybox.depth

print(vol)'''
#############################################################
'''class Box {
    double width, height, depth;

    //display volume of a box
    void volume(){
        System.out.println("Volume is " + width * height * depth);
    }
}

class BoxDemo3{
    public static void main(String[]args){
        Box mybox1 = new Box();
        Box mybox2 = new Box();

        //assign values to mybox1's instance variables
        mybox1.width = 10;
        mybox1.height = 20;
        mybox1.depth = 30;

        //assign values to mybox2's instance variables
        mybox2.width = 5;
        mybox2.height = 15;
        mybox2.depth = 25;

        //compute volume of first mybox
        mybox1.volume();

        //compute volume of first mybox
        mybox2.volume();
    }
}'''
#############################################################
'''class Box:
	width=0
	height=0
	depth=0
	def volume(self):
		print(self.width*self.height*self.depth)

mybox = Box()
mybox.width = 22
mybox.height = 24
mybox.depth = 32
mybox.volume()'''
############################################################
'''print("Enter the temperature in Ferhenheit: ")
f = int(input())
c = (f-32)/1.8
print("Temperature in Celcius:",c)'''
############################################################
'''test = int(input())
for i in range(0,test):
	bike= int(input())
	car = int(input())
	tyre = 0
	tyre = tyre+(2*bike)
	tyre = tyre+(4*car)
	
	print(tyre)'''
	
'''est = int(input())
for i in range(test):
	bike, car = map(int,input().split())
	tyre = 0
	tyre = tyre+(2*bike)
	tyre = tyre+(4*car)
	
	print(tyre)
x, y = map(int, input("Enter 2 number with space: ").split())

print("First Number: ", x)
print("Second Number: ", y)'''
'''test = int(input())
for i in range(test):
	x, y = map(int,input().split())
	print(int(y/x))'''
	
'''test = int(input())
for i in range(test):
	a = int(input())
	b = int(input())
	count = 0
	for i in range(1,a):
		for j in range(1,b):
			if(i+j%2==0):
				count = count+1
	print(count)'''	
	
	
	




