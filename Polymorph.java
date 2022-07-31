class A{
	int a=4;
	int b=6;
	void diff(){
		if(b>a)
			System.out.println(b-a);
		else
			System.out.println(a-b);
	}
}
interface C{
	void multi();
	void div();
}
class B implements C extends A{
	void sum(){
		System.out.println(a+b) ;
	}
	public void multi(){
		System.out.println(a*b);
	}
	public void div(){
		System.out.println(b/a);
	}
}
class Polymorph{
	public static void main (String [] arg){
		B ob = new B();
		A oa = new A();
		B on = ob;
		on.a = 10;
		on.diff();
		on.sum();
		on.multi();
		on.div();
	}
}
