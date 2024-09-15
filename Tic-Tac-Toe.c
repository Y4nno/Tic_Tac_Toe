#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char Player_1(char*);
char Player_2(char*);
int The_Board(char [3][3], char*, char*);

int main (){

    char arr[3][3];
    char p1[11];
    char p2[11];
    int flag = 1;
    char choice[5];

    printf("WELCOME TO TIC TAC TOE!!!!!\n");
    printf("\n    |    |    ");
    printf("\n----|----|----");
    printf("\n    |    |    ");
    printf("\n----|----|----");
    printf("\n    |    |    ");

    printf("\nThis is a two player game.\n");

    printf("\nDo you wish to proceed?");
    scanf("%s", &choice);

    if(strcasecmp(choice,"no") == 0){

        return 0;

    }else if(strcasecmp(choice,"yes") == 0){

        Player_1(p1); 
        Player_2(p2);
        The_Board(arr,p1,p2);

    }

}

char Player_1(char* play1){

    int flag = 1;

    do{

    printf("\nPlease Enter player 1's name (10 Character name): ");
    scanf("%s", play1);

    if(strlen(play1) > 10){
        printf("Please try again\n");
    }else if(strlen(play1) <= 10){
        flag = !flag;
    }

    }while(flag);

}

char Player_2(char* play2){

    int flag = 1;
    int row;
    int column;

    do{

    printf("\nPlease Enter player 2's name (10 Character name): ");
    scanf("%s", play2);

    if(strlen(play2) > 10){
        printf("Please try again\n");
    }else if(strlen(play2) <= 10){
        flag = !flag;
    }

    }while(flag);

}

int The_Board(char arr[3][3], char* p1, char* p2){

    int flag = 1;
    int flag2 = 1;

    do{

        printf("\n %c | %c | %c ", arr[1][1], arr[1][2], arr[1][3]);
        printf("\n----|----|----");
        printf("\n %c | %c | %c ", arr[2][1], arr[2][2], arr[2][3]);
        printf("\n----|----|----");
        printf("\n %c | %c | %c ", arr[3][1], arr[3][2], arr[3][3]);

        do{

            

        }while(flag2);

    }while(flag);

}