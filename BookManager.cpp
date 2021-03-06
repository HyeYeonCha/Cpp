#include "BookManager.h"

void BookManager::ShowMenu() {
	cout << "-------도서 관리 프로그램입니다.-------" << endl
		<< "1. 도서 검색" << endl
		<< "2. 도서 입력" << endl
		<< "3. 도서 삭제" << endl
		<< "4. 모든 도서 출력" << endl
		<< "5. 프로그램 종료" << endl;
}

void BookManager::FindBook() {
	cout << "1. 도서명으로 검색" << endl
		<< "2. ISBN으로 검색" << endl;
	int i;
	cin >> i;

	if (i == 1)
	{
		BookManager::FindBookWithBookName();
	}
	else if (i == 2) {
		BookManager::FindBookWithISBN();
	}
}

void BookManager::FindBookWithBookName() {
	string name;
	cout << "검색할 도서의 도서명을 입력하세요." << endl << endl;
	getchar();
	getline(cin, name);

	if (arrNum == 0) {
		cout << endl << "검색할 도서목록이 존재하지 않습니다." << endl << "도서를 추가해주세요." << endl << endl;
	}
	else {
		// hash

		//for (int i = 0; i < arrNum; i++)
		//{
		//	if (bookArr1[i]->GetBookName() == name) {

		//		cout << "책제목 | 저자명 | ISBN | 책설명" << endl;
		//		bookArr[i]->ShowBookInfo();
		//		break;
		//	}
		//}
		////cout << "목록에 일치하는 도서가 없습니다. " << endl << endl;
	}
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

		// hash


		//for (int i = 0; i < arrNum; i++)
		//{
		//	if (bookArr[i]->GetBookISBN() == ISBN)
		//	{
		//		bookArr[i]->ShowBookInfo();
		//		break;
		//	}
		//}
		////cout << "목록에 일치하는 도서가 없습니다. " << endl << endl;
	}
}

void BookManager::AddBook() {
	char bookName[NAME_LEN];
	string authorName;
	int ISBN;
	string desc;

	cout << "도서를 입력합니다. " << endl << "도서명, 저자명, ISBN, 책설명을 입력해주세요." << endl << endl;
	getchar();
	cout << "도서명 : "; cin >> bookName;
	cout << "저자명 : "; cin >> authorName;
	cout << "ISBN : "; cin >> ISBN;
	getchar();
	cout << "책설명 : "; getline(cin, desc);

	//bookArr[arrNum] = new Book(bookName, authorName, ISBN, desc);

	bookArr2.push_back(new Book(bookName, authorName, ISBN, desc));
	cout << endl;

	Book rf = *bookArr2.back(); // 방금 넣은 맨 마지막 객체 참조
	//Book* pp = &*bookArr2.back(); // 윗줄의 다른 방법
	//Book* pp = &rf;
	
	cout << endl << "입력이 완료되었습니다." << endl << endl;
	
	rf.ShowInfo(); // 참조로 멤버 함수 호출
	//pp->ShowInfo();

	//delete(&rf); // 소멸자 호출 -> rf가 참조했던 마지막 객체도 끊기는지 다음 턴부터는 조회 불가
	//delete pp;
	
}

void BookManager::RemoveBook() {
	cout << "1. 도서명으로 검색하여 삭제" << endl
		<< "2. ISBN으로 검색하여 삭제" << endl;
	int i;
	cin >> i;

	if (i == 1)
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

		// bookArr2.erase(iter);

		//if (iter == bookArr2.end()) { // null check
		//	cout << "찾는 도서가 없습니다." << endl;
		//}

		/*for (iter = bookArr2.begin(); iter != bookArr2.end(); ++iter)
		{
		if()
		bookArr2.erase(iter);
		}*/

	}
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


		//cout << "목록에 일치하는 도서가 없습니다. " << endl << endl;
	}
}

void BookManager::ShowAllBook() {

	for (const Book* ref : bookArr2) {
		cout << "도서명 : " << ref->bookName << " | 저자명 : " << ref->authorName  << " | ISBN : " << ref->ISBN << " | 책설명 : " << ref->desc << endl;
	}
}

