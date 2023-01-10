#include <stdio.h>
typedef struct complex
{
    int real;
    int imag;
} complex;
complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);
complex multiply(complex n1, complex n2);
int equal(complex n1, complex n2);
int main()
{
    complex n1, n2, addition, subtraction, multiplication;
    int equal_check;
    printf("Enter real part of first complex number:");
    scanf("%d", &n1.real);
    printf("Enter imaginary part of first complex number:");
    scanf("%d", &n1.imag);
    printf("Enter real part of second complex number:");
    scanf("%d", &n2.real);
    printf("Enter imaginary part of second complex number:");
    scanf("%d", &n2.imag);
    addition = add(n1, n2);
    subtraction = sub(n1, n2);
    multiplication = multiply(n1, n2);
    printf("Sum of The Two Complex Numbers: %d + %di \n", addition.real, addition.imag);
    printf("Multiplication of The Two Complex Numbers: %d + %di\n", multiplication.real, multiplication.imag);
    printf("Subtraction of The Two Complex Numbers: %d + %di\n", subtraction.real, subtraction.imag);
    equal_check = equal(n1, n2);
    if ((equal_check == 1))
        printf("Given complex numbers are equal");
    else
        printf("Given complex numbers are not equal");
}
complex add(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
complex multiply(complex n1, complex n2)
{
    complex temp;
    temp.real = (n1.real * n2.real) - (n1.imag * n2.imag);
    temp.imag = (n1.imag * n2.real) + (n2.imag * n1.real);
    return (temp);
}
complex sub(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}
int equal(complex n1, complex n2)
{
    int temp;
    temp = n1.real == n2.real && n1.imag == n2.imag;
    return (temp);
}