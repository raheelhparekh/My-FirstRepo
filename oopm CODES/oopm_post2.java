import java.util.Scanner;

class GCD {

    public static void main(String[] args) {
        int n1, n2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        n1 = sc.nextInt();
        System.out.println("Enter a number:");
        n2 = sc.nextInt();
        int a = hcf(n1, n2);
        System.out.printf("G.C.D of %d and %d is %d.", n1, n2, a);
    }

    public static int hcf(int n1, int n2) {
        if (n2 != 0)
            return hcf(n2, n1 % n2);
        else
            return n1;
    }
}