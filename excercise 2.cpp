#include <iostream>
#include <string>
using namespace std;
float a[8] = { 4,6,9,3,6,3,7,5 };

int main()
{
	
	cout << "Testing arrays:" << endl;
	cout << "value of a[0] is: " << a[0] << endl;
	cout << "array in order: " << endl;

	for (size_t i = 0; i < 8; i++)
	{
		cout << to_string(i) << " : " << a[i] << endl;
	}
	cin.get();
	return 0;
}
