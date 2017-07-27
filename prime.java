import java.io.*;
import java.util.*;
public class Prime
{
    public static void main(String args[])
    {
        
    int n,i,count=0;
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
            if(count==0)
            {
        System.out.println("prime");
            }
            else
            {
            System.out.println("not prime");
            }
            
     
    }
}
