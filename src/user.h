#ifndef MYSTUFF_H_INCLUDED 
#define MTSTUFF_H_INCLUDED

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

struct UI {
       void Main_UI();
       void Login();
       void Signin();
};
class User_Data {
    public:
        std::string name = "\0";
        char gender = '\0';
        short int year = 0;
        User_Data(
        std::string& Name,
        char& Gender,
        int& Year
        ) : name(Name), gender(Gender), year(Year){}
        friend std::ostream& operator<<(std::ostream& out, const User_Data& e) {
            out << "Full Name: " << e.name << "\n" << " Gender: " << e.gender << "\n" << " Year born: " << e.year;
            return out; 
        }
};


#endif