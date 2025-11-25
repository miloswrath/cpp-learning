// Trip planner project for the plane to demonstrate basic C++ concepts
#include <iostream>
#include <string>
#include <sstream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main() 
{
  string number_input;
  int number = 0;

  cout << "Enter the number to start the countdown: ";
  getline(cin, number_input);
  stringstream(number_input) >> number;

  while (number > 0)
    {
      cout << number << endl;
      number--;
      sleep_for(seconds(1));
    }

  cout << "BOOM!!" << endl;
}
