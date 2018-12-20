//CS 104 project 1 - single row bingo
//Written by Alex Dai

/* 
This program will play a game of bingo by generating a 
single row bingo card with each call being led by a 
letter in the word BINGO followed by an integer value 
from a specified interval.
*/

#include <stdio.h>

int main() {

  int userChoice;
	int numCalls;
	int userInput;
  int callB, callI, callN, callG, callO;
	int i = 0; 
	int j;
	int playCall;
	int numBingo = 0;
	int bCount   = 0; 
	int iCount   = 0; 
	int nCount   = 0; 
	int gCount   = 0; 
	int oCount   = 0;
	double bingoPercent;
	
	srand((int)time(0)); //Creates unique seed
    
//Program to generate bingo card
    printf("Welcome to Single Row BINGO\n\n");
    
    //Asks user on how to generate bingo card
    printf("How would you like to create your BINGO Card?\n");
    printf("1 - user entered\n2 - randomly generated\n");
    printf("Please enter your choice: ");
    scanf("%d", &userChoice);
	
    if(userChoice == 1){ 
		//Asks user to input call numbers within a given interval
		printf("Generating your card from user input...\n"); 
    printf("Enter a number [01-15] for B: \n");
		printf("Enter a number [16-30] for I: \n");
		printf("Enter a number [31-45] for N: \n");
		printf("Enter a number [46-60] for G: \n");
		printf("Enter a number [61-75] for O: \n");
		while(i < 5){
			scanf("%d", &userInput);
			if(i == 0){ 
				if(userInput >= 1 && userInput <= 15){
					callB = userInput;
					++i;
					printf("Successfully entered.\n");
				}else if(userInput < 1 && userInput > 15){
					continue;
				}
			}else if(i == 1){
				if(userInput >= 16 && userInput <= 30){
					callI = userInput;
					++i;
					printf("Successfully entered.\n");
				}else if(userInput < 16 && userInput > 30){
					continue;
				}
			}else if(i == 2){
				if(userInput >= 31 && userInput <= 45){
					callN = userInput;
					++i;
					printf("Successfully entered.\n");
				}else if(userInput < 31 && userInput > 45){
					continue;
				}
			}else if(i == 3){
				if(userInput >= 46 && userInput <= 60){
					callG = userInput;
					++i;
					printf("Successfully entered.\n");
				}else if(userInput < 46 && userInput > 60){
					continue;
				}
			}else if(i == 4){
				if(userInput >= 61 && userInput <= 75){
					callO = userInput;
					++i;
					printf("Successfully entered.\n");
			}else if(userInput < 61 && userInput > 75){
				continue;
			}	
		}    
	}
	}else if(userChoice == 2){
		
		//Uses rand function to generate call numbers randomly
		callB = (rand() % (15 - 1 + 1)) + 1;
		callI = (rand() % (30 - 16 + 1)) + 16;
		callN = (rand() % (45 - 31 + 1)) + 31;
		callG = (rand() % (60 - 46 + 1)) + 46;
		callO = (rand() % (75 - 61 + 1)) + 61;
	}
    printf("Your BINGO card is: B%d I%d N%d G%d O%d\n\n", 
			callB, callI, callN, callG, callO);
	
//Program to compare randomly generated calls to bingo card
	//Asks user for number of calls
	printf("Now, let's play Single Row BINGO!\n");
	printf("How many BINGO calls do you want?\n");
	scanf("%d", &numCalls);
	printf("The %d BINGO calls are:\n", numCalls);
	
	//Prints calls in combination based on user input, letter, and number range
	if(numCalls > 0){
		for(j = 0; j <= numCalls; ++j){
			playCall = (rand() % (75 - 1 + 1)) + 1;
			if(playCall >= 1 && playCall <= 15){ 
				printf("B%d ", playCall); 
				if(playCall == callB){ //Compares calls to bingo card
					printf("BINGO!!!");
					++numBingo;
					++bCount;
				}
				printf("\n");	
			}else if(playCall >= 16 && playCall <= 30){
				printf("I%d ", playCall);
				if(playCall == callI){
					printf("BINGO!!!");
					++numBingo;
					++iCount;
				}
				printf("\n");
			}else if(playCall >= 31 && playCall <= 45){
				printf("N%d ", playCall);
				if(playCall == callN){
					printf("BINGO!!!");
					++numBingo;
					++nCount;
				}
				printf("\n");
			}else if(playCall >= 46 && playCall <= 60){
				printf("G%d ", playCall);
				if(playCall == callG){
					printf("BINGO!!!");
					++numBingo;
					++gCount;
				}
				printf("\n");
			}else if(playCall >= 61 && playCall <= 75){
				printf("O%d ", playCall);
				if(playCall == callO){
					printf("BINGO!!!");
					++numBingo;
					++oCount;
				}
				printf("\n");
			}
			//Prints a message if perfect bingo
			if(bCount >= 1 && iCount >= 1 && nCount >= 1 && gCount >= 1 && oCount >= 1){
				printf("You got BINGOs on all letters!\n\n");
				break;
			}else if(j == numCalls && (bCount == 0 || iCount == 0 || nCount == 0 || gCount == 0 || oCount == 0)){
				printf("You did not get BINGOs on all letters.\n\n");
			}	
		}
	}

//Provides game summary
	if (numBingo > 0){
		printf("Game Summary:\n");
		printf("After %d BINGO calls\n", j - 1);
		printf("You had %d BINGO!\n", numBingo);
		bingoPercent = (double)numBingo * 100 / (j - 1); //Calculates win percentage
		printf("You got a BINGO %lf%% of the time.\n", bingoPercent);
		printf("Thanks for playing. Goodbye.\n");
	}else{
		printf("Game Summary:\n");
		printf("After %d BINGO calls\n", j - 1);
		printf("You had 0 BINGO!(loser)\n");
		printf("You got a BINGO 0%% of the time.\n");
		printf("Thanks for playing. Goodbye.\n");
	}

    return 0;
}
