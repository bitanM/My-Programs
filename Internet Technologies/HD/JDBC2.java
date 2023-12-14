// Java program to Insert rows in database.
import java.sql.*;
public class InsertRecords{
public static void main(String[] args){
	try{
		Connection con = DriverManager.getConnection(url, username, password);
		try{
			PreparedStatement stmt = connection.prepareStatement("INSERT INTO UTable (col1, col2, col3) VALUES (?, ?, ?)");
			stmt.setString(1, "val1");
			stmt.setString(2. "val2");
			stmt.setInt(3, 123);
			int rowsInserted = stmt.executeUpdate();
			if(rowsInserted>0){
			System.out.println("Record inserted successfully");
			}
			else{
			System.out.println("Failed to insert record");
			}
		}
	}catch(SQLException e){
		System.out.println(e);
	}
}
