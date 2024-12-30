#include "BorrowManager.h"

void BorrowManager::initializeStock(const Book& book, int quantity)
{
	stock[book.title] += quantity;
	cout << book.title << " 재고 추가. 총 재고: " << stock[book.title] << "권" << endl;
}

void BorrowManager::borrowBook(const string& title) {

    // 책이 존재하는지 확인
    if (stock.find(title) == stock.end()) {
        cout << "그 책은 존재하지 않습니다." << endl;
        return;
    }

    // 재고가 있는 경우 대여 처리
    if (stock[title] > 0) {
        stock[title]--;
        cout << "대여 완료." << endl;
    }

    else {
        cout << "재고가 없습니다." << endl;
    }
}

void BorrowManager::returnBook(const string& title) {

    if (stock.find(title) == stock.end()) {
        cout << "존재하지 않는 책입니다." << endl;
        return;
    }

    stock[title]++; // 재고 수 증가 
    cout << "반납 완료" << endl;
}

void BorrowManager::displayStock() const {
    cout << "현재 재고 상태: " << endl;

    for (const auto& item : stock) { 
        cout << item.first << ": " << item.second << "권" << endl;
    }
}