#ifndef BOOKMANAGER_H
#define BOOKMANAGER_H

#include <vector>
#include <string>
#include <iostream>
#include "Book.h" 

using namespace std;

class BookManager {
private:
    vector<Book> books;

public:
    void addBook(const string& title, const string& author); // å �߰�
       
    void displayAllBooks() const; // å ����
        
    void searchByTitle(const string& title); // ���� �˻�
        
    void searchByAuthor(const string& author); // ���� �˻�
};


#endif