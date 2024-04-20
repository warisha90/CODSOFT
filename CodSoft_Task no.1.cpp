//#include<iostream>
//#include<windows.h>
//using namespace std;
//int main()
//{
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);          //to color text
//	int count = 0, guess_no, secret_no, score = 0;
//	char choice;                     //yes or no user's choice
//	SetConsoleTextAttribute(h, 3);
//	cout << "\t\t\t\t\t ____________________________" << endl;
//	cout << "\t\t\t\t\t|         Welcome!!          |" << endl;
//	cout << "\t\t\t\t\t|     Number Guessing Game   |" << endl;
//	cout << "\t\t\t\t\t|        let's Start         |" << endl;
//	cout << "\t\t\t\t\t ----------------------------" << endl;
//	cout << "\n\n\n";
//	cout << "\t\t\t\t _________________________________________" << endl;
//	cout << "\t\t\t\t|Do you want to play game?                |" << endl;
//	cout << "\t\t\t\t|Press y to continue or any key to exit!!!|" << endl;
//	cout << "\t\t\t\t -----------------------------------------" << endl;
//	cout << "\t\t\t\t";
//	cin >> choice;
//	while (choice == 'y' || choice == 'Y')
//	{
//		SetConsoleTextAttribute(h, 2);
//		cout << "\t\t\t\t\t ____________________________" << endl;
//		cout << "\t\t\t\t\t|Enter secret number to guess|" << endl;
//		cout << "\t\t\t\t\t ----------------------------" << endl;
//		cout << "\t\t\t\t\t";
//		cin >> secret_no;
//		system("cls");              //to clear screen
//		cout << "\t\t\t\t\t ______________________" << endl;
//		cout << "\t\t\t\t\t|Enter number you guess|" << endl;
//		cout << "\t\t\t\t\t ----------------------" << endl;
//		cout << "\t\t\t\t\t";
//		cin >> guess_no;
//		while (guess_no != secret_no)
//		{
//			if (guess_no < secret_no)
//			{
//				cout << "\t\t\t\t\t_your guess is too small_" << endl;
//			}
//			else
//			{
//				cout << "\t\t\t\t\t_your guess is too big_" << endl;
//			}
//			count++;
//			cout << "\t\t\t\t\t ______________________" << endl;
//			cout << "\t\t\t\t\t|Enter number you guess|" << endl;
//			cout << "\t\t\t\t\t ----------------------" << endl;
//			cout << "\t\t\t\t\t";
//			cin >> guess_no;
//
//		}
//		score += 10;
//		system("cls");
//		SetConsoleTextAttribute(h, 1);
//		cout << "\t\t\t\t\t\t_______________________________" << endl;
//		cout << "\t\t\t\t\t\t|         You won !!!!" << "        |" << endl;
//		cout << "\t\t\t\t\t\t|The number of guesses are : " << count << "|" << endl;
//		cout << "\t\t\t\t\t\t|         score : " << score << "          |" << endl;
//		cout << "\t\t\t\t\t\t------------------------------" << endl;
//		SetConsoleTextAttribute(h, 3);
//		cout << "\t\t\t\t _________________________________________" << endl;
//		cout << "\t\t\t\t|Do you want to play game again?          |" << endl;
//		cout << "\t\t\t\t|Press y to continue or any key to exit!!!|" << endl;
//		cout << "\t\t\t\t ----------------------------------------" << endl;
//		cout << "\t\t\t\t";
//		cin >> choice;
//		system("cls");
//	}
//	system("pause");
//	return 0;
//}
