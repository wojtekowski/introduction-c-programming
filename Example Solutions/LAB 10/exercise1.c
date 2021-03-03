#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct List
{
int index;
int value;
struct List *next;
struct List *prev;
};

int main()
{

srand(time(NULL));

printf("\n----------------------EXERCISE 1----------------------------------\n\n");

struct List Element[15];
printf("%6s| %20s|  %20s|  %20s|  %20s|\n","Index","Element adress","Element value adress","Element prev adress","Element next adress");
for (int i=0; i<15; i++){  
    
    Element[i].value=(rand()%50)+1;
    Element[i].index=i+1;

    if (i==14)  Element[i].next = NULL;
    else Element[i].next = &Element[i+1];
    
    if (i==0)  Element[i].prev = NULL;
    else Element[i].prev = &Element[i-1];
    
    printf("%6d:%22p%23d%23p%23p\n",Element[i].index,&Element[i],Element[i].value,Element[i].prev,Element[i].next);

    }


printf("\n----------------------EXERCISE 2----------------------------------\n\n");

struct List Hubert;

Hubert.index=0;
Hubert.value=0;
Hubert.next=NULL;
Hubert.prev=NULL;



for(int i=0; i<15 ; i++)
    {
        for(int i=0; i<15 ; i++)
        {
        if(Element[i].value>Element[i+1].value)
            {
            Hubert=Element[i+1];
            Element[i+1]=Element[i];
            Element[i]=Hubert;        
            }
        }
    }
for(int i=0; i<15; i++)
   {
       printf("%6d:%22p%23d%23p%23p\n",Element[i].index,&Element[i],Element[i].value,Element[i].prev,Element[i].next);                                             
   }


printf("\n------------------------------------------------------------------\n\n");

//NOT DONE YET
printf("\nChcecking!\n");
return 0;
}









































