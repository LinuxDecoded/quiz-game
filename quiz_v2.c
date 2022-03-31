#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "questions.h"

#define MaxQues 24

void startGame(void);
void showRecord(void);
void resetScores(void);
void help(void);
void game(char playerName[15]);
void saveScore(char user[15], int score);

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
            case 'R':
                resetScores();
                break;
            case 'V':
                showRecord();
                break;
            case 'H':
                help();
                break;
            case 'Q':
                exit(0);
                break;
        }
    } while (1);
    return 0;
}

void game(char playerName[15]) {
    system("cls");
    srand(time(0));
    int random, opt, life=3, score=0;
    while(1) {
        int random = (rand() % (MaxQues + 1)) ;
        printf("Question is: \n\n%s\n",questions[random].quest);
        printf("1)%s    2)%s    3)%s    4)%s\n",questions[random].options[0],questions[random].options[1],questions[random].options[2],questions[random].options[3]);
        printf("\nEnter your choice (1-4): ");
        scanf(" %d",&opt);
        if(strcmp(questions[random].options[opt-1], questions[random].answer) == 0) {
            printf("\nRight answer !!!\n\n");
            score+=100;
            printf("Current Score is: %d\n",score);
        }
        else {
            printf("\nWrong answer !!!\n");
            life--;
            printf("Life left for playing: %d\n",life);
            printf("Your Score: %d\n",score);
            if(life==0){
                printf("\nNo life left for playing further !!!\n");
                saveScore(playerName, score);
                break;
            }
        }
        fflush(stdin);
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
	    game(playerName);
        return;
    }
	else {
        return;
    }
}

void resetScores(void) {
	FILE *f;
    char playerName[15]={" "};
    int score;
	f=fopen("score.txt","w");
	fscanf(f,"%s%f",&playerName,&score);
	score=0;
	fprintf(f,"%s,%d",playerName,score);
    fclose(f);
    system("cls");
    printf("Score reset complete !!!");
    getch();
}

void showRecord(void) {
    system("cls");
	char playerName[15];
	float score;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%d",&playerName,&score);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %d",playerName,score);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();
}

void help(void) {
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");
    getch();
}

void saveScore(char user[15], int score) {
    char playerName[15];
    int sc;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%d",&playerName,&sc);
	fclose(f);
	if (score>=sc){
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%d",user,score);
	    fclose(f);
    }
}