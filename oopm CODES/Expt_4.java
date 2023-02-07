import java.util.*;
public class Expt_4
{
	public static void main(String[] args)
	 {
	 	int choice;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of customers:");
		int c = sc.nextInt();
		Account[] acc = new Account[c];
		System.out.println("Enter the intial number of accounts to be added:");
		int n = sc.nextInt();
		int n1 = n;
		if(n<=c) // checking if no of acc to be added is less than no of customers
		{
			for(int i=0;i<n;i++) //taking inputs from user
			{
				System.out.println("Enter Account Number:");
				int num = sc.nextInt();
				System.out.println("Enter Account Holder Name:");
				String name = sc.next();
				System.out.println("Enter Balance:");
				float bal = sc.nextInt();
				acc[i] = new Account(num,name,bal);
			}
			// giving user a chance to add,delete,display acc and whether he wants to exit
			do{
				
				System.out.println("Please Enter a valid choice:");
				System.out.println("Press 1.Add Account");
				System.out.println("Press 2.Delete Account");
				System.out.println("Press 3.Display Account:");
				System.out.println("Press 4.Exit");
				 choice= sc.nextInt();
				 switch(choice)
				 {
				 	case 1: if (n>= c) // if no of acc are greater than no of users direct print data full
				 	{
				 		System.out.println("Data full!!!");
				 	}
				 	else
				 	{
				 		if(n>=n1)
				 		{
				 			System.out.println("Enter Account Number:");
							int id = sc.nextInt();
							System.out.println("Enter Account Holder Name:");
							String name = sc.next();
							System.out.println("Enter Balance:");
							float bal = sc.nextInt();
							acc[n++]= new Account(id,name,bal);
				
				 		}
				 		else
				 		{
				 			System.out.println("Enter Account Number:");
							int id = sc.nextInt();
							System.out.println("Enter Account Holder Name:");
							String name = sc.next();
							System.out.println("Enter Balance:");
							float bal = sc.nextInt();
							acc[n].id = id;
							acc[n].name= name;
							acc[n].bal= bal;
							n++;
				 		}
				 	}
				 	break;
					//deleting an account
				 	case 2: int count =0;
				 	System.out.println("Enter Account Number to be deleted:");
				 	int del = sc.nextInt();
				 	for(int i=0;i<n;i++)
				 	{
				 		if((int)del== acc[i].id)
				 		{
				 			for(int j =i;j<(n-1);j++)
				 			{
				 				acc[j]= acc[j+1];
				 			}
				 			n--;
				 			count=1;
				 			System.out.println("Account Deleted");
				 		}

				 	}
				 	if(count!=1)
				 	{
				 		System.out.println("No such Account Exists.");
				 	}
				 	break;
				 	case 3: System.out.println("Account number\t Holder Name\t\t\tBalance");
				 	for(int i=0;i<n;i++)
				 	{
				 		System.out.println(acc[i].id+"\t\t\t"+acc[i].name+"\t\t\t"+acc[i].bal+"$");
				 	}
				 	break;
				 	case 4:
				 	System.out.println("Thank You For Using Our Services.:)");
				 	break;
				 	default:
				 	System.out.println("Invalid Option.Try Again");
				 	break;
				 }

			}while(choice!=4);
		}
		else
		{
			System.out.println("The accounts cannot exceed number of customers");
		}

	}	
}
class Account
{
	int id;
	String name;
	float bal;
	Account(int id, String name,float bal)
	{
		this.id= id;
		this.name=name;
		this.bal=bal;
	}

}