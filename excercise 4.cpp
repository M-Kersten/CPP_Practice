#include <iostream>
#include <string>
//library om system pause te kunnen gebruiken
#include <process.h>

using namespace std;

int pin;
int checkpin;
int tries = 5;
bool loginfailed;

int main()
{
	cout << "create pincode password:" << endl;
	cin >> pin;
	
	cout << "now enter your pincode:" << endl;
	cin >> checkpin;
	
	for (int i = tries; i > 0; i--)
	{
		if (checkpin != pin)
		{
			cout << "pin incorrect " << i << " tries left" << ", try again:" << endl;
			cin >> checkpin;
		}
		if (checkpin == pin)
		{
			loginfailed = false;
			break;
		}
		loginfailed = true;
	}

	if (loginfailed)
	{
		cout << "failed to login..." << endl;
	}
	else
	{
		cout << "correct!" << endl;
	}
	//system is windows, dit programma zou niet werken op een ander os en is eigenlijk niet de bedoeling
	system("pause");
	return 0;
}
