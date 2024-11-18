#include <iostream>
using namespace std;
int main()
{
	cout << "giai thua\n";
	int so, giaithua = 1;
	cout << "nhap so de tinh giai thua: "; cin >> so;
	
	for (int i = 1; i <= so; i++)
	{
		giaithua *= i;
	}
	cout << so << "!" << "=" << giaithua << endl;
	return 0;
}