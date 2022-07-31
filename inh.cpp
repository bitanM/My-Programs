/*#include<iostream>
using namespace std;

class counter
{
	protected :
		int count;
	public :
		counter() : count(0)
		 { }
		counter(int c) : count(c)
		 { }
		int get_count() const
		 { return count;}
		counter operator ++ ()
		 { return counter (++count);}
};
class countdn : public counter
{
	public :
		counter operator --()
			{ return counter(--count);}
};
int main()
{
	countdn c1;

	cout<<"\nc1="<<c1.get_count();

	++c1; ++c1; ++c1;
	cout<<"\nc1="<<c1.get_count();

	--c1; --c1;
	cout<<"\nc1="<<c1.get_count();
	cout<<endl;
	return 0;
}*/
/*#include <iostream>
using namespace std;

class ABC
{
private:
    int j;
protected:
    int m;
public:
    int l;
ABC()
{
    j=0;m=0;l=0;
}
ABC(int i, int o, int p)
{
    j=i;
    m=o;
    l=p;
}
void display()
{
    cout<<"Value of J is: "<<j<<endl<<"Value of m is: "<<m<<endl<<"Value of L is: "<<l<<endl;
}
};

class B: public ABC
{
public:
    B()
    {
        m=23;
        l=67;
    }
    void display_B()
    {
        cout<<"Value of m is: "<<m<<endl<<"Value of L is: "<<l<<endl;
    }
};

int main()
{
    ABC ghi(8,10,12);
    ghi.display();
    B ol;
    ol.display();
    ol.display_B();
    return 0;
}*/
/*#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;

class ABC
{
private:
    int j;
protected:
    int m;
public:
    int l;
ABC()
{
    j=1;m=1;l=1;
    cout<<"j="<<j<<" "<<"m="<<m<<" "<<"l="<<l<<endl;
}
void display()
{
    cout<<"Value of J is: "<<j<<endl<<"Value of m is: "<<m<<endl<<"Value of L is: "<<l<<endl;
}
};
class DEF: protected ABC
{
public:
    int d, k, e;
    DEF()
    {
     d=2,k=20,e=3;
     cout<<"Value of D is: "<<d<<endl<<"Value of K is: "<<k<<endl<<"Value of E is: "<<e<<endl;
    }
    void DEF_display()
    {
        display();
    }
};

class B: public DEF
{
public:
    B()
    {
        m=23;
        l=67;
        cout<<"m="<<m<<" "<<"l="<<l<<endl;
    }
    void display_B()
    {
        cout<<"Value of m is: "<<m<<endl<<"Value of L is: "<<l<<endl;
    }
};

int main()
{
    cout<<"Printing for constructors"<<endl;
    B ol;
    cout<<"Printing for display function of ABC class"<<endl;
    ol.DEF_display();
    cout<<"Printing for own display_B function"<<endl;
    ol.display_B();
    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;

class account
{
	private:
		string name;
		int accnt_num;
		char accnt_type;

	protected:
		int amnt;
		float intr;
		float balance=500;

	public:
		void details()
			{
				cout<<"Enter the name: "<<endl;
				cin>>name;
				cout<<"Enter the account number: "<<endl;
				cin>>accnt_num;
				cout<<"Enter the account type [S for savings/C for current]: "<<endl;
				cin>>accnt_type;
			}
		void deposit();
		void display();
		void deposit_int();
		void withdraw();
};
void account :: deposit()
{
	cout<<"Enter the deposit account: ";
	cin>>amnt;

	balance=balance+amnt;
}
void account :: display()
{
	cout<<"Your account balance is: "<<balance;
}
void account :: deposit_int(int intr,int balance)
{
	int mn;
	cout<<"Enter the months: "<<endl;
	cin>>mn;

	intr=balance*.045*mn;
	balance=balance+intr;
}
void account :: withdraw()
{
	cout<<"Enter the withdrawing ammount: ";
	cin>>amnt;

	balance=balance-amnt;
}
class curr_acct: public account
{
	public:
		void deposit();
		void withdraw();
};
class sav_acct: public account
{
	public:

	        void withdraw();
		void deposit_int();
		void deposit();
};
int main()
{
	account a;
	curr_acct c;
	sav_acct s;
	a.details();
	void accnt_type(char c,char s);
	if(accnt_type==c)
	{
		c.display();
		int job;
		cout<<"1 for Deposit/2 for Withdraw";
		cin>>job;

		if(job==1)
		{
			c.deposit();
			c.display();
		}
		if(job==2)
		{
			c.withdraw();
			c.display();
		}
	}
	if(accnt_type==s)
	{
		s.deposit_int();
		s.display();
		int job;
		cout<<"1 for Deposit/2 for Withdraw";
		cin>>job;

		if(job==1)
		{
			s.deposit();
			s.display();
		}
		if(job==2)
		{
			s.withdraw();
			s.display();
		}
	}
}
/*#include <cmath>
#include <iostream>
#include <string>
using namespace std;

class account
{
protected:
    string customer_name;
    long account_number;
    char type_of_account;
    float balance;

public:
    void acceptCustomerDetails();
    void acceptDepositAndUpdateBalance();
    void displayBalance();
};

class cur_acct : public account
{
public:
    void chequeBook();
    float serviceCharge();

private:
    const float MINIMUM_BALANCE = 500.0;
};

class sav_acct : public account
{
public:
    float compoundInterest();
    bool withdrawl();
};

void account::acceptCustomerDetails()
{
    // accept details of customer

    cout << "Enter the name of the customer:\n";
    cin >> customer_name;
    cout << "Enter account number:\n";
    cin >> account_number;
    cout << "Press 'S' for savings account and 'C' for current account.\n";
    cout << "Enter type of account:\n";
    cin >> type_of_account;
}

void account::acceptDepositAndUpdateBalance()
{
    // accept deposit amount and update balance

    cout << "Enter the deposit amount:\n";
    float amount;
    cin >> amount;
    balance += amount;
}

void account::displayBalance()
{
    // display balance

    cout << "Current balance = " << balance << "\n";
}

float sav_acct::compoundInterest()
{
    // compute and deposit interest

    const float RATE_OF_INTEREST = 7.5;
    
    cout << "Enter number of months elapsed:\n";
    int months;
    cin >> months;
    float interest = pow(balance * (1.0 + (RATE_OF_INTEREST / months)), 12.0 * months) - balance;
    return interest;
}

bool sav_acct::withdrawl()
{
    // permit withdrawl and update balance

    cout << "Enter the amount to be withdrawn:\n";
    float amount;
    cin >> amount;
    if (amount > balance)
        return false;
    balance -= amount;
    return true;
}

float cur_acct::serviceCharge()
{
    // impose penalty as necessary

    const float PENALTY = 0.05;
    
    return PENALTY * balance;
}

void cur_acct::chequeBook()
{
    // check for minimum balance, impose penalty if necessary, and update balance

    if (balance < MINIMUM_BALANCE)
    {
        float penalty = serviceCharge();
        balance -= penalty;
    }
}

int main()
{
    
}*/
#include<iostream>
using namespace std;

int main()
{
	int sample[5]={5,10,15,20,25};
	cout<<*sample[2]+2<<endl;
	cout<<*(sample[2]+2);
	return 0;
}




































