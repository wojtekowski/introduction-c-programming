#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{

srand(time(NULL));


//printf("%li", sizeof(double));
printf("\n----------------------EXERCISE 1----------------------------------\n\n");

double *PtrArray = (double*) malloc(50 * sizeof(double));

for(int i=0; i<50; i++)
   {
       printf("%6d%12p%12f\n",i+1,&PtrArray[i],PtrArray[i]);
       ++PtrArray;
   }
printf("\n----------------------EXERCISE 2----------------------------------\n\n");

double *PtrArray2 = (double*) calloc(50 ,sizeof(double));

for(int i=0; i<50; i++)
   {
       printf("%6d%12p%12f\n",i+1,&PtrArray2[i],PtrArray2[i]);
       ++PtrArray2;
   }

printf("\n----------------------EXERCISE 3----------------------------------\n\n");

double *PtrArray3 = (double*) malloc(50 * sizeof(double));
for(int i=0; i<50; i++)
   {
       PtrArray3[i] = (double)rand()/(double)(RAND_MAX)*10000;
       printf("%6d%20p%20f\n",i+1,&PtrArray3[i],PtrArray3[i]);                                             
   }

printf("\n----------------------EXERCISE 4----------------------------------\n\n");


double temp=0;
double *Hubert = &temp;
for(int i=0; i<49 ; i++)
    {
        for(int i=0; i<49 ; i++)
        {
        if(PtrArray3[i]>PtrArray3[i+1])
            {
            *Hubert=PtrArray3[i+1];
            PtrArray3[i+1]=PtrArray3[i];
            PtrArray3[i]=*Hubert;        
            }
        }
    }
for(int i=0; i<50; i++)
   {
       printf("%6d%20p%20f\n",i+1,&PtrArray3[i],PtrArray3[i]);                                             
   }

printf("\n----------------------EXERCISE 5----------------------------------\n\n");
static int a=1;
for(;;){
    double *Ptrleaker = (double*) malloc(100000 * sizeof(double));
    double *Ptrleaker2 = (double*) malloc(100000 * sizeof(double));
    double *Ptrleaker3 = (double*) malloc(100000 * sizeof(double));
    double *Ptrleaker4 = (double*) malloc(100000 * sizeof(double));
    double *Ptrleaker5 = (double*) malloc(100000 * sizeof(double));
    double *Ptrleaker6 = (double*) malloc(100000 * sizeof(double));
    double *Ptrleaker7 = (double*) malloc(100000 * sizeof(double));
    double *Ptrleaker8 = (double*) malloc(100000 * sizeof(double));
    double *Ptrleaker9 = (double*) malloc(100000 * sizeof(double));
    double *Ptrleaker10 = (double*) malloc(100000 * sizeof(double));
    double *PtrleakerPtr = Ptrleaker ;
    double *PtrleakerPtr2 = Ptrleaker2 ;
    double *PtrleakerPtr3 = Ptrleaker3 ;
    double *PtrleakerPtr4 = Ptrleaker4 ;
    double *PtrleakerPtr5 = Ptrleaker5 ;
    double *PtrleakerPtr6 = Ptrleaker6 ;
    double *PtrleakerPtr7 = Ptrleaker7 ;
    double *PtrleakerPtr8 = Ptrleaker8 ;
    double *PtrleakerPtr9 = Ptrleaker9 ;
    double *PtrleakerPtr10 = Ptrleaker10 ;

       Ptrleaker[a] = (double)rand()/(double)(RAND_MAX)*100000;
       Ptrleaker2[a] = (double)rand()/(double)(RAND_MAX)*100000;
       Ptrleaker3[a] = (double)rand()/(double)(RAND_MAX)*100000;
       Ptrleaker4[a] = (double)rand()/(double)(RAND_MAX)*100000;
       Ptrleaker5[a] = (double)rand()/(double)(RAND_MAX)*100000;
       Ptrleaker6[a] = (double)rand()/(double)(RAND_MAX)*100000;
       Ptrleaker7[a] = (double)rand()/(double)(RAND_MAX)*100000;
       Ptrleaker8[a] = (double)rand()/(double)(RAND_MAX)*100000;
       Ptrleaker9[a] = (double)rand()/(double)(RAND_MAX)*100000;
       Ptrleaker10[a] = (double)rand()/(double)(RAND_MAX)*100000;
                                           
   
    printf("%6d%20p%20s%20f\n",a,&Ptrleaker,  "Ptrleaker"    ,Ptrleaker[a]     );
    printf("%6d%20p%20s%20f\n",a,&Ptrleaker2, "Ptrleaker2"   ,Ptrleaker2[a]  );
    printf("%6d%20p%20s%20f\n",a,&Ptrleaker3, "Ptrleaker3"   ,Ptrleaker3[a]  );
    printf("%6d%20p%20s%20f\n",a,&Ptrleaker4, "Ptrleaker4"   ,Ptrleaker4[a]  );
    printf("%6d%20p%20s%20f\n",a,&Ptrleaker5, "Ptrleaker5"   ,Ptrleaker5[a]  );
    printf("%6d%20p%20s%20f\n",a,&Ptrleaker6, "Ptrleaker6"   ,Ptrleaker6[a]  );
    printf("%6d%20p%20s%20f\n",a,&Ptrleaker7, "Ptrleaker7"   ,Ptrleaker7[a]  );
    printf("%6d%20p%20s%20f\n",a,&Ptrleaker8, "Ptrleaker8"   ,Ptrleaker8[a]  );
    printf("%6d%20p%20s%20f\n",a,&Ptrleaker9, "Ptrleaker9"   ,Ptrleaker9[a]  );
    printf("%6d%20p%20s%20f\n",a,&Ptrleaker10,"Ptrleaker10"  ,Ptrleaker10[a]  ); 
    a=a+1;
}
printf("\n------------------------------------------------------------------\n\n");

//NOT DONE YET
printf("\nChcecking!\n");
return 0;
}









































