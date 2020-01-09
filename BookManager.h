#include <iostream>
#include <string>
#include <Windows.h>
#include "Book.h"

using namespace std;

class BookManager {
private:
	Book * bookArr[100];
	int arrNum = 0;

public:
	void ShowMenu();
	void FindBook();
	void FindBookWithBookName();
	void FindBookWithISBN();
	void AddBook();
	void RemoveBook();
	void RemoveBookWithBookName();
	void RemoveBookWithISBN();
	void ShowAllBook();
	int Exit();
};




