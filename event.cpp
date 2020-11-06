#include <iostream>
#include <string>
#include "date.hpp"
#include "event.hpp"
using namespace std;

Event::Event(int y, int m, int d, string day_description) : date(y , m ,d) {
  set_event( y, m, d, day_description);
}

string Event::get_event() {
  return description;
}

void Event::set_event(int y, int m, int d, string day_description) {
year = y;
month = m;
day = d;
description = day_description;
}

Event::Event() {
}

Event::~Event() {
}
