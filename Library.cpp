#include <iostream>
#include <vector>
#include <string>
#include "Book.h"
#include "BookManager.h"
#include "BorrowManager.h"

using namespace std;

// ���� ���α׷�
int main() {
    BookManager manager; // 
    BorrowManager borrowManager;

    while (true) {
        cout << "\n������ ���� ���α׷�" << endl;
        cout << "1. å �߰�" << endl;
        cout << "2. ��� å ���" << endl;
        cout << "3. ���� �˻�" << endl;
        cout << "4. ���� �˻�" << endl;
        cout << "5. �뿩�ϱ�" << endl;
        cout << "6. �ݳ��ϱ�" << endl;
        cout << "7. ��� Ȯ��" << endl;
        cout << "8. ����" << endl;
        cout << "����: ";

        int choice;
        cin >> choice;

        string title, author;
        cin.ignore(); // �Է� ���� �ʱ�ȭ

        if (choice == 1) {
            cout << "å ����: ";
            getline(cin, title);
            cout << "å ����: ";
            getline(cin, author);
            manager.addBook(title, author);
            borrowManager.initializeStock(Book(title, author));
        }
        else if (choice == 2) {
            manager.displayAllBooks();
        }
        else if (choice == 3) {
            cout << "å ���� �Է�: ";
            getline(cin, title);
            manager.searchByTitle(title);
        }
        else if (choice == 4) {
            cout << "å ���� �Է�: ";
            getline(cin, author);
            manager.searchByAuthor(author);
        }
        else if (choice == 5) {
            cout << "�뿩�� å ���� �Է�: ";
            getline(cin, title);
            borrowManager.borrowBook(title);
        }
        else if (choice == 6) {
            cout << "�ݳ��� å ���� �Է�: ";
            cin.clear(); 
            getline(cin, title);
            borrowManager.returnBook(title);
        }
        else if (choice == 7) {
            borrowManager.displayStock();
        }
        else if (choice == 8) {
            cout << "���α׷��� �����մϴ�." << endl;
            return 0;
        }
        else {
            cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
        }
    }
}
