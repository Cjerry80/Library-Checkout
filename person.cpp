#include "person.h"

Person::Person(int cardNo, bool act, string fName, string lName) {
  firstName = fName;
  lastName = lName;
  cardID = cardNo;
  active = act;
    // complete constructor
}

string Person::getFirstName() {
    return fName; // complete
}

string Person::getLastName() {
    return lName; // complete
}

int Person::getId() {
    return cardID; // complete
}

void Person::setActive(bool act) {
  bookactive = act;
} // complete

bool Person::isActive() {
  if (active == true)
    return true;
  else
    return false;
    // complete
}

string Person::fullName() {
   string fullname;
   fullname = firstname + " " + lastname;
    return fullname; // complete
}
