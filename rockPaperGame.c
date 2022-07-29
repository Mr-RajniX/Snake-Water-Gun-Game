//Rock , Paper , Sciccor || Snake , water , Gun

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(int u , int c){
    if (u == 's' && c == 'w' || u == 'g' && c == 's' || u== 'g' && c== 'w')
    {
        return 1;//you wins
    }
    if (c == 's' && u == 'w' || c == 'g' && u == 's' || c== 'g' && u == 'w')
    {
        return -1;//computer wins
    }
    return 0; //Match draw
}


int main(){
    char you , comp;
//Random Choice By Computer :
    int number;
    srand(time(0));
    number = rand()%10 +1 ;

    if (number < 3)
    {
        comp= 's';
    }
    else if (number>3 && number < 6)
    {
        comp= 'w';
    }
    else
    {
        comp='g';
    }

//Your Turn
    printf("Enter 's' for Snake, 'w' for Water and 'g' for Gun : \n");
    scanf("%c",&you);

    int result = snakewatergun(you, comp);
    if (result == 1)
    {
        printf("You wins");
    }
    else if (result == -1)
    {
        printf("You loss");
    }
    else
    {
        printf("Match draw");
    }
    printf("\n********************************************\nBecause You choose %c and Computer choose %c. ",you,comp);



}