// This file contains the definition of the Dog class

#ifndef CLASS_DOG_
#define CLASS_DOG_
#include "pet.h"
// ====================== header files ======================
//#include <string>                   // for string class
using namespace std;                // for standard library

class Dog : public Pet
{
   private:
     string dogBreed;
     string favFood;


   public:
      Dog(string, string, string, string);
      Dog();

      // mutator - setters
      void eat(); //
      void play(); //

      // accessor - retrieve current content
      string getBreed(); //
      string getFood(); //

      void printDesc(); //
      void drawPet(); //
      void makeSound(); //
      void checkStatus(); //


}; // class Dog

#endif
