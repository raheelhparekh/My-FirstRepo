public class marks {
    public Student students[];

    public marks(int size) {
        students = new Student[size];
    }

    public void display() {
        System.out.println("\nName\t\tRoll No.\tTotal Marks\n");
        for (int i = 0; i < students.length; i++) {
            System.out.print(students[i].name + "\t\t");
            System.out.print(students[i].roll_no + "\t\t");
            System.out.print(students[i].totalMarks + "\n");
        }
    }

    public static void sort(Student [] students)
    {
        for(int i=0;i<students.length;i++)
        {
            for(int j=0;j<students.length;j++)
            {
                if(students[i].totalMarks < students[j].totalMarks)
                {
                    Student temp = students[i];
                    students[i] = students[j];
                    students[j] = temp;
                } 
            }
        }
    }
}