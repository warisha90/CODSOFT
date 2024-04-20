//#include<iostream>
//using namespace std;
//int main()
//{
//	float num1, num2, result=0.0;
//	char op,choice;                    //op is operation that will be performed
//	cout << "\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>" << endl;
//	cout << "\t\t\t\t\twelcome to calculator" << endl;
//	cout << "\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>" << endl;
//	cout << "\n\n\n";
//	cout << "\t\t\t\t\tWant to use calculator? Y/N" << endl;
//	cout << "\t\t\t\t\t";
//	cin >> choice;
//	while (choice == 'Y' || choice == 'y')
//	{
//		cout << "\t\t\t\t\tEnter first number." << endl;
//		cout << "\t\t\t\t\t";
//		cin >> num1;
//		cout << "\t\t\t\t\tEnter second number." << endl;
//		cout << "\t\t\t\t\t";
//		cin >> num2;
//		cout << "\t\t\t\t\tEnter operation you want to perform." << endl;
//		cout << "\t\t\t\t\tOperations: +, -, *, / " << endl;
//		cout << "\t\t\t\t\t";
//		cin >> op;
//		switch (op)
//		{
//		case '+':
//			result = num1 + num2;
//			cout << "\t\t\t\t\tYour result is:" << result << endl;
//			break;
//		case '-':
//			result = num1 - num2;
//			cout << "\t\t\t\t\tYour result is:" << result << endl;
//			break;
//		case '*':
//			result = num1 * num2;
//			cout << "\t\t\t\t\tYour result is:" << result << endl;
//			break;
//		case '/':
//			if (num2 != 0)
//			{
//			result = num1 / num2;
//			cout << "\t\t\t\t\tYour result is:" << result << endl;
//			}
//			else
//			{
//				cout << "\t\t\t\tPlease enter valid input." << endl;
//				cout << "\t\t\t\tSecond number should not be 0" << endl;
//			}
//			break;
//		default:
//			cout << "\t\t\t\t\tPlease enter valid operation." << endl;
//			cout << "\t\t\t\t\tTry again." << endl;
//		}
//		cout << "\t\t\t\t\tThanks for using me" << endl;
//		cout << "\n\n\n";
//		cout << "\t\t\t\t\tWant to use calculator again? Y/N" << endl;
//		cout << "\t\t\t\t\t";
//		cin >> choice;
//	}
//	system("pause");
//	return 0;
//}