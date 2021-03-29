#include <iostream>
#include <string>
#include "LinkedList.h" // ADT list operations
#include <fstream>
#include "Editor.h"
#include "CommandPlus.h"
#include "LinkedStack.h"
#include "Point.h"
using namespace std;

int main(int argc, char* argv[])
{
    
  
/*
-----This program is a simplified verison of a Vi editor-----
this program opens the file we are inputing from and is able display and move the cursor through
the users input */
    
    if (argc > 1) {
        Editor miniVi(argv[1],argv[2]);  // switched from sample.txt to keywords.txt
        miniVi.displayLines();
        miniVi.run();
    }
    else {
        cout << "argc is less than 1, no files were read" << endl;
        exit(1);
    }
  


   
    system("pause");
    return 0;
}  // end main


   // string fileName("sample.txt");
   // string fileName(argv[1]);
 //   Editor miniVi(fileName);
  //  miniVi.displayLines();
  //  miniVi.run();






