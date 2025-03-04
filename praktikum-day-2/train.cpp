#include <bits/stdc++.h>
using namespace std;

struct books{
    string title;
    string author;
    int year;

    books *next;
};

void insertFirst(books *&head, string title, string author, int year){
    books *newBook = new books;
    newBook-> title = title;
    newBook-> author = author;
    newBook-> year = year;
    newBook-> next = head;
    head = newBook;
}

void insertBook(books *&head, string title, string author, int year){
    books *newBook = new books;
    newBook-> title = title;
    newBook-> author = author;
    newBook-> year = year;
    newBook-> next = nullptr;

    if(head == nullptr){
        head = newBook;
    } else {
        books *temp =  head;
        while(temp->next != nullptr){
            temp = temp-> next;
        }
        temp-> next = newBook;
    }
}

void displayBooks (books *head) {
    books *temp = head;
    while(temp != nullptr){
        cout << "Title: " << temp->title << endl;
        cout << "Author: " << temp->author << endl;
        cout << "Year: " << temp->year << endl << endl;
        temp = temp->next;  

    }
}

void deleteFirst (books *&head){
    books *temp = head;
    head = head -> next;
    delete temp;
}
int main(){
    books *head = nullptr;
    insertBook(head, "Mas-Mas Biasa", "REtropus", 2039);
    insertBook(head, "Love is Loser", "Greenday", 2020);

    displayBooks(head);

    cout << "NEW BOOKKK IS COMINGGG!!!!" << endl;
    cout << "pls press your key to show all new books" << endl;
    cout << "-----------------------------" << endl;

    insertBook(head, "LOlolo", "Gabahayata", 202020);
    displayBooks(head);
    
    cout << "OH SHITTTT I FORGOT ABOUT SOMETHING!!!" << endl;
    cout << "pls press your key to show the bookset" << endl;
    cout << "-----------------------------" << endl;

    insertFirst(head, "Nonono", "Gagaga", 2019);
    displayBooks(head);

    cout << "OH NO, THAT IS NOT THE BOOK I WANT!!!" << endl;
    cout << "pls press your key to show the bookset" << endl;
    cout << "-----------------------------" << endl;

    deleteFirst(head);
    displayBooks(head);
}