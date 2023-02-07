import java.util.Scanner;

class Complex {
    public float real, img;

    Complex() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter real part: ");
        real = sc.nextInt();
        System.out.println("Enter imaginary part: ");
        img = sc.nextInt();
    }

    public void sum(Complex b) {
        float s = img + b.img;
        float r = real + b.real;
        System.out.println("Sum of the two complex numbers is " + r + " + " +s + "i");
    }

    static void sum(Complex a, Complex b) {
        float s = a.img + b.img;
        float r = a.real + b.real;
        System.out.println("Sum of the two complex numbers is " + r + " + " + s + "i");
    }

public void subtract(Complex b) {
float s = img - b.img;
float r = real - b.real;
System.out.println("Difference of the two complex numbers is " + r + "+ " + s + "i");
}

static void subtract(Complex a, Complex b) {
float s = a.img - b.img;
float r = a.real - b.real;
System.out.println("Difference of the two complex numbers is " + r + "+ " + s + "i");
}

public void multiply(Complex b) {
float s = img * b.real+ real * b.img;
float r = real * b.real - img * b.img;
System.out.println("Product of the two complex numbers is " + r + " +" + s + "i");
}

static void multiply(Complex a,Complex b) {
float s = a.img * b.real+ a.real * b.img;
float r = a.real * b.real - a.img * b.img;
System.out.println("Product of the two complex numbers is " + r + " +" + s + "i");
}

public void divide(Complex b) {
float s = img * b.real+ real * b.img * -1;
float r = real * b.real - img * b.img * -1;
float di = b.real*b.real+b.img*b.img;
System.out.println("Divsion of the two complex numbers is " + r/di + "+ " + s/di + "i");
}

static void divide(Complex a,Complex b) {
float s = a.img * b.real+ a.real * b.img * -1;
float r = a.real * b.real - a.img * b.img * -1;
float di = b.real*b.real+b.img*b.img;
System.out.println("Divsion of the two complex numbers is " + r/di + "+" + s/di + "i");
}
}

class Complex1 
{
    public static void main(String[] args) {
        Complex a = new Complex();
        Complex b = new Complex();
        a.sum(b);
        a.subtract(b);
        a.multiply(b);
        a.divide(b);
    }
}