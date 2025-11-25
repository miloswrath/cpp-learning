// my first program in C++
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
  string name;
  string team;
  string age_str;
  int age=99;

  cout << "Enter your name: ";
  getline(cin, name);

  cout << "Enter your age: ";
  getline(cin, age_str);
  stringstream(age_str) >> age;

  cout << "What is your favorite basketball team? Enter here: ";
  getline(cin, team);
  
  cout << "Hi name! \n";
  cout << "You are " << age << " years old. \n";
  cout << "I also like " << team << "!\n";

  return 0;
}
