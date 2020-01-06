#include "BookManager.h"

void BookManage::ShowMenu() {

	int i;
	cout << "도서 관리 프로그램입니다." << endl
		<< "1. 도서 검색" << endl
		<< "2. 도서 입력" << endl
		<< "3. 도서 삭제" << endl
		<< "4. 모든 도서 출력" << endl
		<< "5. 프로그램 종료" << endl;

	cin >> i;

	switch (i)
	{
	case 1: 
		cout << "1. 도서명 검색" << endl
			<< "2. ISBN 검색" << endl;
		int i;
		cin >> i;

		if (1)
		{
			string name;
			cout << "도서명을 입력하세요." << endl;
			getline(cin, name);
			BookManage::FindBookWithBookName(name);
			break;
		}
		else {
			int ISBN;
			cout << "ISBN을 입력하세요." << endl;
			cin >> ISBN;
			BookManage::FindBookWithISBN(ISBN);
			break;
		}
		
		
	}
}

void BookManage::FindBookWithBookName(string name) {

	for (int i = 0; i < arrNum; i++)
	{
		if (bookArr[i]->GetBookName() == name) {
		
			bookArr[i]->ShowBookInfo();
			break;
		}
	}

	BookManage::ShowMenu();
	
}

void BookManage::FindBookWithISBN(int ISBN) {
	for (int i = 0; i < arrNum; i++)
	{
		if (bookArr[i]->GetBookISBN() == ISBN)
		{
			bookArr[i]->ShowBookInfo();
			break;
		}
	}

	BookManage::ShowMenu();
}
