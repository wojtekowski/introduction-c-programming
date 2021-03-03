#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
srand(time(NULL));

int size; 
printf("Give me a number: \n");
scanf("%d", &size);

char Array[size][size];

for (int i=0; i<=size-1;i++){
    for (int j=0; j<=size-1;j++){
        Array[i][j]='*';    
    }
}

for (int i=0; i<=size-1;i++){
    for (int j=0; j<=i;j++){
        printf("%c",Array[i][j]);    
    }
    printf("\n");
}

return 0;
}

