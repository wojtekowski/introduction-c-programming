#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
srand(time(NULL));

int size; 
printf("Give me a number: \n");
scanf("%d", &size);

float Array[size];

for (int i=0;i<=size-1;i++){
    Array[i]=((float)rand()/(float)(RAND_MAX));
    printf("%.4f    ", Array[i]);
}
printf("\n");
return 0;
}

