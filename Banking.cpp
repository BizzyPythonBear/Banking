#include <iostream>
#include <fstream>
#include "myStuff.h"

using namespace std;

ofstream outfile("vars.txt");
ifstream infile("vars.txt");

int main()
{   
    mainMenu();
    responseCheck();
}