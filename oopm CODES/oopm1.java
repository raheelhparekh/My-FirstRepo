import java.util.Scanner;

class Circle {

    Circle() {
        double r;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter radius: ");
        r = sc.nextInt();
        double c = 2 * 3.14 * r;
        System.out.println("Circumference: " + c);
        double a = 3.14 * r * r;
        System.out.println("Area: " + a);
    }
}

class CircleCal{
public static void main(String[] args) {
Circle c1=new Circle();
}
}


