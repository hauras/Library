#ifndef BORROWMANAGER_H
#define BORROWMANAGER_H

#include <vector>
#include <string>
#include <iostream>
#include "Book.h" 
#include <unordered_map>

class BorrowManager {
private:
    unordered_map<string, int> stock;

public:
    // 책 재고 확인, 기본적으로 책이 추가되면 재고는 3으로 설정
    void initializeStock(const Book& book, int quantity = 3);

    void borrowBook(const string& title);

    void returnBook(const string& title);

    void displayStock() const;

};
#endif