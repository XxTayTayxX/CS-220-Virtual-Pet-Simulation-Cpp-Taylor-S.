/*
  file name -- pet.cpp

*/

// ====================== header files ======================
#include <string>                   // for string class
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;                // for standard library
#include "pet.h"


Pet::Pet(string name, string color)
{
   petName = name;
   petColor = color;
   hunger = 3;
   happiness = 3;
  // cout << "**call to value constructor" << endl;
} // set-value constructor

Pet::Pet()
{
   // petName = "Unknown";
   // petColor = "Unknown";
   // hunger = 0;
   // mood = 0;
  // cout << "**call to default constructor" << endl;
} // set-default constructor




// mutators
void Pet::printDesc()
{
   cout << "Description of Pet" << endl;
   cout << "Pet Name: "
         << petName << endl;
   cout << "Pet Color: "
         << petColor << endl;
   cout << endl;
}

void Pet::drawPet()
{

   }

void Pet::makeSound()
 {

    }

void Pet::eat()
 {

    }

void Pet::play()
 {

    }


void Pet::setHunger(int h)
{
    hunger = h;
}

void Pet::setMood(int m)
{
    happiness = m;
}


// accessor
string Pet::getName()
{
   return petName;
}

string Pet::getColor()
{
   return petColor;
}

int Pet::getMood()
{
   return happiness;
}

int Pet::getHunger()
{
   return hunger;
}
