/*interface comics{
	void creator();
}
class People{
	String name;
	int num;
	void P(){
	if(num == 1){
		name = "Herge";
	}
	else if (num == 2){
		name = "A.C.Doyle";
	}
}
}
class Tintin implements comics extends People{
	num = 1;
	public void creator(){
		System.out.println("Creator of Tintin is "+name);
	}
}
class Sharlock implements comics extends People{
	People();
	num = 2;
	public void creator(){
		System.out.println("Creator of Sherlock Holmes is "+name);
	}
}
class Intrface{
	public static void main (String []a){
		comics tn = new Tintin();
		comics sh = new Sharlock();
		
		tn.creator();
		sh.creator();
	}
}*/
/*interface A{
	void show();
}
class Intrface{
	public static void main (String[]a){
			A ob = new A()
			{
				public void show(){
					System.out.println("Counter attack");
				}
			};	
			ob.show();
	}
}*/
/*interface A{
	void show();
}
interface B{
	void show();
}
class Intrface{
	public static void main (String[]t){
		A on = ()-> System.out.println("Sabbash!");
		B onn = ()-> System.out.println("Waah!");
		on.show();
		onn.show();
	}
}*/
//@functional interface;
/*interface A{
	public void anc();
	default public void show(){
		System.out.println("Showing");
	}
}
class Aobj implements A{
	public void anc(){
		System.out.println("Jio");
	}
	//void show();
}
class Intrface{
	public static void main (String[]d){
		A om = new Aobj();
		om.anc();
		om.show();
	}
} */























