#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

// Book Ŭ���� ����
class Book {
public:
    string title;
    string author;

    // ������
    Book(const string& title, const string& author)
        : title(title), author(author) {
    }
};

#endif