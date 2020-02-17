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

	// 비교 연산자를 정의  
	bool operator== (const Book& ref) {
		return (this->bookName == ref.bookName);
	}

	/*bool operator== (const Book& ref) {
		return (this->ISBN == ref.ISBN);
	}*/

public: 
	void ShowInfo() {
		cout << "도서명 : " << bookName << " | 저자명 : " << authorName << " | ISBN : " << ISBN << " | 책설명 : " << desc << endl;
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
	// 함수 오버로딩을 이용해서 타입에 맞는 비교가 가능하게 함 타입비교와 좀 더 빠른 속도를 위해 line 사용
	auto it = findImpl(itemList, item, is_pointer<T>());
	if (it == itemList.end()) {
		cout << "찾는 결과가 존재하지않습니다." << endl;
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
