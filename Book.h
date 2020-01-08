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
	void SetBookInfo(string bookName, string authorName, int ISBN, string desc = "default");
	void ShowBookInfo() const;
};
