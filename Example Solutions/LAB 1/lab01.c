// Task 1 
// Hello World!

#include <stdio.h>

// Declaring because without declaration depends on compiler it may work or not
double Add(double x, double y);
int rectangle();
int tri_area(int c, int h);

int main()
{
    
    printf("Hello world!\n");   

    int a = 2, b =3;
    printf("Adding %i+%i=%.0f \n\n", a, b, Add(a,b));

    //1.1/2/3   name surname different lines
    printf("Marek \nWeber \n");
    //1.4
    printf("* \n");
    //1.5
    rectangle();
    //1.6
    printf("Some \n random\b written \t text \n something \r else \n");
    //1.7
    int my_variable = 12;
    printf("%i \n", my_variable);
    //1.8
    int  c = 2;
    int  h = 2;
    printf("Triangle area is: %i \n",tri_area(c, h)); 
    //1.9
    printf(" i: %i \n f: %f \n lf: %lf \n c: %c \n x: %x \n", a, Add(a,b), Add(a,c), h, 3); 
    //1.10
    printf(" 4 places %.4f \n", Add(c, h));
    //1.11
    printf(" m.nf: %2.2f \n 0m.nf: %02.2f \n -m.nf: %-2.2f \n +-m.nf: %+-2.2f \n", Add(a,a), Add(800*a,a), Add(-2*a,a), Add(a,a)); 

      return 0;
}

// Using "gcc lab01.c -o lab01" in terminal to compile the programm

double Add(double x, double y)
{
    
    return x + y;
    
}
int rectangle()
{
printf("*******  \n");
printf("*     *  \n");
printf("*     *  \n");
printf("*     *  \n");
printf("*******  \n");
}

int tri_area(int c, int h)
{

    return (c*h)/2;

}    
    
