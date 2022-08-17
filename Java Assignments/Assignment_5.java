/*import java.io.*;
class Assignment_5 {
	public static void main(String[] args) throws IOException{
		File f1 = new File(args[0]);
		File f2 = new File(args[1]);
		FileInputStream fis = null;
		FileOutputStream fos = null;
		try {
			if(f1.createNewFile() && f2.createNewFile()){
				FileWriter fw = new FileWriter(f1);
				fw.write("This is Assignment 5");
				fw.close();
				fis = new FileInputStream(f1);
				fos = new FileOutputStream(f2);
				int c;
				while ((c = fis.read()) != -1) {
					fos.write(c);
				}
				System.out.println("copied the file successfully");
			}
			else{
				System.out.println("File already exists");
			}
		}
		finally {
			if (fis != null) {
				fis.close();
			}
			if (fos != null) {
				fos.close();
			}
		}
	}
}
*/
class Producer implements Runnable {
	String str = "Njewqfwjif";
	Thread t = new Thread(this);
	public synchronized void run(){
		try{
			for(int i=0; i<4; i++){
				System.out.println("This is Producer.");
				System.out.println(str);
				t.sleep(1000);
			}
		}
		catch(Exception e){
			System.out.println("ERROR");
		}
	}
}
class Consumer extends Thread {
	String str = " ";
	Consumer(){
		super();
		start();
	}
	public synchronized void run(){
		try{
			for(int i=0; i<4; i++){
				System.out.println("This is Consumer.");
				System.out.println(str);
				super.sleep(1000);
			}
		}
		catch(Exception e){
			System.out.println("ERROR");
		}
	}
}
class Assignment_5{
	public static void main (String[]ar){
		//String str;
		Producer pd = new Producer();
		Consumer cm = new Consumer();
		pd.t.start();
		cm.run();
		try{
			pd.t.join();
			cm.join();
		}
		catch(Exception e){
			System.out.println("ERROR");
		}
	}
}

