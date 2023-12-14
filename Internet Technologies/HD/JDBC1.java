//Update the roll no. of student to 24 whose ID is 13 from Student database.
import java.sql.*;
class UpdateRow{
	public static void main(String[] args){
		try{
			Connection con = DriverManager.getConnection(url, username, password)
			PreparedStatement stmt = con.prepareStatement(“UPDATE Student SET Roll No. = ? WHERE ID = ?”);
			int sid = 13;
			int roll = 24;
			stmt.setInt(1, sid);
			stmt.setInt(2, roll);
			int i = stmt.executeUpdate();
			if(i>0){
				System.out.println(“Row updated successfully”);
			}
			else{
				System.out.println(“No student found with ID “+sid);
			}
		} catch(SQLException e){
			e.printStackTrace();
		}
	}
}
