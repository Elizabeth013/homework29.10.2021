#include <iostream>
using namespace std;

int change (int x, int i)
{
	x=(1<<i)^x;
	cout<<x;
}

int main()
{
	setlocale (LC_ALL,"Russian");
	int x, i;
	cout<<" Введите число x= ";
	cin>>x;
	cout<<" Введите номер бита, который нужно заменить ";
	cin>>i;
	change (x,i);
	return 1;
}
