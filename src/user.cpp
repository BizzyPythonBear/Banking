#include "user.h"

void UI::Login() {
  std::vector<std::string> contents(10);
std::fstream file("info");
  std::string buff;
  int I = 0;
 while(file >> buff) {
   if(I == 2 ||I == 4 || I == 7)
    contents.insert(contents.begin(), buff);
    I++;
 }
 while(true)  {
  std::cout << "Full name : ";
  std::cin >> buff;
  if(buff != contents[2])
    continue;
  std::cout << "\nYear of Birth : ";
  std::cin >> buff;
    if(buff != contents[0])
        continue;
  break;
 }
  std::cin.get();
}

void UI::Signin() {
 std::string Name;
 char Gender;
 int Year;
 printf("\t\t\tWelcome! Please input your details below to get started!\n\n\a");
 std::cout << "Full Name: ";
 getline(std::cin, Name);
 std::cout << "\n\nGender: (M / F) ";
 std::cin >> Gender;
 std::cout << "Year of Birth: (yyyy) ";
 std::cin >> Year;
 User_Data data{Name, Gender, Year};
 std::ofstream User_Details("info");
 std::fstream Edit_userInfo("info");
 Edit_userInfo << data;

 for (int i = 0; i < 100; i++)
 {
  std::cout<< " " <<std::endl; //Because clearing the console is different for Win & Linux it would be best to just print space chars on a loop.
 }

}

void UI::Main_UI(){
  std::fstream FilesCheck("info");
    if(!FilesCheck) {
        Signin();
    }
    else {
     Login();
    }
for (int i = 0; i < 100; i++)
 {
  std::cout<< " " <<std::endl; 
 }
std::vector<std::string> contents(10);
std::fstream file("info");
  std::string buff;
  int I = 0;
 while(file >> buff) {
   if(I == 2 ||I == 4 || I == 7)
    contents.insert(contents.begin(), buff);
    I++;
 }
  std::cout << "\tWelcome " << contents[2] << " !" << " What would you like to want me do?\a\n\n\n" << std::endl;
  std::string option;
  std::cin >> option;
}
