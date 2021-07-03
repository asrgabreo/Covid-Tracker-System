/*
 * All.cpp
 *
 */

#include <All.h>
#include <Date.h>
#include <Dob.h>
#include <iostream>
using namespace std;
Date D1;
All A1;
Dob DOB1;
int attempt, count, i, temp, regis, show_count = 0;
void All::tasks()
{
    attempt = 0;
    D1.show_date();
    cout << "\n\n";
    cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
         << "\n\n";
    cout << "\n\t\t\t\t\t\t\t\t**           COVID-19           **"
         << "\n\n";
    cout << "\n\t\t\t\t\t\t\t\t**      BATTLE AND TRACKER      **"
         << "\n\n";
    cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
         << "\n\n";
    cout << "Please  select a task to do...."
         << "\n\n";
    cout << "1. Enter a new patient information ."
         << "\n";
    cout << "2. View detail of existing patient ."
         << "\n";
    cout << "3. View detail about the program ."
         << "\n";
    cout << "4. Exit from the program ."
         << "\n\n";
    //other function remain
    cout << "Enter your task serial :\t";
    cin >> task;
    switch (task)
    {
    case 1:
    {
        A1.enter_patient_info();
        break;
    }
    case 2:
    {
        A1.show_patient_detail();
        break;
    }
    case 3:
    {
        A1.software_detail();
        break;
    }
    case 4:
    {
        system("CLS");
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
             << "\n\n";
        cout << "Thank You for trying this program !!!"
             << "\n";
        cout << " This is the end of program...."
             << "\n";
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
             << "\n\n";
        cout << " Press any key to exit....."
             << "\n\n";
        exit(0);
        break;
    }
    default:
    {
        system("CLS");
        cout << "Invalid task serial ."
             << "\n";
        cout << "Press any key to continue...."
             << "\n";
        system("CLS");
        A1.tasks();
    }
    }
}

void All::enter_patient_info()
{
    system("CLS");
    answer = 'y';
    if (count == 0)
    {
        serial = 1;
    }
    else
    {
        i = serial;
    }
    for (i = serial; answer == 'y' || answer == 'Y'; i++)
    {
        PI[i].reg_no = i;
        temp = serial;
        cout << "\nENTERING PATIENT'S DETAILS AS PER SERIAL NUMBER :\t" << i << "\n";
        cin.get(ch);
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
             << "\n\n";
        cout << "Registration Number :\t" << PI[i].reg_no << "\n";
        cout << "Name of patient :\t";
        cin.getline(PI[i].name, 50);
        cout << "Sex (1-Male 2-Female) :\t";
        cin >> PI[i].sex;
        while (PI[i].sex != 1 && PI[i].sex != 2)
        {
            cout << "Invalid input for sex of patient!!!"
                 << "\n";
            cout << "Sex :\t";
            cin >> PI[i].sex;
        }
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
             << "\n\n";
        cout << "ENTER ADDRESS:-"
             << "\n\n";
        cout << "House number :\t";
        cin >> PI[i].AD1.house;
        while (PI[i].AD1.house <= 0)
        {
            cout << "Invalid input for house number ."
                 << "\n";
            cout << "Again enter the house number :\t";
            cin >> PI[i].AD1.house;
        }
        cin.get(ch);
        cout << "Street :"
             << "\t";
        cin.getline(PI[i].AD1.street, 30);
        cout << "City :"
             << "\t";
        cin.getline(PI[i].AD1.city, 30);
        cout << "State :"
             << "\t";
        cin.getline(PI[i].AD1.state, 30);
        cout << "Country :"
             << "\t";
        cin.getline(PI[i].AD1.country, 30);
        DOB1.enter_date();
        //to calculate age
        cin.get(ch);
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
             << "\n\n";
        cout << "Martial status(1-Married,2-Not Married ):"
             << "\t";
        if (count != 0)
        {
            cout << "\n";
        }
        cin >> PI[i].martial_status;
        while (PI[i].martial_status < 1 || PI[i].martial_status > 2)
        {
            cout << "Invalid input for martial status ."
                 << "\n";
            cout << "Enter a valid martial status :"
                 << "\t";
            cin >> PI[i].martial_status;
        }
        cin.get(ch);
        if (count != 0)
        {
            cout << "\n";
        }
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
             << "\n\n";
        cout << "Blood group :\n1. A+\n2. A-\n3. B+\n4. B-\n5. AB+\n6. AB-\n7. O+\n8. O-\n";
        cout << "Enter :"
             << "\t";
        cin >> PI[i].bld_group;
        switch (PI[i].bld_group)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        {
            break;
        }
        default:
        {
            while (PI[i].bld_group != 1 && PI[i].bld_group != 2 && PI[i].bld_group != 3 && PI[i].bld_group != 4 && PI[i].bld_group != 5 && PI[i].bld_group != 6 && PI[i].bld_group != 7 && PI[i].bld_group != 8)
            {
                cout << "Invalid input !"
                     << "\n";
                cout << "Blood Group :"
                     << "\t";
                cin >> PI[i].bld_group;
            }
            break;
        }
        }
        cin.get(ch);
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
             << "\n\n";
        cout << "Enter the patient's fever temperature in celcius :\t";
        cin >> PI[i].temp;
        cout << "Enter 'y' if the patient have cold also :\t";
        cin >> PI[i].cold;
        if ((PI[i].temp >= 100) && (PI[i].cold == 'y' || PI[i].cold == 'Y'))
        {
            cout << " We have to check further symptoms, related to COVID-19 Disease\n";
            symp_info();
            check_symp();
        }
        else
        {
            cout << "Do normal check up\n";
        }
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
             << "\n\n";
        cout << "Want to enter information for another patient ? for yes enter 'Y' "
             << "\n";
        cin >> answer;
        count++;
        serial++;
    }
    system("CLS");
    A1.tasks();
}

