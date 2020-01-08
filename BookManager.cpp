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
			BookManage::FindBookWithBookName();
			break;
		}
		else {	
			BookManage::FindBookWithISBN();
			break;
		}

	case 2:
		BookManage::AddBook();
		break;

	case 3:
		break;

	case 4:
		break;
		
	case 5:
		BookManage::Exit();
		break;
		
	}
}

void BookManage::FindBookWithBookName() {

	string name;
	cout << "도서명을 입력하세요." << endl << endl;
	cin >> name;
	cout << name;
	//OutputDebugString(name);

	if (arrNum == 0) {
		cout << "검색할 도서목록이 존재하지 않습니다." << endl << "도서를 추가해주세요." << endl << endl;
	}
	else {

		for (int i = 0; i < arrNum; i++)
		{
			if (bookArr[i]->GetBookName() == name) {

				bookArr[i]->ShowBookInfo();
				break;
			}
		}
		cout << "목록에 일치하는 도서가 없습니다. " << endl << endl;
	}
	BookManage::ShowMenu();
	
}

void BookManage::FindBookWithISBN() {

	int ISBN;
	cout << "ISBN을 입력하세요." << endl << endl;
	cin >> ISBN;

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

void BookManage::AddBook() {
	string bookName;
	string authorName;
	int ISBN;
	string desc;

	cout << "도서를 입력합니다. " << endl << "도서명, 저자명, ISBN, 책설명을 입력해주세요." << endl << endl;
	cout << "도서명 : "; getline(cin, bookName);
	cout << "저자명 : "; cin >> authorName;
	cout << "ISBN : "; cin >> ISBN;
	cout << "책설명 : "; getline(cin, desc);

	bookArr[arrNum]->SetBookInfo(bookName, authorName, ISBN, desc);
	arrNum++;
	cout << "입력이 완료되었습니다.";
}

void BookManage::RemoveBookWithBookName() {

}

void BookManage::RemoveBookWithISBN() {

}

void BookManage::ShowAllBook() {

}

int BookManage::Exit() {
	cout << "프로그램 종료 ... " << endl << endl;
	return 0;
}

