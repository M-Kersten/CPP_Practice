#include <iostream>
#include <string>

using namespace std;
//double is een float van 8 bytes
double inches, centimeters,
	   celsius, kelvin;
//string is een array van char
string answer;
bool back = false;

int main()
{
	while (true)
	{
		cout << "do you want to calculate inches to centimeters?" << endl;
		// >> is voor invoeren van data
		cin >> answer;

		if (answer == "yes")
		{
			while (true)
			{
				cout << "Convert inches to centimeters: ";
				cin >> inches;

				centimeters = inches * 2.54;
				cout << inches << " inches is equal to " << centimeters << " centimeters" << endl;
				cout << endl;
			}
		}
		if (answer == "no")
		{
			while (true)
			{
				cout << "Convert celsius to kelvin: ";
				cin >> celsius;
				kelvin = celsius + 273.15;
				cout << celsius << " celsius is equal to " << kelvin << " kelvin" << endl;
				cout << endl;
			}
		}
		else
		{
			cout << "Please answer with: yes or with: no" << endl;
		}
	}
	return 0;
}
