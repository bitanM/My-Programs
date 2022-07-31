class buff{
	public static void main (String[]ar){
		String s = "This is a demo of the getChars method. ";
		//int start = 10;
		//int end = 14;
		char buf[] = new char[4];
		s.getChars(10, 14, buf, 0);
		System.out.println(buf);
	}
}
