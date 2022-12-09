/*class mythread extends Thread{
	mythread(){
		super();
		start();
	}
	public void run(){
		try{
			for(int i=0; i<10; i++){
				System.out.println("729"+i);
				Thread.sleep(500);
				}
			} catch(Exception e){
				System.out.println("error!");
			}
	}
}
class mythread_2 implements Runnable{
	// start();
	public void run(){
		try{
			System.out.println("This is runnable");
		}
		catch(Exception e){
			System.out.println("error!");
		}
	}
}
class Threads{
	public static void main(String[]a){
		mythread myt = new mythread();
//		myt.run();
		mythread_2 hre = new mythread_2();
		Thread mt = new Thread(hre);
		mt.run();
		mt.setPriority(10);
		myt.setPriority(1);
		System.out.println(myt);
		System.out.println(mt);
		
	}
}
*/
/*
class callme{
	void call(String msg){
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
class Threads{
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
*/
class NewThread implements Runnable{
	Thread t;
	NewThread(){
		t = new Thread(); 	 
		System.out.println("Child thread: "+t);
	}
	public void run(){
		try{
			for(int n=5; n>0; n--){
				System.out.println(n);
				Thread.sleep(1000);
			}
		}
		catch(InterruptedException e){
			System.out.println("Child Interrupted.");
		}
		System.out.println("Existing child thread.");
	}
}
class Threads{
	public static void main(String[]ar){
		NewThread nt = new NewThread();
		nt.t.start();
		try{
			for(int i=5; i>0; i--){
				System.out.println("Main Thread: "+i);
				Thread.sleep(1000);
			}
		}
		catch(InterruptedException e){
			System.out.println("Main thread interrupted.");
		}
		System.out.println("Main thread exiting.");
	}
}
