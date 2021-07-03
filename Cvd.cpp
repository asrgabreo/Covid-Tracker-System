/*
 * Cvd.cpp
 *
 */

#include <Cvd.h>
#include <iostream>
using namespace std;
Cvd::Cvd()
{
    this->dcough = this->tired = this->dbreath = 'N';
}

void Cvd::symp_info()
{
    cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
         << "\n\n";
    cout << "Enter 'Y' for yes and 'N' for no,for following symptoms\n";
    cout << "1. For dry cough :\t";
    cin >> dcough;
    cout << "2. For tiredness :\t";
    cin >> tired;
    cout << "3. For difficult breathing :\t";
    cin >> dbreath;
    cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
         << "\n\n";
}
void Cvd::check_symp()
{
    cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"
         << "\n\n";
    cout << "\nReport of Patient's Symptoms\n";
    cout << "1. For dry cough            :\t" << dcough << endl;
    cout << "2. For tiredness            :\t" << tired << endl;
    cout << "3. For difficult breathing  :\t" << dbreath << endl;
    if ((dcough == 'Y' || dcough == 'y') && (tired == 'Y' || tired == 'y') && (dbreath == 'Y' || dbreath == 'y'))
    {
        cout << "Take patient's covid-19 test and keep in isolation immediately\n";
    }
    else
    {
        cout << "No need of covid-19 test ,do normal check up\n";
    }
}