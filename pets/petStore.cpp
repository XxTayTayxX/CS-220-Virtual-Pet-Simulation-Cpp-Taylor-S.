// Filename:   petstore.cpp

// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cstdlib>
#include "dog.h"
#include "pet.h"
#include <fstream>
#include <string>
#include <iomanip>    // for output format
using namespace std;
// =============== symbolic constants ==============================
const int DECIMAL = 2;
const int WIDTH = 5;
const int PETS = 20;
const int MAXLENGTH = 25;
const char EOLN= '\n';
const int MAXNUMBER = 200;
// ================== data type declarations =======================

// =================== function prototype ==========================
void createPets(ifstream&, Pet* [], int &);
void displayPets(Pet *[], int);
void openFile(ifstream&);

int main()
{
    // data declarations
   Pet* petList[PETS] = {nullptr};
   ifstream petFile;
   int numPets;
  // string command;
    char action;
    int petIndex;

   numPets = 6; ///////
    petIndex = numPets;

   openFile(petFile);
   createPets(petFile, petList, numPets);

   while (true) {
       cout << "Enter pet number (Ex: 2): ";
       cin >> petIndex;

       if (petIndex < 1 || petIndex > numPets || petList[petIndex - 1] == nullptr) {
            cout << "Invalid pet number.";
            continue;
        }
       cout << endl;

        cout << "Enter action (E-eat, P-play, M-make sound, D-draw, X-stop): " ;
        cin >> action;
         //cout << endl;

       if (action == 'X')
        {
               cout << "END OF DAY."  << endl;
               break;
         }

      Pet* pet = petList[petIndex - 1];

     switch (action)
       {
            case 'E': pet->eat();
               break;
            case 'P': pet->play();
               break;
            case 'M': pet->makeSound();
               break;
            case 'D': pet->drawPet();
               break;
            default: cout << "Invalid action.";
               continue;
        }
/*
        if (petIndex >= 0 && petIndex < numPets) {
            if (action == 'E')
                pet->eat();
            else if (action == 'P')
                pet->play();
            else if (action == 'M')
                pet->makeSound();
            else if (action == 'D')
                pet->drawPet();
        } */
            pet->printDesc();
            cout << "*********************" << endl;
            pet->checkStatus();
            cout << endl;
            cout << endl;

    } // end while

   displayPets(petList, numPets);

   return 0;
}// end main




void createPets(ifstream& infile, Pet* petList[], int& size )  //num pets
{

   int idx;
 //   int numPets;
   string petType;
   string petName;
   string petColor;
   string dogBreed;
   string favFood;
   idx = 0;

   // initialaize LCV
   infile >> petType;

   while(!infile.eof() && idx < PETS)
   {
            if (petType == "Dog")
            {
               infile >> petName;
               infile >> petColor;
               infile >> dogBreed;
               infile >> favFood;
               petList[idx++] = new Dog(petName, petColor, dogBreed, favFood);
            }
         //   else if (petType == "Parrot")
            {
          //     infile >> ;
          //     petList[idx++] = new PartTime(studentName, studentAge, credHours);
            }
            // need to make parrot class, then switch dogBreed to parrotBreed ???
          infile >> petType;
          //++idx;

   }// end while loop
   size = idx;
}




void displayPets(Pet *petList[], int numPets)
{

   cout << "*********************" << endl;
   cout << "--- Final Pet Statuses ---"  << endl;
   cout << endl;

    for (int i = 0; i < numPets; i++)
    {
       if (petList[i])
       {
        cout << "Pet #" << (i+ 1) << " " << endl;
        petList[i]->printDesc();
         cout << "*********************" << endl;
        petList[i]->checkStatus();
         cout << "*********************" << endl;
         cout << endl;
       // delete petList[i];
      }
    }
}




void openFile(ifstream& infile)
// Purpose: This function will open an input text file.
// Precondition: None.
// Postcondition: infile is opened and a valid input file variable.
{

    char infile_name[MAXLENGTH];
    do
    {
        infile.clear();
         cout << "*********************" << endl;
         cout << "Enter input data file name: ";
         cin >> infile_name;
         cin.ignore(MAXNUMBER, EOLN);

         // link file variable to external file
         infile.open(infile_name);

         // verify file link is good
         if ( !infile )
             cout << infile_name
             << " was not successfully linked. Try again!"
             << endl;

    } while (!infile);
    // infile.close();
}// end openFile



