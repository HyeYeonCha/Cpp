#include <iostream>
#include <string>

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
	void Book(string bookName, string authorName, int ISBN, string desc = "default"); //�������Լ��ٽø����
	void ShowBookInfo() const;
};
