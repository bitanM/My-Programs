package Bean.com;

public class Client {
	public static void main(String[] args) {
		BankServer bs = new BankServer();
		bs.set_userid("47842346");
		bs.set_username("Tintin");
		bs.set_Account_no(18824850);
		bs.set_password("snowy@marlinspike");
		bs.set_balance(80000);
		Client c = new Client();
		c.printClient(bs);
	}
	
	public void printClient(BankServer bServer) {
		System.out.println(bServer);
	}
	
}
