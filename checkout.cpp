// Cheng No Chang
// Section 3
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "person.cpp"
#include "book.cpp"

using namespace std;
void printmenu();


bool bookcheckout(vector<Book*> & myBooks, vector<Person*> & myCardholders);
void readBooks(vector<Book*> & myBooks);

int readPersons(vector<Person*> & myCardholders);


void readRentals(vector<Book*> & myBooks, vector<Person *> myCardholders);
void openCard(vector<Person*> & myCardholders, int nextID);
Book * searchBook(vector<Book*> myBooks, int id);


void printMenu() {
    cout << "----------Library Book Rental System----------" << endl;
    cout << "1.  Book checkout" << endl;
    cout << "2.  Book return" << endl;
    cout << "3.  View all available books" << endl;
    cout << "4.  View all outstanding rentals" << endl;
    cout << "5.  View outstanding rentals for a cardholder" << endl;
    cout << "6.  Open new library card" << endl;
    cout << "7.  Close library card" << endl;
    cout << "8.  Exit system" << endl;
    cout << "Please enter a choice: ";
}

bool bookcheckout(vector<Book*> & myBooks, vector<Person*> & myCardholders){
  int cardID;
  cout << "Please enter the card ID: ";
  cin >> cardID;
  validid(cardID, myCardholders);
  if (validid ==  ){

  }
}

void readBooks(vector<Book*> & myBooks) {
ifstream infile;
string random;
int bookid;
string booktitle;
string author;
string genre;
infile.open("books.txt")
while(infile >> bookid){ // Reads the first number of the file and since it has to read the first number, it will only execute if there is a numner. THe last line doesn't have a number so the while loop wont execute and prevents duplicates of the last line.
  getline(infile, random); //Placeholder to get to next line, reads the "whitespace"
  getline(infile, booktitle);
  getline(infile, author);
  getline(infile, genre);
  getline(infile, random);
  myBooks.push_back(new Book (bookid, booktitle, author, genre)) // Same as Book * newptr. newptr = new Book;
}
infile.close();

}



int readPersons(vector<Person*> & myCardholders) {
ifstream infile;
int cardid;
bool isactive;
string fname;
string lname;
string random;
infile.open("persons.txt")
while(infile >> cardid){
  infile >> isactive >> fname >> lname;
  getline(infile, random);
  myCardholders.push_back(new Person (cardid, isactive, fname, lname));
}
infile.close();
    return 0;
}



void readRentals(vector<Book*> & myBooks, vector<Person *> myCardholders) {
infile ifstream;
int bookid;
int cardid;
infile.open("rentals.txt");
while(infile >> bookid){
  infile >> cardid;
}

infile.close();

}

bool validbook(int bookid, vector<Book*> & myBooks){
  for (int i = o; i < myBooks.size(); i++){
    if ( bookid == (*myBooks).at(i).getId())
      return true;
    else
      cout << "Book ID not valid" << endl;
  }

}

Person * validcard(int cardID, vector<Person*> & myCardholders ){
   for (int i = o; i < myCardholders.size(); i++){
     if (cardID == (*myCardholders.at(i).getId())){
        return validcard;
       }
     }
     return nullptr; // Didn't find card id since
}


void openCard(vector<Person*> & myCardholders, int nextID) {

}

Book * searchBook(vector<Book*> myBooks, int id) {
    return nullptr;
}


int main()
{
    vector<Book*> books;
    vector<Person*> cardholders;

    int choice;
    do
    {

        printMenu();
        cin >> choice;
        switch(choice)
        {
            case 1:
              bookcheckout(myCardholders, myBooks);
                // Book checkout
                break;

            case 2:
                // Book return
                break;

            case 3:
                // View all available books
                break;

            case 4:
                // View all outstanding rentals
                break;

            case 5:
                // View outstanding rentals for a cardholder
                break;

            case 6:
                // Open new library card
                break;

            case 7:
                // Close library card
                break;

            case 8:
                // Must update records in files here before exiting the program
                break;

            default:
                cout << "Invalid entry" << endl;
                break;
        }
        cout << endl;
   } while(choice != 8);
      return 0;
}
