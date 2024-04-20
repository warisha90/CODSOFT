//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int choice, input,task;
//	bool Iscompleted[50] = { false };
//	string completed[50];
//	string tasks[50];
//	char choose;
//	cout << "Welcome!!!" << endl;
//	cout << "TO-DO-LIST" << endl;
//	cout << "What do you want to do?" << endl;
//	cout << "\t\t\t1.Want to add tasks?" << endl;
//	cout << "\t\t\t2.Want to view tasks?" << endl;
//	cout << "\t\t\t3.Want to mark tasks as completed?" << endl;
//	cout << "\t\t\t4.Want to remove tasks?" << endl;
//	cout << "Enter choice or 5 to exit: " << endl;
//	cin >> choice;
//	if (choice <= 4 && choice > 0)
//	{
//	    while (choice != 5)
//	    {
//			if (choice == 1)
//			{
//				cout << "\n\n\t\t\t\tHow many tasks you want to add?" << endl;
//				cin >> input;
//				cout << "\t\t\t\tEnter tasks: " << endl;
//				for (int i = 0;i <= input;i++)
//				{
//					getline(cin, tasks[i]);
//				}
//			}
//			else if (choice == 2)
//			{
//				for (int i = 1;i <= input;i++)
//				{
//					
//					cout << tasks[i];
//					if (!Iscompleted[i])
//					{
//						completed[i] = "Pending";
//					}
//					else
//					{
//						completed[i] = "Completed";
//					}
//						cout << "  " << completed[i] << endl;
//				}
//			}
//			else if (choice == 3)
//			{
//				cout << "\t\t\t\tWant to mark task as completed?" << endl;
//				cin >> choose;
//				while (choose == 'y' || choose == 'Y')
//				{
//					cout << "Enter task you want to mark as completed: ";
//					cin >> task;
//					for (int i = 1;i <= input;i++)
//					{
//						cout << tasks[i];
//						if (i == task)
//						{
//							Iscompleted[i] = true;
//							completed[i]="Completed";
//						}
//							cout << "  " << completed[i] << endl;
//					}
//					cout << "\t\t\t\tWant to mark task as completed?" << endl;
//					cin >> choose;
//				}
//			}
//			else if (choice == 4)
//			{
//				cout << "Want to remove task?" << endl;
//				cin >> choose;
//				while (choose == 'y' || choose == 'Y')
//				{
//					cout << "Enter task you want to remove: ";
//					cin >> task;
//					for (int i = 1;i < input;i++)
//					{
//						if (i == task)
//						{
//							tasks->erase();
//						}
//						cout << tasks[i] << endl;
//					}
//					cout << "Want to remove task?" << endl;
//					cin >> choose;
//				}
//			}
//			cout << "Enter choice or 5 to exit: " << endl;
//			cin >> choice;
//		}
//	}
//	else
//	{
//		cout << "\t\t\tInvalid input." << endl;
//	}
//
//	system("pause");
//	return 0;
//
//}