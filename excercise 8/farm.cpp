#include "farm.h"

// dit is een class destructor, om data vrij te maken na het uitvoeren van functies
Animal::~Animal()
{

}
//toewijzen van eigenschappen
Dog::Dog()
{
    sign = "D";
    voice = "hau";
}
// class destructor initializeren
Dog::~Dog()
{

}
Cat::Cat()
{
    sign = "C";
    voice = "meow";
}
Cat::~Cat()
{

}
Cow::Cow()
{
    sign = "CO";
    voice = "moooo";
}
Cow::~Cow()
{

}
