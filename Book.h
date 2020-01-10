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
	Book(string bookName, string authorName, int ISBN, string desc = "default");
	string GetBookName() const;
	int GetBookISBN() const;
	void ShowBookInfo() const;
};
