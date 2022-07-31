/*#include<iostream>
using namespace std;

class my_class
{
	int val1,val2;
	float val3,val4,val5;

	public :
		my_class:
		{
			val1=0;
			val2=0;
			val3=0.0;
			val4=0.0;
			val5=0.0;
		}
		my_class(int val1,int val2)
		{
			this->val1=val1;
			this->val2=val2;
			val3=5.5;
			val4=5.5;
			val5=5.5;
		}
		my_class(float ft1,float ft2, float ft3)
		{
			val1=5;
			val2=5;
			val3=ft1;
			val4=ft2;
			val5=ft3;
		}
	int sum();
	int sum(int val1,int val2);
	float sum(float val1,float val2);
	int sub;
	void display_member_vals();
};
	int my_class::sum()
	{
		return this->val1+this->val2;
	}
	int my_class::sum(int val1,int val2)
	{
		return val1+val2;
	}
	float my_class::sum(float val1,float val2)
	{
		return val1+val2;
	}
	int my_class::sub()
	{
		return this->val1-this->val2;
	}
	void my_class::display_member_vals()
	{
		cout<<"val1"<<"\t"<<"val2"<<"\t"<<"val3"<<"\t"<<"val4"<<"\t"<<"val5"<<"\t";
		 cout<<val1<<"\t"<<val2<<"\t"<<val3<<"\t"<<val4<<"\t"<<val5<<"\t";
	}
int main()
{
	my_class m = my_class(67,13);
	my_class m2 = my_class(20,30);
	my_class m3 = my_class(23.45,76.89,45.12);
	my_class m4 = my_class();
	cout<<m.sum()<<endl;
	cout<<m2.sum(34,75)<<endl;
	cout<<m.sub<<endl;
	m.display_member_vals();
	m2.display_member_vals();
	m3.display_member_vals();
	m4.display_member_vals();
	cout<<endl;
	cout<<m2.sum((float)35.23,(float)35.78)<<endl;
	return 0;
}*/
#include <iostream>
using namespace std;

class my_class
{
int val1,val2;
float val3, val4, val5;

public:
my_class()
{
val1=0;
val2=0;
val3=0.0;
val4=0.0;
val5=0.0;
}
my_class(int val1, int val2)
{
this->val1=val1;
this->val2=val2;
val3=5.5;
val4=5.5;
val5=5.5;
}
my_class (float ft1, float ft2, float ft3)
{
val1=5;
val2=5;
val3=ft1;
val4=ft2;
val5=ft3;
}

int sum();
int sum(int val1, int val2);
float sum(float val1,float val2);
int sub();
void display_member_vals();
};


int my_class :: sum()
{
return this->val1+this->val2;
}

int my_class :: sum(int val1, int val2)
{
return val1+val2;
}

float my_class :: sum(float val1, float val2)
{
return val1+val2;
}

int my_class :: sub()
{
    return this->val1-this->val2;
}

void my_class :: display_member_vals()
{
cout<< "value 1" << "\t" << "value 2"<< "\t" << "value 3" << "\t" << "value 4" << "\t" << "value 5" <<endl;
cout<< val1 << "\t" << val2<< "\t" << val3 << "\t" << val4 << "\t" << val5 <<endl;
}

int main()
{

my_class m=my_class(67,13);
my_class m2=my_class(20,30);
my_class m3=my_class(23.45,76.89, 45.12);
my_class m4=my_class();
cout<< m.sum()<<endl;
cout << m2.sum(34,76)<<endl;
cout <<m.sub()<<endl;
m.display_member_vals();
m2.display_member_vals();
m3.display_member_vals();
m4.display_member_vals();
cout<<endl;
cout<< m2.sum((float)35.23, (float)35.78)<<endl;
return 0;
}

