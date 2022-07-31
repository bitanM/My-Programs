#include<iostream>
#include<string>
using namespace std;

class staff
{
protected:
	int code;
	string name;
public:
	void details();
};
void staff :: details(int code,string name)
{
	cout<<"Enter the code"<<endl;
	cin>>code;

	cout<<"Enter the Name"<<endl;
	cin>>name;
}
class teacher: public staff
{
protected:
	string sub;
	string edu;
public:
	void details();
	void details_teacher();
};
void teacher :: details_teacher(string sub,string edu)
{
	 cout<<"Subject: ";
         cin>>sub;

	cout<<"Educational Qualification: ";
	cin>>edu;
}
class typist: public staff
{
protected:
	int speed;
public:
	void details();
	void details_typist();
};
void typist :: details_typist()
{
	char a;
	cout<<"Enter r for regular and c for casual: "
	cin>>a;
		if(a==c)
		{
			cout<<"Enter the daily wages: ";
			cin>>daily;
			cout<<"\nEnter the typing speed: ";
			cin>>speed;
		}
		if(a==r)
		{
			cout<<"\nEnter the typing speed: ";
			cin>>speed;
		}
} 
class regular: public typist
{
public:
	void details();
	void details_typist();
};
class casual: public typist
{
protected:
	int daily;
public:
	void details();
	void details_typist();
};
class officer: public staff
{
protected:
	char grade;
public:
	void details();
	void details_officer();
};
void officer :: details_officer(char grade)
{
	cout<<"Enter the grade: ";
	cin>>grade;
}
int main()
{
staff s;
teacher t;
typist y;
officer o;

