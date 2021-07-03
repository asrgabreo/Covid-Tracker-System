
/*
 * Dob.h
 *
 */

#ifndef DOB_H_
#define DOB_H_
class Dob
{
private:
  struct Dob1
  {
    int date, month, year;
    int rem;
  } DOB11[100];

public:
  void enter_date();
  void show_date();
};

#endif /* DOB_H_ */