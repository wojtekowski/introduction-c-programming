#include <stdio.h>


int main(void)
{

// Exercise 1,2,3,4,5
int a;
printf("Feed me numbers! \n");
scanf("%d", &a);
printf("Thats your number: %d \n", a);
    a=++a;
printf("Incremented ++a: %d \n", a);
    a=a++;
printf("Incremented a++: %d \n", a)
    a=--a;
printf("After decrementation --a: %d \n", a);
    a=a--;
printf("After decrementation a--: %d \n", a);

return 0;
}


//exercise 6 still trying to solve
int square(a)
{   
    int matrix[a][a];
    for(int i=1;i<=a;i++)
        {
        for(int j=1;j<=a;j++)
            {          
             
                          
            }
        }   
    printf(matrix);
}
