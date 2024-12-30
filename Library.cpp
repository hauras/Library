#include <iostream>
#include <vector>
#include <string>
#include "Book.h"
#include "BookManager.h"
#include "BorrowManager.h"

using namespace std;

// 메인 프로그램
int main() {
    BookManager manager; // 
    BorrowManager borrowManager;

    while (true) {
        cout << "\n도서관 관리 프로그램" << endl;
        cout << "1. 책 추가" << endl;
        cout << "2. 모든 책 출력" << endl;
        cout << "3. 제목 검색" << endl;
        cout << "4. 저자 검색" << endl;
        cout << "5. 대여하기" << endl;
        cout << "6. 반납하기" << endl;
        cout << "7. 재고 확인" << endl;
        cout << "8. 종료" << endl;
        cout << "선택: ";

        int choice;
        cin >> choice;

        string title, author;
        cin.ignore(); // 입력 버퍼 초기화

        if (choice == 1) {
            cout << "책 제목: ";
            getline(cin, title);
            cout << "책 저자: ";
            getline(cin, author);
            manager.addBook(title, author);
            borrowManager.initializeStock(Book(title, author));
        }
        else if (choice == 2) {
            manager.displayAllBooks();
        }
        else if (choice == 3) {
            cout << "책 제목 입력: ";
            getline(cin, title);
            manager.searchByTitle(title);
        }
        else if (choice == 4) {
            cout << "책 저자 입력: ";
            getline(cin, author);
            manager.searchByAuthor(author);
        }
        else if (choice == 5) {
            cout << "대여할 책 제목 입력: ";
            getline(cin, title);
            borrowManager.borrowBook(title);
        }
        else if (choice == 6) {
            cout << "반납할 책 제목 입력: ";
            cin.clear(); 
            getline(cin, title);
            borrowManager.returnBook(title);
        }
        else if (choice == 7) {
            borrowManager.displayStock();
        }
        else if (choice == 8) {
            cout << "프로그램을 종료합니다." << endl;
            return 0;
        }
        else {
            cout << "잘못된 입력입니다. 다시 시도하세요." << endl;
        }
    }
}
