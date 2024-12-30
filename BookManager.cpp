#include "BookManager.h"

void BookManager::addBook(const string& title, const string& author) {
    books.push_back(Book(title, author)); // push_back ���
    cout << "å�� �߰��Ǿ����ϴ�: " << title << " by " << author << endl;
}

void BookManager::displayAllBooks() const {
    if (books.empty()) {
        cout << "���� ��ϵ� å�� �����ϴ�." << endl;
        return;
    }

    cout << "���� ���� ���:" << endl;
    for (size_t i = 0; i < books.size(); i++) {
        cout << "- " << books[i].title << " by " << books[i].author << endl;
    }
}

void BookManager::searchByTitle(const string& title) {
    for (size_t i = 0; i < books.size(); i++) {
        if (books[i].title == title) {
            cout << "ã�� å: " << books[i].title << " by " << books[i].author << endl;
            return;
        }
    }
    cout << "�� å�� �������� �ʽ��ϴ�." << endl;
}

void BookManager::searchByAuthor(const string& author) {
    for (size_t i = 0; i < books.size(); i++) { // �Ϲ����� for�� ���
        if (books[i].author == author) {
            cout << "ã�� å: " << books[i].title << " by " << books[i].author << endl;
            return;
        }
    }
    cout << "�� ������ å�� �������� �ʽ��ϴ�." << endl;
}