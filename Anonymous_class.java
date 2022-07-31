class A{
	public void show(){
		System.out.println("Wtf");
	}
}
class Anonymous_class{
	public static void main (String []args){
		A obj = new A()
			{
				public void show(){
					System.out.println("Go to Hell");
				}
			};
		obj.show();
		A obj2 = new A();
		obj2.show();
	}
}
