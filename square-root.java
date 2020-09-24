import java.util.Scanner;

class SquartRoot
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			long a = sc.nextInt();
			SquareRoot obj = new SquareRoot();
			System.out.println(obj.floorSqrt(a));
		t--;
		}
	}
}


/*You are required to complete
this function*/

// Function to find square root
// x: element to find square root
class SquareRoot
{
     long floorSqrt(long x)
	 {
		// Your code here
		long l =1;
		long h= x;
		long ans=-1;
		
		while(l<=h){
		    long m=(l+h)/2;
		if((m*m)==x)
		    return m;
		else if(x>(m*m)) {
		   l=m+1;
		   ans=m;}
		
		else 
		    h=m-1;
		    
		}
		return ans;
	 }
}