void All::show_patient_detail()
{
    do
    {
        system("CLS");
        cout << "Enter registration number :"
             << "\n";
        cin >> regis;
        cin.get(ch);
        show_count++;
        if (regis > 0 && regis < serial)
        {
            cout << "\nINFORMATION FOR PATIENT REGISTRATION NUMBER " << regis << "\n";
            cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
                 << "\n\n";
            cout << "Name           : " << PI[regis].name << "\n";
            cout << "Sex            : ";
            if (PI[regis].sex == 1)
            {
                cout << "Male "
                     << "\n";
            }
            if (PI[regis].sex == 2)
            {
                cout << "Female "
                     << "\n";
            }
            cout << "Blood Group    : ";
            switch (PI[regis].bld_group)
            {
            case 1:
            {
                cout << "A+\n";
                break;
            }
            case 2:
            {
                cout << "A-\n";
                break;
            }
            case 3:
            {
                cout << "B+\n";
                break;
            }
            case 4:
            {
                cout << "B-\n";
                break;
            }
            case 5:
            {
                cout << "AB+\n";
                break;
            }
            case 6:
            {
                cout << "AB-\n";
                break;
            }
            case 7:
            {
                cout << "O+\n";
                break;
            }
            case 8:
            {
                cout << "O-\n";
                break;
            }
            }
            cout << "Date of birth  : ";
            DOB1.show_date();
            cout << endl;
            cout << "Martial Status : ";
            if (PI[i].martial_status == 1)
            {
                cout << "Married "
                     << "\n";
            }
            else
            {
                cout << "Not married "
                     << "\n";
            }
            cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
                 << "\n\n";
            cout << "\nADDRESS:-" << endl;
            cout << "House no.      : " << PI[regis].AD1.house << endl;
            cout << "Street         : " << PI[regis].AD1.street << endl;
            cout << "City           : " << PI[regis].AD1.city << endl;
            cout << "State          : " << PI[regis].AD1.state << endl;
            cout << "Country        : " << PI[regis].AD1.country << endl;
            cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
                 << "\n\n";
            cout << "Temperature in celcius :\t" << PI[regis].temp << endl;
            cout << "Have Cold :\t" << PI[regis].cold << endl;
            if ((PI[regis].temp >= 100) && (PI[regis].cold == 'y' || PI[regis].cold == 'Y'))
            {
                check_symp();
            }
            else
            {
                cout << "Normal check up\n";
            }
        }
        else
        {
            if (regis == 1)
            {
                cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
                     << "\n\n";
                cout << "Database is empty !!!"
                     << "\n";
                cout << "Press any key to exit to main task menu..."
                     << "\n";

                system("CLS");
                A1.tasks();
            }
            attempt++;
            if (attempt == 3)
            {
                cout << "You have entered wrong registration number 3 times ."
                     << "\n\n";
                cout << "Access Denied!!! "
                     << "\n";
                cout << "Please try again later. "
                     << "\n";
                cout << "Press any key to exit to main task menu..."
                     << "\n";

                system("CLS");
                A1.tasks();
            }

            cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
                 << "\n\n";
            cout << "Sorry, the registration number is invalid ."
                 << "\n";
            cout << "Press any key to continue...."
                 << "\n";

            A1.show_patient_detail();
        }
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
             << "\n\n";
        cout << "Want to see information of another patient :for yes enter 'Y' "
             << "\n";
        cin >> answer1;
    } while (answer1 == 'y' || answer1 == 'Y');
    system("CLS");
    A1.tasks();
}

void All::software_detail()
{
    system("CLS");
    cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
         << "\n\n";
    cout << "\n\t\t\t\t\t\t\t\t**       SOFTWARE DETAILS       **"
         << "\n\n";
    cout << "\n\t\t\t\t\t\t\t\t**  COVID-19(BATTLE & TRACKER)  **"
         << "\n\n";
    cout << " Programming Language     : C++ "
         << "\n";
    cout << " Aim                      : Simulation of the software used in Hospitals,railways etc"
         << "\n";
    cout << " Hope you like it..."
         << "\n";
    cout << " Thank You. "
         << "\n";
    cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
         << "\n\n";
    cout << "Press any key to return to the main task menu......."
         << "\n";
    A1.tasks();
}
