#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ShowBoard(int r, int c, char board[r][c]);
void WhoWon(int who);

int main()
{

srand(time(NULL));

printf("\n BATTLE SHIPS\n\n");


char B1[10][10]={0};
char B2[10][10]={0};
int PX,PY,CPUX,CPUY, victory=0, who, ships=0, place=0,PHIT=0, CPUHIT=0;;

printf("You've got 10 boats to set!\n");
    printf("Where do you want to put your boats?\n");
while (ships<10){
    printf("%d: ",(ships+1));
    scanf("%d %d", &PX, &PY);
        if (PX>10 || PX<0 || PY>10 || PY<0){
            printf("The number must be between 0 and 10!\n"); 
            continue;       
        }
        if (B1[PX-1][PY-1]==0){
            B1[PX-1][PY-1]=219;
            ships+=1;
        }
        else{
        printf("This place is taken!\n");
        }
    while(place==0){
        CPUX=rand()%10;
        CPUY=rand()%10;
            if (B2[CPUX][CPUY]==0){
                B2[CPUX][CPUY]='1';
                place=1;
            }
            else{
            }
    }
    place=0;
}

printf("\033c");
printf("\n BATTLE SHIPS\n\n");
printf("\n BOARD B1:");
ShowBoard(10, 10, B1);
printf("\n BOARD B2:");
ShowBoard(10, 10, B2);

while(victory==0){
    
    printf("Where do you want to shoot?\n");
    while(place==0){
        scanf("%d %d", &PX, &PY);
        if (PX>10 || PX<0 || PY>10 || PY<0){
            printf("The number must be between 0 and 10!\n"); 
            continue;       
        }
        else{
            if (B2[PX-1][PY-1]=='*' || B2[PX-1][PY-1]=='X'){
                printf("This place is already destroyed!\n"); 
                continue;       
            }
            else{
                if (B2[PX-1][PY-1]==0){
                    B2[PX-1][PY-1]='*';
                    place=1;
                }
                else{
                    B2[PX-1][PY-1]='X';
                    PHIT+=1;
                    printf("\033c");
                    printf("\n BATTLE SHIPS\n\n");
                    printf("\n BOARD B1:");
                    ShowBoard(10, 10, B1);
                    printf("\n BOARD B2:");
                    ShowBoard(10, 10, B2);
                    printf("Hit and sink!\n");

                    if (PHIT==10){
                        victory=1;
                        who=1;
                        break;
                    }
                   
                }
            }
        }
    }
    if(PHIT != 10){
    place=0;
    }
        while(place==0){
        CPUX=rand()%10;
        CPUY=rand()%10;
            if (B1[CPUX][CPUY]=='*' || B1[CPUX][CPUY]=='X'){
                continue;
            }
            else{
                if (B1[CPUX][CPUY]==0){
                    B1[CPUX][CPUY]='*';
                    printf("Computer missed.");
                    place=1;
                }
                else{
                    B1[CPUX][CPUY]='X';
                    CPUHIT+=1;
                        if (CPUHIT==10){
                        victory=1;
                        who=2;
                        break;
                    }
                }
            }
        }
    place=0;
printf("\033c");
printf("\n BATTLE SHIPS\n\n");
printf("\n BOARD B1:");
ShowBoard(10, 10, B1);
printf("\n BOARD B2:");
ShowBoard(10, 10, B2);
}

WhoWon(who);











printf("\n------------------------------------------------------------------\n\n");
printf("\nChcecking!\n");
return 0;
}



void ShowBoard(int r, int c, char board[r][c]){
 
            printf("\n\n  1   2   3   4   5   6   7   8   9   10  \n\n");
        for (int r=0;r<10;r++){
            printf("|---|---|---|---|---|---|---|---|---|---|\n|");
            for(int c=0;c<10;c++){
                if(board[r][c]==0 || board[r][c]=='1'){
                printf("   |");
                }
                else{
                printf(" %c |",board[r][c]);
                }            
            }
            printf("    %d\n", (r+1));
        }
            printf("|---|---|---|---|---|---|---|---|---|---|\n\n");



}

void WhoWon(int who){

    if (who==1){
    printf("\n\n|--------------|\n");
    printf("|   YOU WON!   |\n");
    printf("|--------------|\n");
    }

    if (who==2){
    printf("\n\n|---------------|\n");
    printf("|   YOU LOST!   |\n");
    printf("|---------------|\n");
    }
}































