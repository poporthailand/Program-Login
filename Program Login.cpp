#include <iostream>
#include <string>
using namespace std;
int main()
{
	char number;
	string user , pass , user1 , pass1;
	
do{
	cout << "//////////Menu//////////\n";
	cout << "1. Register\n";
	cout << "2. Login\n";
	cout << "Q. Exit Program\n";
	cout << "====================\n";
	cout << "Enter Menu : ";
	cin >> number;
	if ( number == '1')
		{
		cout << "***********Register***********\n";
		cout << "Input Username : ";
		cin >> user;
		cout << "Input password : ";
		cin >> pass;
		}
	
	
	else if ( number == '2')
	{
		cout << "***********Login***********\n";
		cout << "Input Username : ";
		cin >> user1;
		cout << "Input Password : ";
		cin >> pass1;

		if (user1 == user && pass1 == pass)
		cout << "Username or Password correct^___^\n";
		
		else
		{	
			do{
		cout << "!!!!! Username or Password incorrect Please try again!!!!!\n";
		cout << "Input Username : ";
		cin >> user1;
		cout << "Input Password : ";
		cin >> pass1;
			}while (user1 != user , pass1 != pass);
		cout << "Username or Password correct^___^\n";
		}

	}

}while (number != 'Q');
	
	cout << "Exit Program .....\n";
	return 0;

}