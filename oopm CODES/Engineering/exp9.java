public class exp9 {
    public static void main(String[] args) 
    {
        Student[] s = Student.create();
        marks m = new marks(s.length);
        m.students = s;
        marks.sort(m.students);
        m.display();
    }
}