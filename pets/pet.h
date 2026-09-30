// file name -- pet.h
// This file contains the definition of the Pet class

#ifndef CLASS_PET_
#define CLASS_PET_

// ====================== header files ======================
#include <string>                   // for string class
using namespace std;                // for standard library

class Pet
{
   private:
     string petName;
     string petColor;
     int hunger;
     int happiness;

   public:
      Pet(string, string);
      Pet();

      // mutator - setters


      // accessor - retrieve current content
      string getName();
      string getColor();
       int getHunger();
       int getMood();

      virtual void checkStatus() = 0; // pure virtual - parent cant use it
      virtual void printDesc(); // virtual function, child or parent can use it
      virtual void drawPet();  // ??????
      virtual void makeSound();   // ??????
      virtual void eat();
      virtual void play();
      virtual void setHunger(int);
      virtual void setMood(int);



}; // class Pet

#endif
