import java.util.*;
class arraylist_insert_delete{		
		public static void main(String[] args){
		ArrayList <Integer> num_list = new ArrayList <Integer> ();
		int n;
		int pos;
		int num;
		Scanner sc = new Scanner(System.in);

			System.out.print("Enter the number of elements: ");
			n = sc.nextInt();
			System.out.println("Enter the elements: ");
			for(int i=0; i<n; i++){
				num_list.add(sc.nextInt());
			}
			while(true){
				System.out.println("To insert a number type 1");
				System.out.println("To delete a number type 2");
				System.out.println("To see the list type 3");
				System.out.println("To exit type 4");
				System.out.print("Enter your choice: ");
				int opt = sc.nextInt();
				switch(opt){
					case 1:
						System.out.println("Enter the index: ");
						pos = sc.nextInt();
						if(pos<0){
							System.out.println("Invalid Index");
						}
						else if(pos>n){
							System.out.println("Insertion is not possible.");
						}
						else{
							System.out.println("Enter the value: ");
							num = sc.nextInt();
							num_list.add(pos, num);
							n++;
						}
						break;
					case 2:
						System.out.println("Enter the index: ");
						pos = sc.nextInt();
						if(pos<0){
							System.out.println("Invalid Index");
						}
						else if(pos>n){
							System.out.println("Deletion is not possible.");
						}
						else{
							num_list.remove(pos);
							n--;
						}
						break;
					case 3:
						if(n==0){
							System.out.println("Empty list");
						}
						else{
							for(int i=0; i<n; i++){
								System.out.print(" "+num_list.get(i));
							}
							System.out.println();
						}
						break;
					case 4:
						System.exit(0);
					default:
						System.out.println("Invalid Input. Please try again");
						break;
				}
			}
		}
}
			
