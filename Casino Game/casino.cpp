#include <iostream>
#include <cstring>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;
int getChoice();
void display();
void rules();
void credits();
int main()
{
	system("color f5");
	display();

	cout << endl;
	int game, chips, gameMode, color, colorBet, evenOdd, eoBet, numberOT, oneTenBet, numberOH, oneHunBet, randomNo;
	string name;
	while (true)
	{
		cout << "1. Start a New Game \t";
		cout << "2. Display rules ";
		game=getChoice();

		if (game == 2)
		{
			rules();
		}
		else if (game == 1)
		{
			break;
		}
		else
		{
			cout << "\n\t\tPlease Enter a Valid Input!!!\n\n";
		}
	}

	system("cls");

	cout << "\n\tPlease Enter Your Name: ";
	getline(cin, name);
	cout << "\tWelcome " << name << " !!!";
	cout << "\nEnter the Amount of Chips You Want to Buy(1 Chip = 1$): ";

	chips=getChoice();
	
	cout << "Purchase Successfull !!! and costs you " << chips << "$";

	cout << "\n\t\t==========ROULLETE==========\n";

	while (gameMode != 5)
	{
		cout << "\n\t\tNumber of Chips you have " << chips << endl;
		cout << "\n1. Bet on color (Doubles Bet) :";
		cout << "\n2. Bet on Number Even or Odd (Doubles Bet):";
		cout << "\n3. Bet on Number Between 1-10 (Win 10x of Bet):";
		cout << "\n4. Bet on Number Between 1-100 (Win 100x of Bet):";
		cout << "\n5. End Game & Convert Your Chips Back to Dollars (1 Chip = 1$):";


		
		gameMode=getChoice();

		system("cls");

		switch (gameMode)
		{
			case 1:
				cout << "1.RED\t2.BLACK \n ";
				cout << "Select a Color :";

				
				color=getChoice();

				while (true)
				{
					cout << "Chips You Have " << chips << endl;
					cout << "Enter The Amount of Chips You Want to Bet: ";

					colorBet =getChoice();

					if (colorBet <= chips)
					{
						chips = chips - colorBet;
						srand(time(NULL));
						randomNo = (rand() % 2) + 1;
						cout << "\nBall Landed on ";
						if (randomNo == 1)
						{
							cout << "RED Color\n";
						}
						else
						{
							cout << "BLACK Color\n";
						}

						if (color == randomNo)
						{
							colorBet = colorBet * 2;
							cout << "Congratulaions!!!\t You won " << colorBet << " Chips. ";
							chips = chips + colorBet;
							cout << endl;
							system("pause");
							system("cls");
						}
						else
						{
							cout << "You Lost " << colorBet << " Chips";
							cout << endl;
							system("pause");
							system("cls");
						}

						break;
					}
					else
					{
						cout << "\nYou donot Have enought Chips!!!";
					}
				}

				break;
			case 2:
				cout << "Select a Choice :\n";
				cout << "1.Odd\t2.Even : ";

				evenOdd=getChoice();

				while (true)
				{
					cout << "Chips You Have " << chips << endl;
					cout << "Enter The Amount of Chips You Want to Bet: ";

					eoBet = getChoice();

					if (eoBet <= chips)
					{
						chips = chips - eoBet;
						srand(time(NULL));
						randomNo = rand() % 2;
						if (evenOdd == 1)
						{
							cout << "\nBall Landed on Number " << randomNo << endl;
							if (randomNo != 0)
							{
								eoBet = eoBet * 2;
								cout << "Congratulaions!!!\t You won " << eoBet << " Chips. ";
								chips = chips + eoBet;
								cout << endl;
								system("pause");
								system("cls");
							}
							else
							{
								cout << "You Lost " << eoBet << " Chips";
								cout << endl;
								system("pause");
								system("cls");
							}
						}
						else if (evenOdd == 2)
						{
							if (randomNo == 0)
							{
								eoBet = eoBet * 2;
								cout << "Congratulaions!!!\t You won " << eoBet << " Chips. ";
								chips = chips + eoBet;
								cout << endl;
								system("pause");
								system("cls");
							}
							else
							{
								cout << "You Lost " << eoBet << " Chips";
								cout << endl;
								system("pause");
								system("cls");
							}
						}
						else
						{
							cout << "Please Input a Valid Selection!!! \n";
						}

						break;
					}
					else
					{
						cout << "\nYou donot Have enought Chips!!!";
					}
				}

				break;
			case 3:

				cout << "Enter a Number Between 1 - 10: ";

				numberOT =getChoice();

				while (true)
				{
					cout << "Chips You Have " << chips << endl;
					cout << "Enter The Amount of Chips You Want to Bet: ";

					oneTenBet = getChoice();

					if (oneTenBet <= chips)
					{
						chips = chips - oneTenBet;
						srand(time(NULL));
						randomNo = (rand() % 10) + 1;
						cout << "\nBall Landed on Number " << randomNo << endl;
						if (numberOT == randomNo)
						{
							oneTenBet = oneTenBet * 2;
							cout << "Congratulaions!!!\t You won " << oneTenBet << " Chips. ";
							chips = chips + oneTenBet;
							cout << endl;
							system("pause");
							system("cls");
						}
						else
						{
							cout << "You Lost " << oneTenBet << " Chips";
							cout << endl;
							system("pause");
							system("cls");
						}

						break;
					}
					else
					{
						cout << "\nYou donot Have enought Chips!!!";
					}
				}

				break;
			case 4:
				cout << "Enter a Number Between 1 - 100: ";

				numberOH = getChoice();

				while (true)
				{
					cout << "Chips You Have " << chips << endl;
					cout << "Enter The Amount of Chips You Want to Bet: ";

					
					oneHunBet =getChoice();

					if (oneHunBet <= chips)
					{
						chips = chips - oneHunBet;
						srand(time(NULL));
						randomNo = (rand() % 100) + 1;
						cout << "\nBall Landed on Number " << randomNo << endl;
						if (numberOT == randomNo)
						{
							oneHunBet = oneHunBet * 2;
							cout << "Congratulaions!!!\t You won " << oneHunBet << " Chips. ";
							chips = chips + oneHunBet;
							cout << endl;
							system("pause");
							system("cls");
						}
						else
						{
							cout << "You Lost " << oneHunBet << " Chips";
							cout << endl;
							system("pause");
							system("cls");
						}

						break;
					}
					else
					{
						cout << "\nYou donot Have enought Chips!!!";
					}
				}

				break;
			case 5:
				cout << "\n\t You Won " << chips << " Chips. \n";
				break;

			default:
				cout << "Please input a Valid Selection!!!";
				break;
		}
	}

	cout << "\n\t\t==========ROULLETE==========\n";
	cout << "Thanks for Playing!!!\n";
	cout << "\t" << name << " You Won " << chips << " $\n";
	cout << "Showing Credits After 8 Seconds\n";

	Sleep(8000);
	system("cls");

	credits();
	system("pause");

}

