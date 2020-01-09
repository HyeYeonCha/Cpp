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
	void Book(string bookName, string authorName, int ISBN, string desc = "default"); //생성자함수다시만들기
	void ShowBookInfo() const;
};
