import java.util.*;

class MatrixMultiply{
	public static void main(String[] args){
		int row1, row2, col1, col2;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the row size of 1st matrix: ");
		row1 = sc.nextInt();
		System.out.println("Enter the column size of 1st matrix: ");
		col1 = sc.nextInt();
		System.out.println("Enter the row size of 2nd matrix: ");
		row2 = sc.nextInt();
		System.out.println("Enter the column size of 2nd matrix: ");
		col2 = sc.nextInt();

		if(col1!=row2){
			System.out.println("This matrix can not be multiplied.");
			return;
		}

		int [][] mat1 = new int[row1][col1];
		int [][] mat2 = new int[row2][col2];

		System.out.println("Enter the first matrix: ");
		for(int i=0; i<row1; i++){
			for(int j=0; j<col1; j++){
				mat1[i][j] = sc.nextInt();
			}
		}

		System.out.println("Enter the second matrix: ");
		for(int i=0; i<row2; i++){
			for(int j=0; j<col2; j++){
				mat2[i][j] = sc.nextInt();
			}
		}

		int [][]mul = new int[row1][col2];
		for(int i=0; i<row1; i++){
			for(int j=0; j<col2; j++){
				for(int k=0; k<row2; k++){
					mul[i][j] += mat1[i][k]*mat2[k][j];
				}
			}
		}

		System.out.println("The first matrix will be: ");
		for(int i=0; i<row1; i++){
			for(int j=0; j<col2; j++){
				System.out.print(" "+mat1[i][j]);
			}
			System.out.println();
		}

		System.out.println("The second matrix will be: ");
		for(int i=0; i<row1; i++){
			for(int j=0; j<col2; j++){
				System.out.print(" "+mat2[i][j]);
			}
			System.out.println();
		}

		System.out.println("The new matrix will be: ");
		for(int i=0; i<row1; i++){
			for(int j=0; j<col2; j++){
				System.out.print(" "+mul[i][j]);
			}
			System.out.println();
		}
	}
}
