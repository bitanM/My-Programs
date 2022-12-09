/*import java.io.*;
class Filehand{
	public static void main(String[]ar) throws Exception{
		File f0 = new File("Folder.1");
		if(f0.mkdir()){
			File f1 = new File("Folder.1//Name.txt");
			if(f1.createNewFile()){
				FileWriter fw = new FileWriter(f1);
				fw.write("Name is Khan");
				fw.close();
			}
			else{
				System.out.println("File aleready exists");
			}
		}
		else{
			System.out.println("Folder already exists.");
		}
	}
}
*/


/*
import java.io.*;
class Filehand{
	public static void main (String[]ar) throws Exception{
		File f1 = new File(ar[0]);
		if(f1.createNewFile()){
			System.out.println("New file created");
		}
		else{
			System.out.println("No such file");
		}
	}
}
*/
