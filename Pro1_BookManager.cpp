#include "BookManager.h"

int main()
{
	SetConsoleOutputCP(65001);

	int i;

	BookManager bm;

	while (true)
	{
		bm.ShowMenu();

		cin >> i;

		switch (i)
		{
		case 1:
			bm.FindBook();
			break;

		case 2:
			bm.AddBook();
			break;

		case 3:
			bm.RemoveBook();
			break;

		case 4:
			bm.ShowAllBook();
			break;

		case 5:
			cout << "프로그램을 종료합니다 ..." << endl;
			return 0;

		default:
			cout << "범위안의 숫자를 입력해주세요." << endl;

		}
	}

	return 0;
}