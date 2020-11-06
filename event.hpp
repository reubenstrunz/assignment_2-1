#pragma once
#include <string>
#include <iostream>
class Event : public date {
public:
std::string description;
std::string get_event();
void set_event(int y, int m, int d, std::string day_description);
Event(int y, int m, int d, std::string day_description);
Event();
~Event();
};
