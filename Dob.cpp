/*
 * Date.cpp
 *
 */

#include <Dob.h>
#include <iostream>
using namespace std;
int temp,regis,count,rem;
void Dob::enter_date()
{
  cout << "\nDate of birth"
       << "\n";
  cout << "Year  :\t";
  cin >> DOB11[temp].year;
  if (DOB11[temp].year <= 0 || DOB11[temp].year > 10000)
  {
    do
    {
      cout << "Invalid input for year !"
           << "\n";
      cout << "Please enter the year correctly :"
           << "\t";
      cin >> DOB11[temp].year;
    } while (DOB11[temp].year < 0 || DOB11[temp].year > 10000);
  }
  cout << "Month :\t";
  cin >> DOB11[temp].month;
  if (DOB11[temp].month <= 0 || DOB11[temp].month > 12)
  {
    do
    {
      cout << "Invalid input for month !"
           << "\n";
      cout << "Again enter the month :"
           << "\t";
      if (count != 0)
      {
        cout << "\n";
      }
      cin >> DOB11[temp].month;
    } while (DOB11[temp].month < 0 || DOB11[temp].month > 12);
  }
  cout << "Date  :\t";
  switch (DOB11[temp].month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
  {
    cin >> DOB11[temp].date;
    while (DOB11[temp].date < 1 || DOB11[temp].date > 31)
    {
      cout << "Invalid date !"
           << "\n";
      cout << "Again enter the date :"
           << "\t";
      cin >> DOB11[temp].date;
    }
    break;
  }
  case 2:
  {
    cin >> DOB11[temp].date;
    if (DOB11[temp].year % 4 == 0)
    {
      while (DOB11[temp].date < 0 || DOB11[temp].date > 29)
      //for leap year
      {
        cout << "Invalid date !"
             << "\n";
        cout << "Again enter the date :"
             << "\t";
        cin >> DOB11[temp].date;
      }
    }
    else
    {
      while (DOB11[temp].date < 0 || DOB11[temp].date > 28)
      //for non-leap year
      {
        cout << "Invalid date !"
             << "\n";
        cout << "Again enter the date :"
             << "\t";
        cin >> DOB11[temp].date;
      }
    }
    break;
  }
  default:
  {
    cin >> DOB11[temp].date;
    while (DOB11[temp].date < 1 || DOB11[temp].date > 30)
    {
      cout << "Invalid date !"
           << "\n";
      cout << "Again enter the date :"
           << "\t";
      cin >> DOB11[temp].date;
    }
    break;
  }
  } //end of switch
}

void Dob::show_date()
{
  cout << DOB11[regis].date;
  rem = DOB11[regis].date % 10;
  switch (DOB11[regis].date)
  {
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
  case 16:
  case 17:
  case 18:
  case 19:
  case 20:
  {
    cout << "th ";
    goto over;
  }
  }
  switch (rem)
  {
  case 1:
  {
    cout << "st ";
    break;
  }
  case 2:
  {
    cout << "nd ";
    break;
  }
  case 3:
  {
    cout << "rd ";
    break;
  }
  default:
  {
    cout << "th ";
    break;
  }
  }
over:
  switch (DOB11[regis].month)
  {
  case 1:
  {
    cout << "January , ";
    break;
  }
  case 2:
  {
    cout << "February , ";
    break;
  }
  case 3:
  {
    cout << "March , ";
    break;
  }
  case 4:
  {
    cout << "April , ";
    break;
  }
  case 5:
  {
    cout << "May , ";
    break;
  }
  case 6:
  {
    cout << "June , ";
    break;
  }
  case 7:
  {
    cout << "July , ";
    break;
  }
  case 8:
  {
    cout << "August , ";
    break;
  }
  case 9:
  {
    cout << "September , ";
    break;
  }
  case 10:
  {
    cout << "October , ";
    break;
  }
  case 11:
  {
    cout << "November , ";
    break;
  }
  case 12:
  {
    cout << "December , ";
    break;
  }
  }
  cout << DOB11[regis].year << " ";
}