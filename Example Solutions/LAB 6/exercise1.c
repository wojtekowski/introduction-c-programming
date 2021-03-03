#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int multiplicationn(){
    static int a = 2, b = 1;
    return a * b++;
}

int main()
{

srand(time(NULL));

printf("\n----------------------EXERCISE 1----------------------------------\n\n");

    printf("%i\n", multiplicationn());

printf("\n----------------------EXERCISE 2----------------------------------\n\n");
for (int i=1;i<=5;i++){
    printf("%i\n", multiplicationn());
}
printf("\n----------------------EXERCISE 3----------------------------------\n\n");
printf("calculator functions\n");
int add(int x, int y){
    return x + y;
}
int subtract(int x, int y){
    return x - y;
}
int multiplication(int x, int y){
    return x * y;
}
int division(int x, int y){
    return x / y;
}
printf("\n----------------------EXERCISE 4----------------------------------\n\n");
int menu(){
    int type,a,b;  
    while  (type!=1 && type!=2 && type!=3 && type!=4 && type!=42){
    printf("\n|----------------------------------|\n");
    printf("|This is the menu of my calculator!|\n");
    printf("|----------------------------------|\n");
    printf("| 1) addition   | 2) subtraction   |\n");    
    printf("|----------------------------------|\n");
    printf("| 3) multiplication | 4) division  |\n");
    printf("|----------------------------------|\n");
    scanf("%d", &type);
    if (type!=1 && type!=2 && type!=3 && type!=4 && type!=42){
        printf("1-4\n"); 
        }   
    }
    
        switch(type){
            case 1 :
                printf("Give me 2 numbers that you want to add: \n");
                printf("First number: ");
                scanf("%d", &a);
                printf("Second number: ");
                scanf("%d", &b);
                printf("Result of addition: %d\n", add(a,b));
                break;
            
            case 2 :
                printf("Give me 2 numbers that you want to subtract: \n");
                printf("First number: ");
                scanf("%d", &a);
                printf("Second number: ");
                scanf("%d", &b);
                printf("Result of subtraction: %d\n", subtract(a,b));
                break;
             
            case 3 :
                printf("Give me 2 numbers that you want to multiplicate: \n");
                printf("First number: ");
                scanf("%d", &a);
                printf("Second number: ");
                scanf("%d", &b);
                printf("Result of multiplication: %d\n", multiplication(a,b));
                break;
             
            case 4 :
                printf("Give me 2 numbers that you want to divide: \n");
                printf("First number: ");
                scanf("%d", &a);
                printf("Second number: ");
                scanf("%d", &b);
                printf("Result of division: %d\n", division(a,b));
                break;

            case 42:
                break;
                     
        }  
    
}
printf("\n menu function \n");
printf("\n----------------------EXERCISE 5----------------------------------\n\n");
menu();
printf("\n----------------------EXERCISE 6----------------------------------\n\n");
int A[5], B[5];
printf("I want you to fill my arrays! \n");
for (int i=0; i<5; i++){
printf("A[%d] = ",i);
scanf("%d",&A[i]);
}
for (int i=0; i<5; i++){
printf("B[%d] = ",i);
scanf("%d",&B[i]);
}
printf("\nA: ");
for (int i=0; i<5; i++){
printf("%6d",A[i]);
}
printf("\nB: ");
for (int i=0; i<5; i++){
printf("%6d",B[i]);
}
printf("\n");
printf("\n----------------------EXERCISE 7----------------------------------\n\n");
int even,odd;

for (int i=0; i <= sizeof(A) -1; i++) {
    for (int i=0; i <= sizeof(A) -1; i++) {
        
        if (A[i]%2==0 && B[i]%2==0){        
           even = B[i];
           A[sizeof(A)] = even;
                    
        }

        if (A[i]%2==0 && B[i]%2==1){
        continue;
                    
        }

        if (A[i]%2==1 && B[i]%2==0){
           odd = A[i];        
           even = B[i];
           A[i] = even;
           B[i] = odd;
                    
        }
        if (A[i]%2==1 && B[i]%2==1){        
           odd = A[i];
           B[sizeof(B)] = odd;
                    
        }


    }
}
printf("\nA: ");
for (int i=0; i<sizeof(A)-1; i++){
printf("%6d",A[i]);
}
printf("\nB: ");
for (int i=0; i<sizeof(B)-1; i++){
printf("%6d",B[i]);
}
printf("\n");
//NOT DONE YET

printf("checking\n");
return 0;
}











































