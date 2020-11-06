#include <iostream>
#include <stdio.h>
#include "date.hpp"
#include "event.hpp"
using namespace std;
int main() {
  const int maximum_number_of_elements = 20;
  cout << "Enter the events in year month day:description format, one per line. To finish, enter the date 0 0 0." << endl;
  Event events[maximum_number_of_elements];
  int y,m,d;
  char colon;
  std::string day_description;
  int total_entries = 0;
  bool finished_inputting = false;
  while (!finished_inputting) {
    cin >> y >> m >> d >> colon;
    getline(cin, day_description);
    if (m == 0) {
      finished_inputting = true;
    } else {
      events[total_entries].set_event(y, m, d, day_description);
      total_entries++;
    }
  }

   //cout << "Total entries: " << total_entries << endl;

  if (total_entries > 1) {
    for (int beginning_of_array_to_be_sorted = 0; beginning_of_array_to_be_sorted < total_entries; beginning_of_array_to_be_sorted++) {
      int index_of_smallest_element = beginning_of_array_to_be_sorted;
      for (int index_of_item_to_check = beginning_of_array_to_be_sorted +1; index_of_item_to_check < total_entries; index_of_item_to_check++) {
        if (events[index_of_item_to_check].get_date_number() < events[index_of_smallest_element].get_date_number()) {
          index_of_smallest_element = index_of_item_to_check;
        }
      }
      if (index_of_smallest_element != beginning_of_array_to_be_sorted){
        Event t = events[beginning_of_array_to_be_sorted];
        events[beginning_of_array_to_be_sorted] = events[index_of_smallest_element];
        events[index_of_smallest_element] = t;
      }
    }
  }
  int k;
  for (k=0; k < total_entries; k++) {
    cout << events[k].get_year() << " " << events[k].get_month() << " " << events[k].get_day() << " " << events[k].get_event() << endl;
  }

  return 0;

}
