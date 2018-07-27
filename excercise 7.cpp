#include <iostream>
// library voor tijdsgebonden functies
#include <time.h>

using namespace std;
//pseudo-random nummer generator functie
void generateRandom(int, int);
char waitForQuit;
int main()
{
	cout << "hoeveel nummers wil je creeren?" << endl;
	int numberOfVars;
	cin >> numberOfVars;
	cout << "hoeveel nummers wil je kiezen?" << endl;
	int numberOfChoices;
	cin >> numberOfChoices;
	cout << "Jouw willekeurige nummers zijn:" << endl;
	generateRandom(numberOfVars, numberOfChoices);
	cin >> waitForQuit;
	return 0;
}
void generateRandom(int total_vars, int vars_to_draw)
{
	if (total_vars < vars_to_draw)
		return;
	// seed random met tijd als seed, vandaar PSEUDO random, volledig random is onmogelijk te genereren.
	srand(time(NULL)); //seeds

	int *vars = new int[vars_to_draw];

	for (int i = 0; i < vars_to_draw; i++)
	{
		// random nummer genereren
		vars[i] = rand() % total_vars + 1;
		//checken of het nummer al in array zit, zo ja, genereer het nogmaals totdat een uniek getal is gevonden.
		for (int j = 0; j < i + 1; j++)
		{
			if (vars[i] == vars[j] && i != j)
			{
				i--;
				break;
			}
			else if (j == i)
				cout << vars[i] << endl;
		}
	}

	delete[] vars;
}
