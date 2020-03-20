import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main
{
   public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
		int a[]=new int[n];
		int b[]=new int[n];
        for(int i=0;i<n;i++) 
         {
             a[i]=sc.nextInt();
         }
        int max=a[0],min=a[0];
        for(int i=0;i<n;i++) 
        {
            if(min>a[i]) min=a[i];
        }
        for(int i=0;i<n;i++) 
        {
            if(max<a[i]) max=a[i];
        }
        int c[]=new int[max-min+1];
        for(int i=0;i<n;i++) 
        {
            ++c[a[i]-min];
        }
        for(int i=1;i<max-min+1;i++) 
        {
            c[i]=c[i]+c[i-1];
        }
        for(int i=0;i<n;i++) 
        {
             b[--c[a[i]-min]]=a[i];
        }
        for(int i=0;i<n;i++)  
        {
            System.out.print(b[i]+" ");
        }
        
        
        
	}
    }