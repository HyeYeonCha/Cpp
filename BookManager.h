#include <iostream>
#include <string>
#include <Windows.h>
#include "Book.h"

using namespace std;

class BookManage {
private:
	Book * bookArr[100];
	int arrNum = 0;

public:
	void ShowMenu();
	void FindBookWithBookName();
	void FindBookWithISBN();
	void AddBook();
	void RemoveBookWithBookName();
	void RemoveBookWithISBN();
	void ShowAllBook();
	int Exit();
};




