//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j,scoreX=0,scoreO=0;
//	char choice,player='X';
//	char board[3][3];
//	//plX,plO are player X and player O
//	cout << "\t\t\t\t    ///////////////////////////////" << endl;
//	cout << "\t\t\t\t   /         Welcome !!!         /" << endl;
//	cout << "\t\t\t\t  /      TIC-TAC-TOE-GAME       /" << endl;
//	cout << "\t\t\t\t /         2 Player Game       /" << endl;
//	cout << "\t\t\t\t///////////////////////////////" << endl;
//	cout << "\n\n\n";
//	cout << "\t\t\tWant to play game?Y/N" << endl;
//	cout << "\t\t\t";
//	cin >> choice;
//	while (choice == 'Y' || choice == 'y')
//	{
//		int attempts = 0;
//		bool winCheckX = false, winCheckO = false, plX = false, plO = false;
//		for (i = 0;i < 3;i++)
//		{
//			for (j = 0;j < 3;j++)
//			{
//				board[i][j] = ' ';
//			}
//		}
//		cout << "\n\n";
//		while (!winCheckX && !winCheckO && attempts < 9)
//		{
//			
//			cout << "\t\t\t\t 0  1  2" << endl;
//			cout << "\t\t\t\t -------" << endl;
//			for (i = 0;i < 3;i++)
//			{
//				for (int k = 0;k < 3;k++)
//				{
//					if (k == i - 1)
//					{
//						cout << "\t\t\t\t -------" << endl;
//					}
//				}
//				cout << "\t\t\t\t";
//				cout << i << "|";
//				for (j = 0;j < 3;j++)
//				{
//					cout << board[i][j] << "|";
//				}
//				cout << endl;
//			}
//			cout << "\t\t\t\t -------" << endl;
//
//			cout << "\t\t\t\tPlayer " << player << " turn: " << endl;
//
//
//			cout << "\t\t\t\tEnter i: ";
//			cin >> i;
//			cout << "\t\t\t\tEnter j: ";
//			cin >> j;
//			board[i][j] = player;
//			if (player == 'X')
//			{
//				player = 'O';
//			}
//			else
//			{
//				player = 'X';
//			}
//			if (board[0][j] == 'X' && board[1][j] == 'X' && board[2][j] == 'X' ||
//				board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X' ||
//				board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X' ||
//				board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
//			{
//				plX = true;
//				winCheckX = true;
//			}
//			if (board[0][j] == 'O' && board[1][j] == 'O' && board[2][j] == 'O' ||
//				board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O' ||
//				board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O' ||
//				board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
//			{
//				plO = true;
//				winCheckO = true;
//			}
//			system("cls");
//			attempts++;
//		}
//		if (plX == true)
//		{
//			cout << "\t\t\t\tCongratulations!!!" << endl;
//			cout << "\t\t\t\tPlayer X wins!!!" << endl;
//			scoreX++;
//		}
//		else if(plO==true)
//		{
//			cout << "\t\t\t\tCongratulations!!!" << endl;
//			cout << "\t\t\t\tPlayer O wins!!!" << endl;
//			scoreO++;
//		}
//		else
//		{
//			cout << "\t\t\t\tIt's a draw" << endl;
//		}
//		cout << "\t\t\t\tPlayerX score: " <<scoreX<< endl;
//		cout << "\t\t\t\tPlayerO score: " << scoreO << endl;
//		cout<<"\n\n\n";
//		cout << "\t\t\t\t  /////////////" << endl;
//		cout << "\t\t\t\t /  Game End /" << endl;
//		cout << "\t\t\t\t/////////////" << endl;
//		cout << "\n\n";
//		cout << "\t\t\t\tWant to play game again?Y/N" << endl;
//		cout << "\t\t\t";
//		cin >> choice;
//	}
//
//	system("pause");
//	return 0;
//}