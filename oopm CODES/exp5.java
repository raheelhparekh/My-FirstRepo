import java.util.*;
import java.util.Scanner;
class Employee implements Comparable<Employee> {
    String name;
    int id;
    int salary;

    public int compareTo(Employee b) {
        if (salary > b.salary) {
            return -1;
        } else if (salary < b.salary) {
            return 1;
        }
        return 0;
    }

    Employee() {
        name = "";
        id = 0;
        salary = 0;
    }

    Employee(String name, int id, int salary) {
        this.name = name;
        this.id = id;
        this.salary = salary;
    }
}

class exp5 {
    public static Vector<Employee> emp = new Vector<>();

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int choice;
        System.out.println("1. Create an Employee ");
        System.out.println("2. Insert an Employee ");
        System.out.println("3. Delete an Employee by name/ID ");
        System.out.println("4. Sort Employee's as per salary ");
        System.out.println("5. Display Employee ");
        System.out.println("6. EXIT");
        do {

            System.out.print("Enter Choice: ");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    create();
                    break;
                case 2:
                    insert();
                    break;
                case 3:
                    delete();
                    break;
                case 4:
                    Collections.sort(emp);
                    break;
                case 5:
                    display();
                    break;
            }
        } while (choice != 6);
    }
    public static void create() {
        Scanner sc = new Scanner(System.in);
        int id, salary;
        String name;
        System.out.println("Enter Name, ID and Salary one by one: ");
        name = sc.next();
        id = sc.nextInt();
        salary = sc.nextInt();
        Employee e1 = new Employee(name, id, salary);
        emp.add(e1);
    }
 public static void insert()
 {
 int n = 0;
 int position = 0;
 Scanner sc = new Scanner(System.in); 
 System.out.println("Enter 1 to insert at specified index or 2 to Insert at end:");
 n = sc.nextInt();
 if (n == 1)
 {
 // Enter at specific index
 System.out.println("Enter Index at which element is to be added:");
 position = sc.nextInt();
 // Assigning and adding to Vector
 int id, salary;
 String name;
 System.out.println("Enter Name, ID and Salary one by one: ");
 name = sc.next();
 id = sc.nextInt();
 salary = sc.nextInt();
 Employee e1 = new Employee(name, id, salary);
 emp.insertElementAt(e1, position);
 }
 else if(n == 2)
 {
 // Assigning and adding to Vector
 int id, salary;
 String name;
 System.out.println("Enter Name, ID and Salary one by one: ");
 name = sc.next();
 id = sc.nextInt();
 salary = sc.nextInt();
 Employee e1 = new Employee(name, id, salary);
 emp.add(e1);
 }
 }
    // To delete by name or ID
    public static void delete() 
    {
        int n = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1 to delete by Name and 2 to delete by ID ");
        n = sc.nextInt();
        if (n == 1) {
            String name;
            System.out.println("Enter Name to use for deleting: ");
            name = sc.next();
            Employee e2 = new Employee();

            for (int i = 0; i < emp.size(); i++) {
                e2 = emp.get(i);
                if (name.equals(e2.name)) {
                    emp.remove(i);
                }
            }
        } else if (n == 2) {
            int id2 = 0;
            System.out.println("Enter ID to use for deleting: ");
            id2 = sc.nextInt();
            Employee e2 = new Employee();

            for (int i = 0; i < emp.size(); i++) {
                e2 = emp.get(i);
                if (id2 == e2.id) {
                    emp.remove(i);
                }
            }
        }
    }

 public static void display()
 {
 Scanner sc = new Scanner(System.in);
 System.out.println("Displaying All Employee's: ");
 for(int i = 0; i < emp.size(); i++)
 {
    Employee e_d = new Employee();
    e_d = emp.get(i);
    System.out.println("Employee Name: " + e_d.name);
    System.out.println("Employee ID: " + e_d.id);
    System.out.println("Employee Salary: " + e_d.salary);
    System.out.println("\n");
    }
    }

    public static void sort() {
        Scanner sc = new Scanner(System.in);
        Employee e1 = new Employee();
        Employee e2 = new Employee();
        for (int i = 0; i < (emp.size() - 1); i++) {
            for (int j = 0; j < (emp.size() - 1 - i); j++) {
                e1 = emp.get(j);
                e2 = emp.get(j + 1);
                if (e1.salary > e2.salary) {
                }
            }
        }
    }
}
