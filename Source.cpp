#include <iostream>// library
using namespace std; 
// Marvel quiz
int main() { //starting point of program

	//these variables hold the scores
	int Thor = 0;//each SH starts at 0 points
	int IronMan = 0;
	int Hulk = 0;
	int BlackPanther = 0;
	int CaptainAmerica = 0;
	char input; //this variable holds user input

	cout << "Welcome today you will be taking a quick quiz to find out what Marvel hero you are most alike (type they key next to any option you can relate to)" << endl;

	//question 1:
	cout << "What is your favorite color? (R)Red (G)Grey (E)green (B)Black (L)Blue" << endl;
	cin >> input; //stores keyboard input
	if (input == 'r' || input == 'R')//checks if user typed r, if so, add to thor
		Thor++; //add to thor
	else if (input == 'b' || input == 'B') // "||" means OR
		BlackPanther += 2;
	else if (input == 'e' || input == 'E')
		Hulk++;
	else if (input == 'l' || input == 'L')
		CaptainAmerica += 2;
	else
		IronMan += 3;

	//Question 2:
	cout << "What best describes your personality? (a)Leader (s)Spoiled and reckless (d)Anger issues (f)Thug (g)Confident" << endl;
	cin >> input;
	if (input == 'a' || input == 'A')
		CaptainAmerica++;
	else if (input == 's' || input == 'S')
		IronMan++;
	else if (input == 'd' || input == 'D')
		Hulk += 3;
	else if (input == 'f' || input == 'F')
		BlackPanther++;
	else if (input == 'g' || input == 'G')
		Thor += 3;

	//Question 3:
	cout << "How would you like to be able to travel to places? (1)Bike (2)Run or walk to places (3)Fly (4)Use a jet to travel (5)use a suit to fly" << endl;
	cin >> input;
	if (input == '1')
		CaptainAmerica++;
	else if (input == '5')
		IronMan += 3;
	else if (input == '2')
		Hulk += 3;
	else if (input == '4')
		BlackPanther++;
	else if (input == '3')
		Thor += 3;

	// Question 4:
	cout << "What is your favorite weapon? (P)Robotic suit (I)Claws (k)Melee (Q)shield (S)Lightning" << endl;
	cin >> input;
	if (input == 'p' || input == 'P')
		IronMan++;
	else if (input == 'I' || input == 'i')
		BlackPanther += 2;// Everyone gets different ammount of points depending on the question to try and avoid ties
	else if (input == 'k' || input == 'K')
		Hulk++;
	else if (input == 'q' || input == 'Q')
		CaptainAmerica += 2;
	else if (input == 's'|| input == 'S')
		Thor++;


	//Question 5;
	cout << "What special ability would you like to have? (L)Super strenght (b)Genious (r)God of lightning (u)super soldier (h)super human powers and advanced tech" << endl;
	cin >> input;
	if (input == 'L' || input == 'l')
		Hulk += 2;
	else if (input == 'B' || input == 'b')
		IronMan += 2;
	else if (input == 'r' || input == 'R')
		Thor += 3;
	else if (input == 'u' || input == 'U')
		CaptainAmerica++;
	else if (input == 'h'|| input == 'H')
		BlackPanther++;
	
	//Gather the scores
	if (Thor > IronMan && Thor > Hulk && Thor > CaptainAmerica && Thor > BlackPanther)//check if the points show that the user is thor
		cout << "You are the mighty God of Thunder! " << endl;
	else if (IronMan > Hulk && IronMan > Thor && IronMan > CaptainAmerica && IronMan > BlackPanther)//checks if the user is Ironman
		cout << "A genious Military person! You are very alike to IronMan " << endl;
	else if (Hulk > IronMan && Hulk > CaptainAmerica && Hulk > Thor && Hulk > BlackPanther)//ckecks if the user is hulk
		cout << "Dont get too angry. You are the mighty Hulk!! " << endl;
	else if (CaptainAmerica > IronMan && CaptainAmerica > Thor && CaptainAmerica > BlackPanther && CaptainAmerica > Hulk)//checks if the user is captain america 
		cout << "You are America's soldier, Captain America! " << endl;
	else if (BlackPanther > Thor && BlackPanther > Hulk && BlackPanther > CaptainAmerica && BlackPanther > IronMan)//checks if the user is blackpanther
		cout << "You are the king of Wakanda! You are the BlackPanther " << endl;
	else
		cout<<"you have a tie" << endl;// if 2 get the same ammount of points, this pops up as a result
		




}