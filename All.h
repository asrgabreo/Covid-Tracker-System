/*
 * All.h
 *
 */

#ifndef ALL_H_
#define ALL_H_

#include <Cvd.h>
class All : public Cvd
{
private:
    struct address
    {
        int house;
        char street[30], city[30], state[30], country[30];
    };
    struct age
    {
        int day, month, year;
    };

protected:
    struct patient_info
    {
        char name[50];
        address AD1; //nested structure implemented
        age A1;      //nested structure inplemented
        int martial_status, reg_no, bld_group, sex, temp;
        char cold;
    } PI[100];
    int task;
    void enter_patient_info();
    void show_patient_detail();

public:
    void software_detail();
    void tasks();
    char answer, answer1, ch;
    int serial;
};

#endif /* ALL_H_ */