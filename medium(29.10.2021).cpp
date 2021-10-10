#include <iostream>
using namespace std;

int multiplication (int a, int b)
{
	int result=0;
	while ( b != 0 )
	{
		if ( ( b & 1 ) == 1 )
		{
			result=result+a;
			a=a<<1;
			b=b>>1;
		}
		else 
		{
			a=a<<1;
			b=b>>1;
		}
	}
	return result;
}

int main()
{
	setlocale (LC_ALL, "Russian");
	int a,b;
	cout<<"¬ведите два числа, которые нужно перемножить (ввод через пробел) ";
	cin>>a>>b;
	cout<<multiplication (a, b);
	return 1;
}
