#pragma once
#include <string>
#include <iostream>

class date {
  public:
  int year;
  int month;
  int day; // day of month
  void set_date(int y, int m, int d);
  int get_year();
  int get_month();
  int get_day();
  date(int y, int m, int d); // convenience constructor
  date(); //default constructor
  ~date();

  // getters and setters should be here

  // methods we are required to implement
  int get_date_number();

};
