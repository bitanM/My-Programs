//Write a program to perform insertion and deletion ops in an array based on index.
import java.util.*;

class Array_Insert_Delete{
	static int[] arr;
	static int n;
	static int pos; 
	
	static void insertion(int num){
		for(int i=n-1; i>=pos; i--){
			arr[i+1] = arr[i];
		}
		arr[pos] = num;
		n++;
	}
	static void deletion(){
		for(int i=pos; i<n; i++){
			arr[i] = arr[i+1];
		}  
		n--;
	}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		arr = new int[500];
		System.out.println("Enter the size: ");
		n = sc.nextInt();
		System.out.println("Enter the elements: ");
		for(int i=0; i<n; i++){
			arr[i] = sc.nextInt();
		}
		System.out.println("To insert a number type 1");
		System.out.println("To delete a number type 2");
		System.out.println("To see the array type 3");
		while(true){
			System.out.print("Enter your choice: ");
			int opt = sc.nextInt();
			switch(opt){
				case 1:
					System.out.println("Enter the position: ");
					pos = sc.nextInt();
					System.out.println("Enter the value: ");
					int num = sc.nextInt();
					insertion(num);
					break;
				case 2:
					System.out.println("Enter the position: ");
					pos = sc.nextInt();
					deletion();
					break;
				case 3:
					for(int i=0; i<n; i++){
						System.out.print(" "+arr[i]);
					}
					System.out.println();
					break;
				default:
					System.exit(0);
			}
		}
	}
}
