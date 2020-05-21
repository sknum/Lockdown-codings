import java.io.*;
import java.util.Scanner;
class duplicate
{
	public static void main(String[]args)
	{
		int n,i,j=0,count=0;
		System.out.println("Enter the Size of array");
		Scanner s=new Scanner(System.in);
		n=s.nextInt();
		int a[]=new int[20];
		System.out.println("Enter the array elements");
		for(i=0;i<n;i++)
		{
			a[i]=s.nextInt();
		}
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					System.out.println(+a[i]);
					count++;
				}
			}
		}
		if(count==0)
		{
			System.out.println("-1");
		
		}
	}
}
