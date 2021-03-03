#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{

srand(time(NULL));
/*
//Exercise 1
int a=(rand()%10)+1;
printf("%d\n", a);

//Exercise 2 +4

int b;
//char b[10];
printf("I think about number from 1 to 10 can you guess it?\n");
while (a>0){
scanf("%d",&b);
//if (b=="whatnumber")
//    {
//    printf("My number is %d, but do not tell anyone.\n",b);
//    scanf("%d",&b);
//    }
if (b==1234){
    break;
}
if (a==b){
    printf("You were right! This number is %d!\n\n", a);
    break;

    }
else{
    printf("Wrong! Try again!\n");
    }
}

//Exercise 4
printf("I think about number from 1 to 10 can you guess it?x2\n");
do{
scanf("%d",&b);
if (b==1234){
    break;
}
if (a==b){
    printf("You were right! This number is %d!\n", a);
    break;

    }
else{
    printf("Wrong! Try again!\n");
    }
}
while (a>0);

//Exercise 4 + 6
printf("I think about number from 1 to 10 can you guess it?x3\n");
for (int i=1;;i++){
scanf("%d",&b);
if (b==1234){
    break;
}
if (a==b){
    printf("You were right! The number was %d and you needed %d attempts!\n", a, i);
    break;

    }
else{
    printf("Wrong! Try again!\n");
    }
}
*/

//exercise 8
int c=(rand()%10)+1;
printf("%d\n",c);
int A[c];
int x;
int b;
for (int i=0;i<=c;i++){
    printf("Give me some number: ");
    scanf("%d", &x);
    A[i]=x;
    printf("\n");
}
for (int i=1;i<=c;i++){
    b=A[i-1];
    if (A[i]<A[i-1]){
    A[i-1]=A[i];
    A[i]=b;    
    }
    
}


printf("Your array is: \n");
for (int i=0;i<=c;i++){
    printf("%d  ", A[i]);
}
printf("\n");


return 0;
}

