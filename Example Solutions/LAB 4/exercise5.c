#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
srand(time(NULL));

float temp;
int size;
printf("Give me a number: ");
scanf("%d", &size);
printf("\n");
float Array[size];

for (int i=0;i<=size-1;i++){
    Array[i]=(((float)rand()/(float)(RAND_MAX))*100);
    
    printf("%3.1f    ", Array[i]); 
        
}
printf("\n\n");
for(int step=0;step<size-1;++step){
    for(int i=0;i<size-step-1;++i)
    {
        if(Array[i]>=50)
        {
            temp=Array[i];
            Array[i]=Array[i+1];
            Array[i+1]=temp;
        }
    }
}
for (int i=0;i<=size-1;i++){
    if(Array[i] >= 50)
        {
        Array[i]=(-1); 
        }  
printf("%3.1f    ", Array[i]); 

}
printf("\n");
   


return 0;
}

