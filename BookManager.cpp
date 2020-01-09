#include "BookManager.h"

void BookManager::ShowMenu() {

	int i;
	cout << "-------도서 관리 프로그램입니다.-------" << endl
		<< "1. 도서 검색" << endl
		<< "2. 도서 입력" << endl
		<< "3. 도서 삭제" << endl
		<< "4. 모든 도서 출력" << endl
		<< "5. 프로그램 종료" << endl;

	cin >> i;

	switch (i)
	{
	case 1: 
		BookManager::FindBook();
		break;

	case 2:
		BookManager::AddBook();
		break;

	case 3:
		BookManager::RemoveBook();
		break;

	case 4:
		BookManager::ShowAllBook();
		break;
		
	case 5:
		BookManager::Exit();
		break;
		
	}
}

void BookManager::FindBook() {
	cout << "1. 도서명으로 검색" << endl
		<< "2. ISBN으로 검색" << endl;
	int i;
	cin >> i;

	if (1)
	{
		BookManager::FindBookWithBookName();
	}
	else {
		BookManager::FindBookWithISBN();
	}
}

void BookManager::FindBookWithBookName() {
	string name;
	cout << "검색할 도서의 도서명을 입력하세요." << endl << endl;
	getchar(); 
	getline(cin, name);
	//cout << name;
	//OutputDebugString(name);

	if (arrNum == 0) {
		cout << endl << "검색할 도서목록이 존재하지 않습니다." << endl << "도서를 추가해주세요." << endl << endl;
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
	BookManager::ShowMenu();
}

void BookManager::FindBookWithISBN() {

	int ISBN;
	cout << "검색할 도서의 ISBN을 입력하세요." << endl << endl;
	getchar();
	cin >> ISBN;

	if (arrNum == 0) {
		cout << endl << "검색할 도서목록이 존재하지 않습니다." << endl << "도서를 추가해주세요." << endl << endl;
	}
	else {

		for (int i = 0; i < arrNum; i++)
		{
			if (bookArr[i]->GetBookISBN() == ISBN)
			{
				bookArr[i]->ShowBookInfo();
				break;
			}
		}
		cout << "목록에 일치하는 도서가 없습니다. " << endl << endl;
	}
	BookManager::ShowMenu();
}

void BookManager::AddBook() {
	string bookName;
	string authorName;
	int ISBN;
	string desc;

	cout << "도서를 입력합니다. " << endl << "도서명, 저자명, ISBN, 책설명을 입력해주세요." << endl << endl;
	getchar();
	cout << "도서명 : "; getline(cin, bookName);
	cout << "저자명 : "; cin >> authorName;
	cout << "ISBN : "; cin >> ISBN;
	getchar();
	cout << "책설명 : "; getline(cin, desc);

	bookArr[arrNum] = new Book(bookName, authorName, ISBN, desc); // 생성자함수에 초기화하는 형태로 수정하기
	bookArr[arrNum]->ShowBookInfo();
	arrNum++;
	cout << "입력이 완료되었습니다." << endl << endl;
	BookManager::ShowMenu();
}

void BookManager::RemoveBook() {
	cout << "1. 도서명으로 검색하여 삭제" << endl
		<< "2. ISBN으로 검색하여 삭제" << endl;
	int i;
	cin >> i;

	if (1)
	{
		BookManager::RemoveBookWithBookName();
	}
	else {
		BookManager::RemoveBookWithISBN();
	}
}

void BookManager::RemoveBookWithBookName() {
	string name;
	cout << "삭제할 도서명을 입력하세요." << endl << endl;
	getchar();
	getline(cin, name);

	if (arrNum == 0) {
		cout << endl << "삭제할 도서목록이 존재하지 않습니다." << endl << "도서를 추가해주세요." << endl << endl;
	}
	else {

		for (int i = 0; i < arrNum; i++)
		{
			if (bookArr[i]->GetBookName() == name) {

				bookArr[i]->ShowBookInfo();//일단은 검색과 똑같이
				break;
			}
		}
		cout << "목록에 일치하는 도서가 없습니다. " << endl << endl;
	}
	BookManager::ShowMenu();
}

void BookManager::RemoveBookWithISBN() {
	int ISBN;
	cout << "삭제할 도서의 ISBN을 입력하세요." << endl << endl;
	getchar();
	cin >> ISBN;

	if (arrNum == 0) {
		cout << endl << "삭제할 도서목록이 존재하지 않습니다." << endl << "도서를 추가해주세요." << endl << endl;
	}
	else {

		for (int i = 0; i < arrNum; i++)
		{
			if (bookArr[i]->GetBookISBN() == ISBN)
			{
				bookArr[i]->ShowBookInfo(); //일단은 검색과 똑같이
				break;
			}
		}
		cout << "목록에 일치하는 도서가 없습니다. " << endl << endl;
	}
	BookManager::ShowMenu();
}

void BookManager::ShowAllBook() {
	for (int i = 0; i < arrNum; i++)
	{
		bookArr[i]->ShowBookInfo();
	}
}

int BookManager::Exit() {
	cout << "프로그램 종료 ... " << endl << endl;
	return 0;
}

