#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	srand(time(NULL)); /*This line of code represents the use of the internal clock to control the choice 
						of the starting point a.k.a the seed. Without it, rand() gonna stick onto a 
						single integer withoiut changing it */  
    int randomNo = rand() % 10 + 1; //Assign a random number between 1 to 10
    int guessNo;
    int tries;
    int score=0; 
    
    printf("***************Welcome to the number guessing game**************************\n");
    printf("************************By CaptainPerera************************************\n\n");
    printf("I have a random number. You have to guess it.\n");
    printf("You have 3 chances. So choose carefully.\n\n");
    do{
    	printf("Enter a number between 1 and 10:\n");
        scanf("%d", &guessNo);
        if (guessNo == randomNo){
            printf("CONGRATS BOIIIIII! You guessed the number.\n");
            printf("You're not a dumbass after all!!!\n\n");
            printf("Hari kollo api giya!!!!\n");
        	end();
       	}
		if (guessNo < randomNo){
       		tries++;
            printf("WRONG ANSWER DUMBASS!!!\n");
            printf("Your answer is low. Guess a higher number idiot!!\n\n");
        }
		if (guessNo > randomNo){
        	tries++;
            printf("WRONG ANSWER DUMBASS!!!\n");
            printf("Your answer is high. Guess a lower number idiot!\n\n");
        }
    }while(tries<3); //Gives the user 3 tries
    
    printf("GAME OVER STUPID!!!. You lose!!!\n");
    printf("You're suck at this game!!!\n");
    printf("The correct answer is %d.\n\n", randomNo);
    printf("Hari Kollo api giya!!!\n");
    end(); 
	return 0;	
}
