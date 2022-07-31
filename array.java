/*public class array
{
	public static void main(String[]args)
	{
			float []arr = new float[5];
		 arr[0]=25.8f;
		 arr[1]=28.7f;
		 arr[2]=34.5f;
		 arr[3]=26.7f;
		 arr[4]=39.8f;

	float sum= arr[0]+arr[1]+arr[2]+arr[3]+arr[4];

		System.out.println(sum);

		float sum=0;
	for(int i=0;i<arr.length;i++)
		{
			sum=sum+arr[i];
		}
	}
		System.out.println(sum);
}*/
/*import java.util.Scanner ;
public class array
{
	public static void main(String[]args)
	{
		int []arr = new int[5];
	arr[0]=4;
	arr[1]=6;
	arr[2]=5;
	arr[3]=8;
	arr[4]=1;

	  Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();

		int c = 0;
		for(int i=0;i<arr.length;i++)
		{
			if(a==arr[i])
			{
				c = c+1;
			}
		}
				if(c==1)
				{
					System.out.println("It's in the list.");
				}
				else
				{
					System.out.println("It's not in the list.");
				}
	}
}*/
/*public class array
{
	public static void main(String[]args)
	{
		int []arr = new int[5];

		arr[0]=89;
		arr[1]=92;
		arr[2]=78;
		arr[3]=88;
		arr[4]=65;

	for(int elements:arr)
		{
			System.out.println(elements);
		}
			int sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
			int avg = sum/arr.length;
	System.out.println("");
	System.out.println(avg);
	}
}*/
/*public class array
{
	public static void main(String[]argv)
	{
		int [][]arr1 = new int[2][3];
		int [][]arr2 = new int[2][3];
		int [][]sum = new int[2][3];

		arr1[0][0]=2;
		arr1[0][1]=4;
		arr1[0][2]=8;
		arr1[1][0]=5;
		arr1[1][1]=6;
		arr1[1][2]=7;

		arr2[0][0]=11;
		arr2[0][1]=15;
		arr2[0][2]=16;
		arr2[1][0]=13;
		arr2[1][1]=12;
		arr2[1][2]=14;

		for(int i=0;i<2;i++)
		{
			for(int j=0;j<3;j++)
			{
				sum[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
		  for(int i=0;i<2;i++)
                {
                        for(int j=0;j<3;j++)
                        {
				System.out.print(arr1[i][j]);
				System.out.print("+");
				System.out.print(arr2[i][j]);
				System.out.print("=");
				System.out.println(sum[i][j]);
//				System.out.print(" ");
		        }
			System.out.println("");
		}
	}
}*/
/*public class array
{
	public static void main(String[]args)
	{
		int []arr = new int[5];
		arr[0]=85;
		arr[1]=73;
		arr[2]=89;
		arr[3]=190;
		arr[4]=86;

			int max = arr[0];
		for(int i=1;i<arr.length;i++)
		{
			if(arr[i]>arr[i-1])
			{
				max = arr[i];
			}
			else
				max = arr[i-1];
		}
	System.out.println(max);
	}
}*/

/* 
 * To learn the use of length in two dimensional array
*/

/*import java.util.Scanner;
class array {
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Two dimensional array");
		System.out.print("Enter first dimension: ");
		int m = sc.nextInt();
		int[][] arr = new int[m][];
		
		for (int i = 0; i < m; i++){
			System.out.print("Enter second dimension of arr["+i+"]: ");
			int n = sc.nextInt();
			arr[i] = new int[n];
		}
		
		
		System.out.println("Enter array elements:");
		for (int i = 0; i < m; i++){
			System.out.println("Row " + i );
			System.out.println("Enter " + arr[i].length + " elements");
			for (int j = 0; j < arr[i].length; j++){
				arr[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("Two dimensional array");
		for (int i = 0; i < arr.length; i++){
			for (int j = 0; j < arr[i].length; j++){
				System.out.printf("%4d", arr[i][j]);
			}
			System.out.println();
		}
	} 
}*/
