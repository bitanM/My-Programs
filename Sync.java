
class callme{
	synchronized void call(String msg){
		System.out.println("[ " + msg );
		try{
			Thread.sleep(1000);
		}
		catch(InterruptedException e){
			System.out.println("Interrupted");
		}
		System.out.println(" ]");
	}
}
class caller implements Runnable{
	String msg;
	callme target;
	Thread t;
	caller(callme target, String msg){
		this.target = target;
		this.msg = msg;
		t = new Thread(this);
	}
	public void run(){
		target.call(msg);
	}
}
class Sync{
	public static void main (String[]ar){
		callme target = new callme();
		caller ob1 = new caller(target, "Hello");
		caller ob2 = new caller(target, "Synchronized");
		caller ob3 = new caller(target, "World");
		
		ob1.t.start();
		ob2.t.start();
		ob3.t.start();
		
		try{
			ob1.t.join();
			ob2.t.join();
			ob3.t.join();
		}
		catch(InterruptedException e){
			System.out.println("Interrupted");
		}
	}
}
