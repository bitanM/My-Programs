// Java program to Update records into Database.
import java.sql.*;
public class UpdateRecords{
  public static void main(String[] args){
    try{
      Connection con = DriverManager.getConnection(url, username, password);
      try(PreparedStatement stmt = con.prepareStatement("UPDATE UTable SET col1 = ?, col2 = ?, WHERE ID = ?"){
        stmt.setString(1, val1);
        stmt.setString(2, val2);
        stmt.setInt(3, 829);

        int rowsUpdate = stmt.executeUpdate();
        if(rowsUpdate>0){
          System.our.println("Record updated successfully");
        }
        else{
          System.out.println("Failed to update recod");
        }
      }Catch(SQLException q):
        System.out.println(q);
    }]
