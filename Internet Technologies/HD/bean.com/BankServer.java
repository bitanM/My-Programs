package IT;

public class BankServer implements java.io.Serializable {
	private String userid, username, password;
	private long Account_no;
	private double balance;
	
	// Getter
	public String get_userid(){
		return userid;
	}
	public String get_username() {
		return username;
	}
	public String get_password() {
		return password;
	}
	public long get_account_num() {
		return Account_no;
	}
	public double get_balance() {
		return balance;
	}
	
	//Setter
	public void set_userid(String userid) {
		this.userid = userid;
	}
	public void set_username(String username) {
		this.username = username;
	}
	public void set_password(String password) {
		this.password = password;
	}
	public void set_Account_no(long Account_no) {
		this.Account_no = Account_no;
	}
	public void set_balance(double balance) {
		this.balance = balance;
	}
	@Override
	public String toString() {
		return "BankServer [userid=" + userid + ", username=" + username + ", password=" + password + ", Account_no="
				+ Account_no + ", balance=" + balance + "]";
	}
	
	public void credit(double amount){
		this.balance += amount;
		System.out.println("Your account is credited with Rs. "+amount+". Now the balance is Rs. "+balance);
	}
	
	public void debit(double amount){
		if(amount>this.balance){
			System.out.println("The requested amount could not be debited.");
		}
		else{
			this.balance -= amount;
		System.out.println("The amount of Rs. "+amount+"is debited from your account. Your existing balance is Rs. "+balance);
		}
	}
}
