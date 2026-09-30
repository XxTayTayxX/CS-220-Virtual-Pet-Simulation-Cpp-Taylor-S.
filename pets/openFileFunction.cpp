void openFile(ifstream& infile)
// Purpose: This function will open an input text file.
// Precondition: None.
// Postcondition: infile is opened and a valid input file variable.
{
    char infile_name[MAXLENGTH];

    do
    {
        infile.clear();       // clear previous file name

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
}// end openFile

