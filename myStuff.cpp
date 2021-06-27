#include <iostream>
#include <fstream>
#include "thing.h"

using namespace std;

char response;
string name;
int year;
string gender;
int age;
int timescompleted;

void check() {
    if (name!=name || !year || gender!=gender|| !age) {
        infile >> name;
        infile >> year;
        infile >> gender;    
        infile >> age;
        
        infile.close();

    } else {
        return;
    }
}

void saveData() {
    outfile << name << endl;
    outfile << year << endl;
    outfile << gender << endl;
    outfile << age << endl;
    outfile.close();
    cout << "Data Saved!" << endl;    
}

void mainMenu()
{
    check();
    cout << "Welcome to the main menu! What would you like to do?" << endl;
    cout << "A. Enter in your info." << endl;
    cout << "B. Review your info" << endl;
    cout << "E. Exit" << endl;
    cout << "What would you like to do? (Enter in number corresponding to action): ";
    cin >> response;
}

void askInfo()
{
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "What is your year of birth? (e.g. 1992) ";
    std::cin >> year;
    std::cout << "What is your gender? M or F? ";
    std::cin >> gender;
    std::cout << "Lastly, what is your age? ";
    std::cin >> age;

    cout << "Thank you!" << endl;
    mainMenu();
}

void sendUserInfo()
{

    std::cout << "------------------------\n";
    std::cout << "(This shows most recent entry)\n";
    std::cout << "Here is your info:\n";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Birth Year: " << year << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Age: " << age << std::endl;
    cout << "\n";

    infile.close();

    mainMenu();
}

void responseCheck()
{
    while (1)
    {
        if (response == 'A' || response == 'a')
        {
            askInfo();
            timescompleted += 1;
            cout << timescompleted << endl;
        }
        else if (response == 'B' || response == 'b')
        {
            sendUserInfo();
        }
        else if (response == 'E' || response == 'e')
        {
            saveData();
            return;
        }
    }
}