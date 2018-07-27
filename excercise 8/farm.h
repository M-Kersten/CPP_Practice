#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED
#include <iostream>

using namespace std;

class Animal
{
        protected:
            string voice;
        public:
			//constructor
            Animal();
			//destructor
            ~Animal();
            virtual string getVoice() = 0;
};
// dit is inheritance, de class krijgt alle eigenschappen van de animal class plus eigen eigenschappen
class Dog : public Animal
{
			// dit deel is standaard private
            string sign;
        public:
            Dog();
            ~Dog();
            string getVoice() { return voice + " " + sign; }
};
class Cat : public Animal
{
	// dit deel is standaard private
            string sign;
        public:
            Cat();
            ~Cat();
            string getVoice() { return voice  + " " +  sign; }
};
class Cow : public Animal
{
	// dit deel is standaard private
            string sign;
        public:
            Cow();
            ~Cow();
            string getVoice() { return voice  + " " +  sign; }
};

#endif // FARM_H_INCLUDED

