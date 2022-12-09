/*enum comics{
	Tintin, Asterix, Phantom, Rappa }
class Enums{
	public static void main (String[]ar){
		comics cm;
		cm = comics.Tintin;
		System.out.println("Value of cm: "+cm);
		System.out.println();
		
		cm = comics.Rappa;
		if(cm == comics.Rappa)
			System.out.println("cm contains Rappa.");
		
		switch(cm){
			case Tintin:
			System.out.println("Tintin is Belgian");
			break;
			
			case Asterix:
			System.out.println("Asterix is French");
			break;
			
			case Phantom:
			System.out.println("Phantom is Bangallan");
			break;
			
			case Rappa:
			System.out.println("Rappa is Indian");
			break;
		}
	}
}
*/
/*
enum comics{
	Tintin, Asterix, Phantom, Rappa }
class Enums{
	public static void main (String[]ar){
		comics cm;
		
		comics allcomics[] = comics.values();
		for(comics c: allcomics)
			System.out.println(c);
			
		System.out.println();
		
		cm = comics.valueOf("Asterix");
		System.out.println("cm contains "+cm);
	}
}
*/
class Enums{
	/*public static void main (String[]ar){
		Integer io = 100;
		int i = io;
		System.out.println(i+" "+io);
	}*/
	static int m(Integer v){
		return v;
	}
	public static void main (String[]ar){
		Integer io = m(100);
		System.out.println(io);
	}
	
}
