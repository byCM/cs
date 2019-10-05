public class batman {

	public static void main(String[] args) {	
		
		for (int i = 1000; i < 9999; i++) {
			int f = Integer.parseInt(Integer.toString(i).substring(0, 1));
			int s = Integer.parseInt(Integer.toString(i).substring(1, 2));
			int t = Integer.parseInt(Integer.toString(i).substring(2, 3));
			int fourth = Integer.parseInt(Integer.toString(i).substring(3, 4));

			
			if ((f != s && f != t && f != fourth && s != f && s != t && s != fourth && t != f && t != s && t != fourth
					&& fourth != f && fourth != s && fourth != t) && (f == t * 3) && (f + s + t + fourth == 27) && (fourth % 2 == 1)) {
				System.out.println("Riddler plans to strike " + f + "" + s + "" + t + "" + fourth + " Lake Otis Parkway");
			} 

			
		}
	}

}


