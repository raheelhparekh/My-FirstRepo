import java.util.*;
public class three{
public static void main (String args[]){
    int m,j,i,b=0;
    
 
    Scanner sc= new Scanner(System.in);
    
    System.out.print("Enter Number of players:\n");
    int n= sc.nextInt();
    int a[][]= new int[n][];//jagged array
    float sum[]=new float[n];
    float avg[]=new float[n];
    int k[]=new int[n];
    float o;
    float l;
// Accept data
    for (i=0;i<n;i++)
    {
        System.out.println("number of matches played by player"+ (i+1)+" ");
        m=sc.nextInt();
        a[i]=new int[m];
    }
    // To accept the runs scored
    for(i=0;i<n;i++)
    {
        System.out.println("Enter the runs scored by player "+(i+1)+" in");
            for(j=0;j<a[i].length;j++)
            {
                System.out.print("Match "+(j+1)+":");
                a[i][j]=sc.nextInt();
            }
    }
    //To calculate run and average
    System.out.println();
        for(i=0;i<n;i++)
        {
            for(j=0;j<a[i].length;j++)
            {
                sum[i]=sum[i]+a[i][j];
            }
                    }
    for(i=0;i<n;i++)
    {
        avg[i]=sum[i]/a.length;
    }
    
    //Displaying Data
    
    for(i=0;i<n;i++)
    {
        System.out.println("\nPlayer"+(i+1));
        for(j=0;j<a[i].length;j++)
        {
            System.out.println("Match"+(j+1)+" "+a[i][j]+"\t");
        }
        System.out.println("Total Runs:"+sum[i]+"\t");
        System.out.println("Batting Average:"+avg[i]);
    }
 
      //Sort the array
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(avg[j]>avg[j+1])
                {
                    
                    k=a[j];
                    a[j]=a[j+1];
                    a[j+1]=k;
 
                    o=avg[j];
                    avg[j]=avg[j+1];
                    avg[j+1]=o;
 
                    l=sum[j];
                    sum[j]=sum[j+1];
                    sum[j+1]=l;
                }
            }
        }
    }
}