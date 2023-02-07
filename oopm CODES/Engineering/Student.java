package Engineering;
import java.util.*;

public class Student 
{
        String name;
        int roll_no;
        int marks;
        int Maths;
        int English;
        int Science;
        int History;
        public Object student_details;
        public int totalMarks;
    
        Student(){}
    
        public Student(String name, int roll_no,int English,int Science,int History,int Maths)
        {
            this.name = name;
            this.roll_no = roll_no;
            this.Maths = Maths;
            this.English = English;
            this.Science = Science;
            this.History = History;
            this.totalMarks = English + Science + History + Maths;
        }
    
        public static Student[] create()
        {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the number of students: ");
            int n = sc.nextInt();
            Student[] s = new Student[n];
            for(int i=0;i<n;i++)
            {
                System.out.println("Enter the name of the student: ");
                String name = sc.next();
                System.out.println("Enter the roll number of the student: ");
                int roll_no = sc.nextInt();
                System.out.println("Enter the marks of Maths: ");
                int Maths = sc.nextInt();
                System.out.println("Enter the marks of English: ");
                int English = sc.nextInt();
                System.out.println("Enter the marks of Science: ");
                int Science = sc.nextInt();
                System.out.println("Enter the marks of History: ");
                int History = sc.nextInt();
                s[i] = new Student(name,roll_no,English,Science,History,Maths);
            }   
            return s
        }
}