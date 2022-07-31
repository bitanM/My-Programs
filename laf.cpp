#include<iostream>
using namespace std;

class tollbooth
{
	private:
		int no_cars;
		int amount;
	public:
		tollbooth()
		{
			no_cars=0;
			amount=0;
		}
	void payingcar();
	void nopayingcar();
	void display();
};

	void tollbooth::payingcar()
		{
			no_cars=no_cars+1;
			amount=amount+50;
		}
	void tollbooth::nopayingcar()
		{
			no_cars=no_cars+1;
		}

	void tollbooth:: display()
	{
		cout<<"Total number of cars passed "<<no_cars;
		cout<<"\nTotal amount collected "<<amount<<endl;
	}

int main()
{
	tollbooth tb;
	int a;

	while(true)
	{
	printf("Enter 1 for paying cars 2 for non paying cars 3 for finding total: ");
		scanf("%d",&a);

	if(a==1)
	{
		tb.payingcar();
	}
	else if(a==2)
	{
		tb.nopayingcar();
	}
	else if(a==3)
	{
		break;
	}
	}
		tb.display();
}
