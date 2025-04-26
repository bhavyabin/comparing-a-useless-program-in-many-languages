
public class Main {
  public static void main(String[] args) {
	  
	long startTime = System.currentTimeMillis();
	  
	int result = 0;
	  
    for (int i = 0; i < 1000000; i++) {
	  System.out.println(i);
	  result += i;
	}
	
	long endTime = System.currentTimeMillis();
    long duration = (endTime - startTime); // in milliseconds
    System.out.println(duration);

	
  }
}