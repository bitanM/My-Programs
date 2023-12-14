// Write a program to describe the working of Mutator and Accessor in JavaBeans.
public class Rectangle {
private double width ;
private double height ;

// Constructor
public Rectangle ( double width , double height ) {
  this . width = width ;
  this . height = height ;
}

 // Accessor method ( getter ) for width
public double getWidth () {
   return width ;
 }

 // Mutator method ( setter ) for width
 public void setWidth ( double width ) {
   this . width = width ;
 }

 // Accessor method ( getter ) for height
 public double getHeight () {
   return height ;
 }

 // Mutator method ( setter ) for height
 public void setHeight ( double height ) {
   this . height = height ;
 }
public static void main ( String [] args ) {
 // Creating a Rectangle object
   Rectangle rect = new Rectangle (5.0 , 10.0) ;

 // Accessing width using getter method
   System.out.println (" Initial width : " + rect . getWidth () ) ;

 // Changing width using setter method
   rect.setWidth (7.5) ;
   System.out.println (" Updated width : " + rect . getWidth () ) ;
 }
 }
}
