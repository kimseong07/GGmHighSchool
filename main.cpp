//20304 김성규
#include <iostream>
#include <stdio.h>
using namespace std;

//팩토리얼함수
//int Factorial(int i)
//{
//	if (i == 0)
// {
//		return 1;
// }
//	else
// {
//		return(i * Factorial(i-1));
// }
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	cout << "1부터" << a << "의곱 =" << Factorial(a) << endl;
// 
//	return 0;
//}

//피보나치수열
//int Fibo(int i)
//{
//	if (i == 1 || i == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibo(i - 1) + Fibo(i - 2);
//	}
//}	
//int main()
//{
//	int i;
//	for (i = 1; i <= 15; i++)
//	{
//		cout << Fibo(i) << endl;
//	}
// 
//	return 0;
//}

//보너스문제
//int main()
//{
//	int a;
//	int sum;
//
//	cin >> a;
//	sum = a * (a + 1) / 2;
//	cout << "1부터 " << a << "까지 연속한수를 더하면 " << sum << endl;
//
//	return 0;
//}

//보너스 문제2
//int Gaus(int i)
//{
//	if (i < 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return i + Gaus(i - 1);
//	}
//}
//int main()
//{
//	int a;
//	cin >> a;
//	cout << "1부터 " << a << "까지 연속한수를 더하면 " << Gaus(a) << endl;
// 
//	return 0;
//}

//보너스문제3
//int main()
//{
//	int total = 1;
//	int a;
//	cin >> a;
//
//	for (int i = 0; i < a; i++)
//	{
//		total *= i + 1;
//	}
//
//	cout << "1부터 " << a << " 의곱 = " << total << endl;
//	return 0;
//}

//하노이탑 
//void Hanoi(int a, char b, char c, char d)
//{
//	if (a == 1)
//	{
//		cout << "1을 " << b << "에서 " << d << "로 이동" << endl;
//	}
//	else
//	{
//		Hanoi(a - 1, b, d, c);
//		cout << a << "를(을) " << b << "에서 " << d << "로 이동" << endl;
//		Hanoi(a - 1, c, b, d);
//	}
//}
//int main()
//{
//	Hanoi(3, 'A', 'B', 'C');
// 
//	return 0;
//}

//역수
//int rad = 1;
//int rev(int a)
//{
//	if (a == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		int result = rev(a / 10) + (a % 10) * rad;
//		rad *= 10;
//		return result;
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	cout << rev(n);
//}


//홀수
//void odnum(int a, int b)
//{
//	if (a > b)
//	{
//		return;
//	}
//	if (a % 2)
//	{
//		cout << a << " ";
//	}
//	odnum(a + 1, b);
//}
//
//int main()
//{
//	int i, j;
//	cin >> i >> j;
//	odnum(i, j);
//	
//	return 0;
//}

//짝수
//void odnum(int a, int b)
//{
//	if (a == b)
//	{
//		return;
//	}
//	if (a % 2)
//	{
//		cout << a + 1 << " ";
//	}
//	odnum(a + 1, b);
//}
//
//int main()
//{
//	int i, j;
//	cin >> i >> j;
//	odnum(i, j);
//
//	return 0;
//}