void display()
{
	string casino = "\n========================================================================================="
	"\n   CCCCC	  AAAA  	SSSSSSSS	IIIIIIII	NN    NN	  0000"
	"\n CC     	 A    A 	SS      	   II   	NNN   NN	 0    0"
	"\nCC      	AAAAAAAA	  SSSS  	   II   	NN N  NN	0      0"
	"\n CC     	AA    AA	      SS	   II   	NN  N NN	 0    0"
	"\n   CCCCC	AA    AA	SSSSSSSS	IIIIIIII	NN   NNN	  0000"
	"\n=========================================================================================\n";

	for (int i = 0; i < casino.size(); i++)
	{
//		Sleep(10);
		cout << casino[i];
	}
}

void rules()
{
	cout << "\n\t\t==========Rules==========\n";
	cout << "\n1. Buy Chips After Entering the game 1$ = 1 Chip.";
	cout << "\n2. Select the Method of Beting.";
	cout << "\n3. Place a Bet on Number / Color.";
	cout << "\n4. Convert Your Chips Back to Dollars 1 Chip = 1$.";
	cout << "\n\n\t\t=========================\n";
	system("pause");
	system("cls");
}

void credits()
{
	string developers = "\n\t==========Developers==========\n"
	"\n\tKHUBAIB KHALIL\t21-NTU-CS-1325"
	"\n\t==============================\n";
	for (int i = 0; i < developers.size(); i++)
	{
		Sleep(20);
		cout << developers[i];
	}
}

int getChoice(){
	int choice = 0 ;
	
	cout<<"\n-Enter your Input: ";
	cin>>setw(1)>>choice;
	
	while(!cin.good()){
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "You have entered wrong input" << endl;
		cout << "\n-Enter your Input: ";
		cin>>setw(1)>>choice;
	}
	
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	
	return choice;
}
