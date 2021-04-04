# GGmHighSchool
## AnEvenNum
```
#include <iostream>
using namespace std;
 
void odnum(int a, int b)
{
	if (a == b)
	{
		return;
	}
	if (a % 2)
	{
		cout << a + 1 << " ";
	}
	odnum(a + 1, b);
}
 
int main()
{
	int i, j;
	cin >> i >> j;
	odnum(i, j);
 
	return 0;
}
```
### OdNum
```
#include <iostream>
using namespace std;
 
void odnum(int a, int b)
{
	if (a > b)
	{
		return;
	}
	if (a % 2)
	{
		cout << a << " ";
	}
	odnum(a + 1, b);
}
 
int main()
{
	int i, j;
	cin >> i >> j;
	odnum(i, j);
 
	return 0;
}
```
#### rev
```
#include <iostream>
using namespace std;
 
int n = 1;
int rev(int a)
{
	if (a == 0)
	{
		return 0;
	}
	else
	{
		int result = rev(a / 10) + (a % 10) * n;
		n *= 10;
		return result;
	}
}
int main()
{
	int n;
	cin >> n;
	cout << rev(n);
}
```
