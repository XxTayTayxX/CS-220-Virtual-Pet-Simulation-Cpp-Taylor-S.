/*
  file name -- dog.cpp

  This file contais the definitions of member functions of
  Car class
*/

// ====================== header files ======================
#include <string>                   // for string class
#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm> // for min/max
using namespace std;                // for standard library
#include "dog.h"


Dog::Dog(string name, string color, string breed, string food) : Pet(name, color)
{
   dogBreed = breed;
   favFood = food;

  // cout << "**call to value constructor" << endl;
} // set-value constructor

Dog::Dog() :Pet()
{

   //cout << "**call to default constructor" << endl;
} // set-default constructor

// mutators

// accessor
string Dog::getBreed()
{
   return dogBreed;
}

string Dog::getFood()
{
   return favFood;
}



void Dog::checkStatus() { //
   cout << "Status for " << getName() << ":" << endl;
   cout << "Hunger: " << getHunger() << "/5 - ";

   if (getHunger() >= 3) {
      cout << "Feed this animal";
   }
   else {
      cout << "Hunger is OK";
   }
   cout << endl;

   cout << "Mood: " << getMood() << "/5 - ";

   if (getMood() >= 3) {
      cout << "having fun";
   }
   else {
      cout << "is lonely, play with this pet";
   }
   cout << endl;
}

void Dog::eat() { //
   cout << getName() << "'s favorite food is " << getFood() << endl;

   setHunger(max(0, getHunger() - 1));

}

void Dog::play() { //
   cout << getName() << " is running around fetching a ball!" << endl;

   setMood(min(5, getMood() + 1));

}

void Dog::drawPet() { //
   cout << "  __      _" << endl;
   cout << "o'')}____//" << endl;
   cout << " `_/      )" << endl;
   cout << "(_(_/-(_/" << endl;
}

void Dog::printDesc() { //
   cout << "Name: " << getName() << endl;
   cout << "Color: " << getColor() << endl;
   cout << "Hunger: " << getHunger() << "/5" << endl;
   cout << "Mood: " << getMood() << "/5" << endl;
   cout << "Breed: " << getBreed() << endl;
   cout << "Favourite Food: " << getFood() << endl;
}


void Dog::makeSound() { //
   if(getHunger() < 3 && getMood() < 3) {
      cout << getName() << " is growling" << endl;
   }
   else if(getHunger() < 5) {
      cout << getName() << " is whining" << endl;
   }
   else {
      cout << getName() << " is barking" << endl;
   }
}
