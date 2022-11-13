// 

#include <iostream>
using namespace std;
int main()
{
    int a, b,c;
    cin >> a >> b;
	c = 0;
	for (int i = a-1; i < b; i++)
	{
		if (i % 10 == 00|| i % 10 == 11|| i % 10 == 22|| i % 10 == 33|| i % 10 == 44|| i % 10 == 55|| i % 10 == 66|| i % 10 == 77|| i % 10 == 88|| i % 10 == 99) {
			c += 1;
		}
	}
	cout << c;

}

