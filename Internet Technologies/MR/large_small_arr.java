//Write a program to find the largest and smallest element in an array.
import java.util.*;
public class basic{
        public static void main(String[]args){
                Scanner in = new Scanner(System.in);
                System.out.println("Enter the size of array");
                int size = in.nextInt();
                int arr[] = new int[size];
                System.out.println("Enter the elements: ");
                for(int i=0; i<size; i++){
                        arr[i] = in.nextInt();
                }
                int max = arr[0];
                int min = arr[0];
                for(int i=0; i<size; i++){
                        if(arr[i]>max)
                                max = arr[i];
                        if(arr[i]<min)
                                min = arr[i];
                }
                System.out.println("Largest element is: "+max);
                System.out.println("Smallest element is: "+min);
        }
}
