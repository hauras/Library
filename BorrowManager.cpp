#include "BorrowManager.h"

void BorrowManager::initializeStock(const Book& book, int quantity)
{
	stock[book.title] += quantity;
	cout << book.title << " ��� �߰�. �� ���: " << stock[book.title] << "��" << endl;
}

void BorrowManager::borrowBook(const string& title) {

    // å�� �����ϴ��� Ȯ��
    if (stock.find(title) == stock.end()) {
        cout << "�� å�� �������� �ʽ��ϴ�." << endl;
        return;
    }

    // ��� �ִ� ��� �뿩 ó��
    if (stock[title] > 0) {
        stock[title]--;
        cout << "�뿩 �Ϸ�." << endl;
    }

    else {
        cout << "��� �����ϴ�." << endl;
    }
}

void BorrowManager::returnBook(const string& title) {

    if (stock.find(title) == stock.end()) {
        cout << "�������� �ʴ� å�Դϴ�." << endl;
        return;
    }

    stock[title]++; // ��� �� ���� 
    cout << "�ݳ� �Ϸ�" << endl;
}

void BorrowManager::displayStock() const {
    cout << "���� ��� ����: " << endl;

    for (const auto& item : stock) { 
        cout << item.first << ": " << item.second << "��" << endl;
    }
}