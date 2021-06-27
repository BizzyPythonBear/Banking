#ifndef MYSTUFF_H_INCLUDED // !MYSTUFF_H_INCLUDED
#define MTSTUFF_H_INCLUDED

using namespace std;

extern string name;
extern int year;
extern char gender;
extern int age;
extern char response;
extern int timescompleted;

extern ofstream outfile;
extern ifstream infile;

void mainMenu();
void askInfo();
void sendUserInfo();
void responseCheck();

#endif