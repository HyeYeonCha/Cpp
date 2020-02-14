#include <iostream>
#include <string>

using namespace std;
const int NAME_LEN = 30;

class Book {
private:
	int ISBN;
	char* bookName;
	string authorName;
	string desc;

public:
	Book(char* bookName, string authorName, int ISBN, string desc = "default");
	Book(const Book & ref);

	//string GetBookName() const;
	int GetBookISBN() const;
	void ShowBookInfo() const;
	~Book();
};
