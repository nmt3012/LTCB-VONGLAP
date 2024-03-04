#include <iostream>
using namespace std;
int main()
{

	int  sodau, socuoi;
	int tong = 0;

	cout << "Nhap so dau:";
	cin >> sodau;
	cout << "Nhap so cuoi:";
	cin >> socuoi;

	cout << "VONG LAP WHILE\n";
	while (sodau <= socuoi) // 50<= 40 ==> False

	{
		cout << sodau << " ";
		tong = tong + sodau;
		sodau++;
	}
	cout << "\nVONG LAP DO FOR\n";
	for (int i = 0; i <= socuoi; i++)
	{
		cout << i << " ";
		sodau++;
	}


	return 0;
}

