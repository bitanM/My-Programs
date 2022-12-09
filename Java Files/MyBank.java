/*Write a java program to Create a package Banking under this create a 
 * class BankAccount having minimum balance, account holder name, etc. 
 * as member variables with interest rate as member function. 
 * You may add more functions if required. 
 * Now create two child classes --
 * SavingsAccount and FixedDepositAccount of the BankAccount class. 
 * Interest rate of SavingsAccount and FixedDepositAccount should be different. 
 * Now in main create atleast one SavingsAccount and one 
 * FixedDepositAccount of yours. Add money to those accounts; calculate 
 * the interest of these accounts after five years; also credit and 
 * debit money from the SavingsAccount with some transactions.*/
package Banking;

class BankAccount{
	double minbalance;
	String Holder_name;
	double balance ;
	int year;
	String account_type;
	BankAccount(String Holder_name,	double balance, int year, double minbalance, String account_type){
		this.Holder_name = Holder_name;
		this.balance = balance;
		this.year = year;
		this.minbalance = minbalance;
		this.account_type = account_type;
		System.out.println("Account type: "+account_type);
		System.out.println("Name: "+Holder_name);
		System.out.println("Balance: "+balance);
		System.out.println("Accounts active: "+year+" years");
	}
	public double ROI(double roi){
		//this.roi = roi;
		if(balance>=minbalance){
		balance = ((this.balance*(roi/100))*this.year)+this.balance;
		return balance;
		}
		else{
		System.out.println("You don't have sufficient balance");
		return balance;
		}
	}
}
class SavingsAccount extends BankAccount{
	SavingsAccount(String Hs, double bs, int ys, double mb, String act){
		super(Hs, bs, ys, mb, act);
	}
	public double SAI(double rs){
		return super.ROI(rs);
	}
	public double debit(double dbt){
		if(balance>=minbalance){
			balance = this.balance-dbt;
			return balance;
		}
		else{
			System.out.println("You don't have sufficient balance for this trunsaction");
			return balance;
		}
	}
	public double credit(double crd){
		if(balance>=minbalance){
			balance = this.balance+crd;
			return balance;
		}
		else{
			System.out.println("You don't have sufficient balance for this trunsaction");
			return balance;
		}
	}
}
class FixedDepositAccount extends BankAccount{
	FixedDepositAccount(String Hf, double bf, int yf, double mb, String act){
		super(Hf, bf, yf, mb, act);
	}
	public double FDAI(double rf){
		return super.ROI(rf);
	}
}
public class MyBank{
	public static void main(String[]ar){
		SavingsAccount SA = new SavingsAccount("BITAN M.", 20000, 4, 1000, "Savings Account");
		System.out.println("Your Savings Account Balance is "+SA.SAI(5));
		System.out.println("Your Account balance after trunsaction: "+SA.debit(1000));
		System.out.println("Your Account balance after trunsaction: "+SA.credit(2000));
		FixedDepositAccount FDA = new FixedDepositAccount("BITAN M.", 100000, 8, 1000, "Fixed Deposit Account");
		System.out.println("Your Ammount in FD is "+FDA.FDAI(2));
	}
}
		
					
		
		
