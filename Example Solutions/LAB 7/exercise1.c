#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{

FILE *PtrFileName;
char row[256], c;
int R[50];
srand(time(NULL));

printf("\n----------------------EXERCISE 1----------------------------------\n\n");

PtrFileName = fopen("myfile.txt","a");
if(!PtrFileName){
    fclose(PtrFileName);
    fprintf(stderr,"Error creating a file!\n");
    return 0;
}
for(;;){
    fgets(row,sizeof(row),stdin);
    fputs("\n",PtrFileName);
    if (row[0] == '\n'){
        printf("Adding a new data is finished!\n");
        fclose(PtrFileName);
        break;
    }   
    fputs(row, PtrFileName);
}

printf("\n----------------------EXERCISE 2----------------------------------\n\n");

PtrFileName = fopen("myfile.txt","r");

while (!feof(PtrFileName)){
        printf ("%c", fgetc(PtrFileName));
}
fclose(PtrFileName);

printf("\n----------------------EXERCISE 3----------------------------------\n\n");
//XDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD no śmieszne jest 
for(int i=0;i<=sizeof(R)-1;i++){ R[i]=rand()%50+1;}
PtrFileName = fopen("myfile2.txt","a");
if(!PtrFileName){
    fclose(PtrFileName);
    fprintf(stderr,"Error creating a file!\n");
    return 0;
}

char str[256];
fputs("\n",PtrFileName);
   for(int i=0;i<=sizeof(R)-1;i++){
        printf("%6d",R[i]);
        sprintf(str,"%6d",R[i]);
   }
fputs("\n",PtrFileName);
fputs(str, PtrFileName);
printf("\nAdding a new data is finished!\n");
fclose(PtrFileName);
// NIE PACZ NA TO BO ZEPSUTE HEHE







//NOT DONE YET
printf("\nChcecking!\n");
return 0;
}











































