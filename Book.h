#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

// Book 클래스 정의
class Book {
public:
    string title;
    string author;

    // 생성자
    Book(const string& title, const string& author)
        : title(title), author(author) {
    }
};

#endif