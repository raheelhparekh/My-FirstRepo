class Staffdetails {
   // Creating properties of Staff class
   int staff_id, staff_salary;
   String staff_name, staff_address, staff_department, staff_email;

   // Getter and setters for getting and setting properties
   public int getStaffid() 
   {
      return staff_id;
   }

   public void setStaffid(int staff_id) 
   {
      this.staff_id = staff_id;
   }

   public int getSalary() 
   {
      return staff_salary;
   }

   public void setSalary(int staff_salary) 
   {
      this.staff_salary = staff_salary;
   }

   public String getName() 
   {
      return staff_name;
   }

   public void setName(String staff_name)
   {
      this.staff_name = staff_name;
   }

   public String getAddress() 
   {
      return staff_address;
   }

   public void setAddress(String staff_address)
   {
      this.staff_address = staff_address;
   }

   public String getDepartment() 
   {
      return staff_department;
   }

   public void setDepartment(String staff_department)
   {
      this.staff_department = staff_department;
   }

   public String getEmail() 
   {
      return staff_email;
   }

   public void setEmail(String staff_email) 
   {
      this.staff_email = staff_email;
   }

   // Overriding toString() method

   @Override

   public String toString() 
   {
      return " Staff details\n Id = " + staff_id + "\n Salary = " + staff_salary + "\n Name = " + staff_name + "\n Address = " + staff_address + "\n Department = " + staff_department + "\n Email = " + staff_email + "}";
   }

}

// Creating the main class

public class oopm_ia {  

   public static void main(String args[]) {
      // Creating object of Staffdetails class
      Staffdetails staff = new Staffdetails();

      // Setting values to the properties

      staff.setStaffid(133);
      staff.setName("Raddd Parekh");
      staff.setDepartment("COMPS");
      staff.setSalary(70000);
      staff.setAddress("MUMBAI");
      staff.setEmail("parekhrp@gmail.com");

      // Showing Employee details
      System.out.println(staff);

      // Getting salary using getter
      int sal = staff.getSalary();
      int increment = 0;

      // Incrementing salary based on condition
      // Incrementing salary 2% if salary ranges from 10k to 50k
      // Incrementing salary 5% if salary ranges from 50k to 70k
      // If salary above 70k it will not be incremented

      if ((sal >= 10000) && (sal <= 50000))
      {   
         increment += (sal * 2) / 100;
         sal = sal + increment;
         staff.setSalary(sal);
         System.out.println("\n Congratulations!! Your Salary is incremented by 2%\n");
         System.out.println(staff);

      } 
      else if ((sal > 50000) && (sal <= 70000))
      {     
         increment += (sal * 5) / 100;
         sal = sal + increment;
         staff.setSalary(sal);
         System.out.println("\n Congratulations!! Your Salary is incremented by 5%\n");
         System.out.println(staff);

      } 
      else 
      {
         System.out.println("\n Your Salary is not incremented \n");
         System.out.println(staff);
      }
   }
}
