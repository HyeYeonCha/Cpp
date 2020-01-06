#include <iostream>
using namespace std;

class Book {
private:
	int ISBN;
	string bookName;
	string authorName;
	string desc;

public:
	string GetBookName() const;
	int GetBookISBN() const;
	void ShowBookInfo() const;
};

class BookManage {
private:
	Book * bookArr[100];
	int arrNum = 0;

public:
	void ShowMenu();
	void FindBookWithBookName(string name);
	void FindBookWithISBN(int ISBN);
	void AddBook(string bookName, string authorName, int ISBN, string desc);
	void RemoveBookWithBookName(string name);
	void RemoveBookWithISBN(int ISBN);
	void ShowAllBook();

};




