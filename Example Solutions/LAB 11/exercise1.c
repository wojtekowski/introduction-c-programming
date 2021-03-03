#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

srand(time(NULL));

printf("\n----------------------EXERCISE 1----------------------------------\n\n");


int B[3][3]={8,8,8,8,8,8,8,8,8};
int x,y,x2=8,y2=8, victory=2, who=2, place=0,it=0;


            printf(" ___ ___ ___ \n");
        for (int r=0;r<3;r++){
            printf("|   |   |   |\n|");
            for(int c=0;c<3;c++){
                if(B[r][c]==8){
                printf("   |");
                }
                else{
                printf(" %d |",B[r][c]);
                }            
            }
            printf("\n");
        }
            printf("|___|___|___|\n\n");


while (victory!=1){

    place=0;
    printf("\nWhere do you want to put your circle?\n");
    scanf("%d%d", &x, &y);

    if(x<1 || x>3 || y<1 || y>3) { 
        printf("\nThe number must be between 1 and 3!\n");
        }
    else{
        if(B[x-1][y-1]==0 || B[x-1][y-1]==1){
        printf("\nThis place is taken!\n");
        }
        else{
        B[x-1][y-1]=0;    
        it=it+1;
        if(it==9){
            victory=1;
            break;
        }
        while(place!=1){
                x2=rand()%3;
                y2=rand()%3;
        if(B[x2][y2]==0 || B[x2][y2]==1){
        }
        else{
        printf("\nComputer took %d %d\n",x2+1,y2+1);
        B[x2][y2]=1;
        it=it+1;
        place=1;
        break;           
        }
        
        
        }

            printf(" ___ ___ ___ \n");
        for (int r=0;r<3;r++){
            printf("|   |   |   |\n|");
            for(int c=0;c<3;c++){
                if(B[r][c]==8){
                printf("   |");
                }
                else{
                printf(" %d |",B[r][c]);
                }            
            }
            printf("\n");
        }
            printf("|___|___|___|\n");

        if( (B[0][0]==0 && B[0][1]==0 && B[0][2]==0) ||
            (B[1][0]==0 && B[1][1]==0 && B[1][2]==0) ||
            (B[2][0]==0 && B[2][1]==0 && B[2][2]==0) ||
            (B[0][0]==0 && B[1][0]==0 && B[2][0]==0) ||
            (B[0][1]==0 && B[1][1]==0 && B[2][1]==0) ||
            (B[0][2]==0 && B[1][2]==0 && B[2][2]==0) ||
            (B[0][0]==0 && B[1][1]==0 && B[2][2]==0) ||
            (B[0][2]==0 && B[1][1]==0 && B[2][0]==0) ){
            
            victory=1;
            who=0;       
        }

        if( (B[0][0]==1 && B[0][1]==1 && B[0][2]==1) ||
            (B[1][0]==1 && B[1][1]==1 && B[1][2]==1) ||
            (B[2][0]==1 && B[2][1]==1 && B[2][2]==1) ||
            (B[0][0]==1 && B[1][0]==1 && B[2][0]==1) ||
            (B[0][1]==1 && B[1][1]==1 && B[2][1]==1) ||
            (B[0][2]==1 && B[1][2]==1 && B[2][2]==1) ||
            (B[0][0]==1 && B[1][1]==1 && B[2][2]==1) ||
            (B[0][2]==1 && B[1][1]==1 && B[2][0]==1) ){
            
            victory=1;
            who=1;       
        }
        }
    }
    }


if (who==0){
    printf("\n\n YOU WON! \n\n");
} 
else{
    if(who==1){
    printf("\n\n YOU LOST! \n\n");
    }   
    else{
    printf("\n\n IT IS A DRAW! \n\n");
    }
}

printf("\n------------------------------------------------------------------\n\n");

//NOT DONE YET
printf("\nChcecking!\n");
return 0;
}






































