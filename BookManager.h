#include <iostream>
#include <string>
#include <Windows.h>
//#include <hash_map>
#include "Book.h"

using namespace std;
//using namespace stdext;

class BookManager {
private:
	//Book * bookArr[100];
	//hash_map<Book, float> bookArr1;

	//Book * bookArr[100];

	list<Book*> bookArr2;
	list<Book>::iterator iter;

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
};




