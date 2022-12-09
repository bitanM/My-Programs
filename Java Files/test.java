/*class test{
	static void vaTest(int ... u){
		System.out.print("vaTest(...int): "+"Number of args: "+u.length+" Contents: ");
		for(int x:u)
			System.out.print(x+" ");
		System.out.println();
	}
	static void vaTest(boolean ... u){
		System.out.print("vaTest(...boolean): "+"Number of args: "+u.length+" Contents: ");
		for(boolean y:u)
			System.out.print(y+" ");
		System.out.println();
	}
	public static void main(String []args){
		vaTest(1,2,3);
		vaTest(true,false,true);
	}
}
*/
/*import java.util.Scanner;
class test{
	public static void main (String[]ar){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number : ");
		int num = sc.nextInt();
		int pm = 0;
		if(num%2==0)
			pm = 0;
		else{
			for(int i = 2; i<num; i++){
				if(num%i==0)
					pm = 0;
				else
					pm = 1;
				}
			}
		if(pm==1)
			System.out.println("The number is a prime");
		else
			System.out.println("The number is not a prime");
		}
	}
*/
/*class test{
	public static void main (String[]ar){
		int sum = 0;
		int am = 0;
		for(int i=0; i<ar.length; i++){
				am = Integer.parseInt(ar[i]);
				sum += am;
			}
		System.out.println(sum);
	}
}
*/

