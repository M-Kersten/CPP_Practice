#include <iostream>
#include "farm.h"

using namespace std;

void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);

int main()
{
    Dog dog;
    Cat cat;
    Cow cow;

    voiceOfAnimal(&cow);
		
    return 0;
}
void voiceOfAnimal(Animal *p)
{
    cout << p->getVoice() << endl;
}
void voiceOfAnimal(Animal &p)
{
    cout << p.getVoice() << endl;
}
