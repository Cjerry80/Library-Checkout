#include "person.h"

Person::Person(int cardNo, bool act, string fName, string lName) {
    cardnumber = 0;
    bookactive = 1;
    firstname = " ";
    lastname = " ";
    // complete constructor
}

string Person::getFirstName() {
    return fName; // complete
}

string Person::getLastName() {
    return lName; // complete
}

int Person::getId() {
    return cardNo; // complete
}

void Person::setActive(bool act) {
  bookactive = act;
} // complete

bool Person::isActive() {
    return true; // complete
}

string Person::fullName() {
   string fullname;
   fullname = firstname + " " + lastname;
    return fullname; // complete
}
