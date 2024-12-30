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
    void addBook(const string& title, const string& author); // 책 추가
       
    void displayAllBooks() const; // 책 나열
        
    void searchByTitle(const string& title); // 제목 검색
        
    void searchByAuthor(const string& author); // 저자 검색
};


#endif