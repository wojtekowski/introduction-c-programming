#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void sort(int *A, int size);
int main()
{

srand(time(NULL));

printf("\n----------------------EXERCISE 1----------------------------------\n\n");

int a = 42;
int *my_pointer = &a;

printf("%p", my_pointer);
printf("%13d", *my_pointer);


printf("\n----------------------EXERCISE 2----------------------------------\n\n");

int MyArray[50] = {0};

for (int i=0; i < sizeof(MyArray)/sizeof(int) ; i++){
    printf("%13d  ", MyArray[i] = rand());
    if(i>1){if ((i+1)%5==0){printf("\n");}}
    }

printf("\n------------------------------------------------------------------\n\n");

printf("\n");
sort(MyArray, sizeof(MyArray)/sizeof(int));
printf("\n");



for (int i=0; i < sizeof(MyArray)/sizeof(int) ; i++){
    printf("%13d", MyArray[i]);
    if(i>1){if ((i+1)%5==0){printf("\n");}}
    }















printf("\n------------------------------------------------------------------\n\n");

//NOT DONE YET
printf("\nChcecking!\n");
return 0;
}




void sort(int *A, int size){

int temp = 0;
int *point = &temp;
          
  
    for (int i=0; i<size-1 ; i++){
        for (int i=0; i < size-1; i++){
            if (A[i] > A[i+1]){

            *point=A[i+1];
            A[i+1]=A[i];
            A[i]=*point;

            }
        }
    }
printf("\nSorting complete!\n");
}








































