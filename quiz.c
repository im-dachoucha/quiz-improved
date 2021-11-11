#include <stdio.h>

void main(){
	int score, menu=-1, choice=-1;
	while(menu != 0){
		score = 0;
//		header
//		system("cls");
		printf("---------- WELCOME TO THE ULTIMATE IT QUIZ ----------\n");
//		menu
		printf("Menu :\n");
		printf("1 -> Start quiz\n");
	//	to be continued
		printf("2 -> General info about the quiz\n");
		printf("0 -> quit\n\n");
		
	//	get user choice
		printf("Your choice : ");
		scanf("%d", &menu);
		system("cls");
		
		if(menu == 1){
			system("cls");
			printf("let start the ride\n\n");
			printf("----------Your score is at %d pts----------\n\n", score);
			while(choice < 1 || choice > 3){
				printf("First question :\n\n");
				printf("Wich of the following programming languages is interpreted : \n");
				printf("1 -> C\n");
				printf("2 -> JavaScript\n");
				printf("3 -> C++\n");
				scanf("%d", &choice);
				switch(choice){
					case 1:
						if(score > 0) score -= 1;
						break;
					case 2:
						score += 1;
						break;
					case 3:
						if(score > 0) score -= 1;
						break;
					default:
						system("cls");
						printf("Please choose a number showing on the screen!!!\n");
						break;
				}
			}
			choice = -1;
			
			system("cls");
			printf("----------Your score is at %d pts----------\n\n", score);
			while(choice < 1 || choice > 3){
				printf("Second question :\n\n");
				printf("the command 'pwd' stands for : \n");
				printf("1 -> Path to working directory\n");
				printf("2 -> Past the working directory\n");
				printf("3 -> None\n");
				scanf("%d", &choice);
				switch(choice){
					case 1:
						if(score > 0) score -= 1;
						break;
					case 2:
						if(score > 0) score -= 1;
						break;
					case 3:
						score += 1;
						break;
					default:
						system("cls");
						printf("Please choose a number showing on the screen!!!\n");
						break;
				}
			}
			choice = -1;
			
			system("cls");
			printf("----------Your score is at %d pts----------\n\n", score);
			while(choice < 1 || choice > 4){
				printf("Thrid question :\n\n");
				printf("To get to the root directory in the linux file system, we use : \n");
				printf("1 -> cd ~/\n");
				printf("2 -> cdir /\n");
				printf("3 -> cd /home/user/root\n");
				printf("4 -> cd /\n");
				scanf("%d", &choice);
				switch(choice){
					case 1:
						if(score > 0) score -= 1;
						break;
					case 2:
						if(score > 0) score -= 1;
						break;
					case 3:
						if(score > 0) score -= 1;
						break;
					case 4:
						score += 1;
						break;
					default:
						system("cls");
						printf("Please choose a number showing on the screen!!!\n");
						break;
				}
			}
			choice = -1;
			
			system("cls");
			printf("Congrats!! You made it to the end\n");
			printf("You managed to score %d pts\n\n", score);
			
		}
		else if(menu == 2){
			system("cls");
			printf("**This is a simple (not ultimate) quiz to test your knowledge in the IT field\n\n");
			printf("**There is one and only one right answer for each qustion\n\n");
			printf("**For each right answer you get i pt\n\n");
			printf("**For each wrong answer your score decreases by 1 pt, unless if its already at 0 pt\n\n");
			printf("Press any key to get to the menu\n");
			getch();
			system("cls");
		}
		else if(menu == 0){
			system("cls");
			printf("Hope you enjoyed the it\n");
		}
		else{
			system("cls");
			printf("Please choose a number showing on the screen!!!\n");
		}
//		printf("still inside global while");
	}
	
	printf("\n\nPress any key to exit\n");
	getch();
}