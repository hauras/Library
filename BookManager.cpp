#include "BookManager.h"

void BookManager::addBook(const string& title, const string& author) {
    books.push_back(Book(title, author)); // push_back 사용
    cout << "책이 추가되었습니다: " << title << " by " << author << endl;
}

void BookManager::displayAllBooks() const {
    if (books.empty()) {
        cout << "현재 등록된 책이 없습니다." << endl;
        return;
    }

    cout << "현재 도서 목록:" << endl;
    for (size_t i = 0; i < books.size(); i++) {
        cout << "- " << books[i].title << " by " << books[i].author << endl;
    }
}

void BookManager::searchByTitle(const string& title) {
    for (size_t i = 0; i < books.size(); i++) {
        if (books[i].title == title) {
            cout << "찾은 책: " << books[i].title << " by " << books[i].author << endl;
            return;
        }
    }
    cout << "그 책은 존재하지 않습니다." << endl;
}

void BookManager::searchByAuthor(const string& author) {
    for (size_t i = 0; i < books.size(); i++) { // 일반적인 for문 사용
        if (books[i].author == author) {
            cout << "찾은 책: " << books[i].title << " by " << books[i].author << endl;
            return;
        }
    }
    cout << "그 저자의 책은 존재하지 않습니다." << endl;
}