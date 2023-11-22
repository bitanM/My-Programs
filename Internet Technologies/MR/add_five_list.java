//Write a program to insert few integers in an ArrayList, add 5 to each element and print.
import java.util.*;
public class basic{
        public static void main(String[]args){
                ArrayList<Integer> al = new ArrayList<Integer>();
                Scanner in = new Scanner(System.in);
                System.out.println("Enter the size of the list: ");
                int size = in.nextInt();
                System.out.println("Enter the elements: ");
                for(int i=0; i<size; i++){
                        al.add(in.nextInt());
                }
                for(Integer i:al){
                        System.out.print(" "+(i+5));
                }
        }
}
