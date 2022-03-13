#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
// #include<string.h>
#include<time.h>
#include "questions.h"

#define MaxQues 28

void startGame(void);
void showRecord(void);
void resetScores(void);
void help(void);
void game(void);

char playerName[15];
char choice;

int main() {
    do
    {
        system("cls");
        printf("\t\t\tC PROGRAM QUIZ GAME\n");
        printf("\n\t\t________________________________________");
        printf("\n\t\t\t   WELCOME ");
        printf("\n\t\t\t      to ");
        printf("\n\t\t\t   THE GAME ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t > Press S to start the game");
        printf("\n\t\t > Press V to view the highest score  ");
        printf("\n\t\t > Press R to reset score");
        printf("\n\t\t > press H for help            ");
        printf("\n\t\t > press Q to quit             ");
        printf("\n\t\t________________________________________\n\n");
        choice=toupper(getch());
        switch(choice) {
            case 'S':
                startGame();
                break;
            case 'Q':
                exit(0);
                break;
        }
    } while (1);
    return 0;
}

void game(void) {
    system("cls");
    srand(time(0));
    int random;
    printf("Do you want to continue: ");
    scanf("%c", &choice);
    while(choice == 'Y') {
        int random = (rand() % (MaxQues + 1)) ;
        printf("Question is: \n%s\n",questions[random].quest);
        printf("Do you want to continue: ");
        scanf(" %c", &choice);
    }
    
    getch();
    return;
}

void startGame(void) {
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
    fgets(playerName, 15, stdin);
    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playerName);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    
	if (toupper(getch())=='Y'){
	    game();
        return;
    }
	else {
        return;
    }
}