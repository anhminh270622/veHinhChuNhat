#include<iostream>
using namespace std;

void veHinhChuNhat(int *x, int *y)
{
	for (int i = 0; i < *x; i++)
	{
		cout << "*" << " ";
		for (int j = 0; j < *y - 1; j++)
		{
			cout << "*" << " ";

		}
		cout << endl;
	}
}
int main()
{
	int x, y;// 3 nhan 4;
	cout << "nhap vao do dai x va y" << endl;
	cin >> x >> y;
	veHinhChuNhat(&x, &y);
	
	return 0;
}