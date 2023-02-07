import java.util.*;
//expt 2
class myMath {
    public static void main(String args[]) {
        int n;
        double x, exp, ser2, ch;
        Scanner sc = new Scanner(System.in);
        System.out.println("Number of terms(n): ");
        n = sc.nextInt();
        System.out.println("Enter the value of x: ");
        x = sc.nextDouble();
        do {
            System.out.println("\nEnter Choice\n1. e^x\n2. (1+x)^n\n3. Exit");
            ch = sc.nextInt();
            if (ch == 1) {
                exp = series1(x, n);
                System.out.println("e^x: " + exp);
                continue;
            }
            if (ch == 2) {
                ser2 = series2(x, n);
                System.out.println("(1+x)^n: " + ser2);
                continue;
            } else {
                if (ch == 3) {
                    continue;
                }
                System.out.println("Enter a valid input");
                continue;
            }
        } while (ch != 3);
    }

    static double series1(double x, int n) {
        int i, m = 1;
        double sum = 1, p, f, a;
        if (n == 1) {
            sum = 1;
        } else {
            for (i = 1; i < n; i++) {
                p = (double) expt2.power(x, m);
                f = (double) expt2.fact(m);
                sum = sum + p / f;
                m = m + 1;
            }
        }
        return sum;
    }

    static double series2(double x, int n) {
        double sum = 0, f, p, ans1 = 1;
        int i, j, m = 2;
        for (i = 0; i < n; i++) {
            if (i == 0) {
                sum = sum + 1;
            } else if (i == 1) {
                sum = sum + (n * x);
            } else {
                p = (double) expt2.power(x, m);
                f = (double) expt2.fact(m);
                for (j = 0; j < i; j++) {
                    ans1 = ans1 * (n - j);
                }
                sum = sum + (ans1 * p) / f;
                m = m + 1;
            }
        }
        return sum;
    }
}

class expt2 {
    static double power(double x, int y) {
        double pow = 1;
        if (y != 0) {
            pow = x * power(x, y - 1);
        }
        return pow;
    }

    static int fact(int x) {
        int i, fact = 1, c = 0;
        if (x == 0) {
            fact = 1;
        }
        if (x != 0) {
            fact = x * fact(x - 1);
        }
        return fact;
    }
}
