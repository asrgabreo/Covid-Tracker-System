#include <iostream>
#include <stdlib.h>
#include <All.h>
#include <Date.h>
#include <Dob.h>
using namespace std;
int i = 0, rem, count, regis, attempt, temp;
int show_count = 0;
All A1;   //object declared
Date D1;  //object declared
Dob DOB1; //object declared
int main()
{
  count = 0;
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
       << "\n";
  cout << "\n\t\t\t\t\t\t\t\t            Welcome To"
       << "\n\n";
  cout << "\n\t\t\t\t\t\t\t\t**  CORONAVIRUS DISEASE 2019  **"
       << "\n\n";
  cout << "\n\t\t\t\t\t\t\t\t**      BATTLE AND TRACKER    **"
       << "\n\n";
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
       << "\n\n";
  D1.enter_date();
  A1.tasks();
  return 0;
}