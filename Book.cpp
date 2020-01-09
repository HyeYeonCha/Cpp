#include "Book.h"

string Book::GetBookName() const {
	return bookName;
}

int Book::GetBookISBN() const {
	return ISBN;
}

void Book::Book(string bookName, string authorName, int ISBN, string desc) { // ������ �Լ��� �����ϱ� 
	this->bookName = bookName;
	this->authorName = authorName;
	this->ISBN = ISBN;
	this->desc = desc;
}

void Book::ShowBookInfo() const {
	cout << bookName << " | " << authorName << " | " << ISBN << " | " << desc << endl << endl;
}
