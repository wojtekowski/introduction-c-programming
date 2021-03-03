#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Point
{
    char name;
    int X;
    int Y;
};


int main()
{

srand(time(NULL));
int hmm;
struct Point Array[5];

for(int i=0; i<5;i++)
{

printf("Give me the coordinates of X and Y for point %c\n", Array[i].name = 0x41 + i);
scanf("%i",&Array[i].X);
scanf("%i",&Array[i].Y);

}
for(int i=0; i<5;i++)
{

printf("%c=(%d, %d)\n",Array[i].name,Array[i].X,Array[i].Y);

}

/*for(int step=0; step<5;step++)
    {
    for(int i=0; i<5-step;i++)
        {
        printf("Type 1 if you want to sort by X\n");
        scanf("%d", &hmm);
        if(hmm==1)
            {
            if(Array[i].X>Array[i+1].X)
            Array[i] 
            }

        }    
    }*/

return 0;
}

