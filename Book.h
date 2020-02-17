#include <iostream>
#include <string>
#include <type_traits>
#include <iterator>
#include <list>

#pragma execution_character_set("utf-8")

using namespace std;
const int NAME_LEN = 100;

struct Book {
	int ISBN;
	char* bookName;
	string authorName;
	string desc;

	Book(char* bookName, string authorName, int ISBN, string desc)
	{
		this->ISBN = ISBN;
		this->bookName = bookName;
		this->authorName = authorName;
		this->desc = desc;
	}

	// �� �����ڸ� ����  
	bool operator== (const Book& ref) {
		return (this->bookName == ref.bookName);
	}

	/*bool operator== (const Book& ref) {
		return (this->ISBN == ref.ISBN);
	}*/

public: 
	void ShowInfo() {
		cout << "������ : " << bookName << " | ���ڸ� : " << authorName << " | ISBN : " << ISBN << " | å���� : " << desc << endl;
};

	~Book() {};

};
 
template <typename T>
inline typename list<T>::iterator findImpl(list<T>& itemList, T item, true_type) {
	for (auto it = itemList.begin(); it != itemList.end(); ++it) {
		T current = *it;
		if (*current == *item)
			return it;
	}
	return itemList.end();
}

template<typename T>
typename list<T>::iterator find(list<T>& itemList, T item)
{
	// �Լ� �����ε��� �̿��ؼ� Ÿ�Կ� �´� �񱳰� �����ϰ� �� Ÿ�Ժ񱳿� �� �� ���� �ӵ��� ���� line ���
	auto it = findImpl(itemList, item, is_pointer<T>());
	if (it == itemList.end()) {
		cout << "ã�� ����� ���������ʽ��ϴ�." << endl;
	}
	return it;
}


//class Book {
//private:
//	int ISBN;
//	char* bookName;
//	string authorName;
//	string desc;
//
//public:
//	Book(char* bookName, string authorName, int ISBN, string desc = "default");
//	Book(const Book & ref);
//
//	//string GetBookName() const;
//	int GetBookISBN() const;
//	void ShowBookInfo() const;
//	~Book();
//};
