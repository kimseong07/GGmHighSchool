# GGmHighSchoolStudies

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
#### Rev
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
##### UnityIdlemoney
```
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Numerics;

public class DataManager : MonoBehaviour
{
    #region Singleton Pattern
    private static DataManager instance;
    public static DataManager Instance
    {
        get
        {
            if (instance == null)
            {
                var obj = FindObjectOfType<DataManager>();
                if (obj != null)
                {
                    instance = obj;
                }
                else
                {
                    var newSingleton = new GameObject("Singleton Class").AddComponent<DataManager>();
                    instance = newSingleton;
                }
            }
            return instance;
        }
        private set
        {
            instance = value;
        }
    }
    private void Awake()
    {
        var objs = FindObjectsOfType<DataManager>();
        if (objs.Length != 1)
        {
            Destroy(gameObject);
            return;
        }
        DontDestroyOnLoad(gameObject);
    }
    #endregion

    public string GetGoldText(BigInteger _gold)
    {
        string gText = string.Empty;
        gText = _gold.ToString();

        switch (gText.Length)
        {
            case 1:
            case 2:
            case 3:
                break;
            case 4:
            case 5:
            case 6:
                gText = gText.Remove(gText.Length - 3, 3);
                gText += 'k';
                break;
            case 7:
            case 8:
            case 9:
                gText = gText.Remove(gText.Length - 6, 6);
                gText += 'M';
                break;
            case 10:
            case 11:
            case 12:
                gText = gText.Remove(gText.Length - 9, 9);
                gText += 'B';
                break;
            case 13:
            case 14:
            case 15:
                gText = gText.Remove(gText.Length - 12, 12);
                gText += 'T';
                break;
            default:
                gText = string.Format(" {0}.{1}{2}E + {3}", gText[0], gText[1], gText[2], gText.Length - 1);
                break;
        }
        return gText;
    }
}
```
###### Match World
```
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct tag_Munje
{
string Question;
string Answer;
int wordCount;
bool bUsed;
};

tag_Munje Munje[] = {
{"********","alphabet",8,false}
};

int main()
{
char ch, checkch;
string tempQuestion;
int checkCount, checkStar;

tempQuestion = Munje[0].Question;

cout << "|-------------------------|\n";
cout << "|  alphabet 맞히기 게임   |\n";
cout << "|-------------------------|\n";
cout << "|설명 : 알파벳을 누르세요.|\n";
cout << "|-------------------------|\n";

cout << tempQuestion;

checkCount = 0;
checkStar = 0;
for (int i = 0; i < Munje[0].wordCount; i++)
{
checkch = _getch();
cout << " " << checkch << endl;
for (int j = 0; j < Munje[0].wordCount; j++)
{
if (Munje[0].Answer[j] == checkch)
{
tempQuestion[j] = checkch;
}
}
cout << tempQuestion;
}
return 0;
}
```
###### Stack Maze
```
#include <iostream>
#include <Windows.h>

using namespace std;

#define MAZESIZE_X 12
#define MAZESIZE_Y 22
#define EXIT_X 11
#define EXIT_Y 16

typedef struct Position
{
	int x;
	int y;
	int d;
} Position;

typedef struct Mtable
{
	int x;
	int y;
} Mtable;

int Maze[MAZESIZE_X][MAZESIZE_Y] = {
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,},
	{1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,},
	{1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,},
	{1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,},
	{1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,},
	{1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,},
	{1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,},
	{1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,}
};

Mtable Move[4] = {
	{0,1},
	{1,0},
	{0,-1},
	{-1,0},
};

int Mark[MAZESIZE_X][MAZESIZE_Y];
int top;
Position Trace[(MAZESIZE_X - 2) * (MAZESIZE_Y - 2)];

void ShowMaze(Position);
void Push(Position);
void Pop(Position* P);

int main(void)
{
	int isFound = FALSE;
	int i, dir;

	Position Now = { 1,1,0 };
	Position Next;

	Push(Now);
	
	while (!isFound && top > 0)
	{
		Pop(&Now);
		dir = Now.d;

		while (dir < 4)
		{
			Next.x = Now.x + Move[dir].x;
			Next.y = Now.y + Move[dir].y;

			if (Next.x == EXIT_X && Next.y == EXIT_Y)
			{
				Next.d = dir;
				Push(Next);
				isFound = TRUE;
				break;

			}
			else if ((Maze[Next.x][Next.y] == 0) && (Mark[Next.x][Next.y] == 0))
			{
				Now.d = ++dir;
				Push(Now);

				Now.x = Next.x;
				Now.y = Next.y;
				dir = 0;

				Mark[Next.x][Next.y] = 1;
			}
			else dir++;
			ShowMaze(Now);
		}
	}
	if (isFound == TRUE)
		for (i = 0; i < top; i++)
			ShowMaze(Trace[i]);
	else cout << "Not Found!" << endl;

	system("pause");
	return 0;
}

void ShowMaze(Position P)
{
	Sleep(50);
	system("cls");

	cout << "출구는 (11,16)" << endl;
	cout << "현재 좌표는" << P.x << " " << P.y << " " << P.d << endl;

	for (int i = 0; i < MAZESIZE_X; i++)
	{
		for (int j = 0; j < MAZESIZE_Y; i++)
		{
			if (Maze[i][j] == 1)
				cout << "#";
			else if (P.x == i && P.y == j)
				cout << "&";
			else cout << " ";
		}
		cout << endl;
	}
}

void Push(Position P)
{
	Trace[top].x = P.x;
	Trace[top].y = P.y;
	Trace[top].d = P.d;
	top++;
}

void Pop(Position* P)
{
	top--;
	P->x = Trace[top].x;
	P->y = Trace[top].y;
	P->d = Trace[top].d;
}
```
###### c# 
```
using System;
using System.Collections;
using System.Threading;

using static System.Console;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            //long start = DateTime.Now.Ticks;
            //long count = 0;

            //while (start + (10000000) > DateTime.Now.Ticks)
            //{
            //    count++;
            //}
            //Console.WriteLine(count + "만큼 반복했습니다");

            //int[] Array = { 1, 2, 3, 4, 5, 6 };

            //for (int i = Array.Length - 1; i >= 0; i--)
            //{
            //        Write(Array[i] + " ");
            //}

            //for(int i = 0; i < Array.length; i++)
            //{
            //        WriteLine(Array[i] + " ");
            //}

            //foreach (int i in Array)
            //{
            //        WriteLine(i);
            //}

            //string[] array = { "사과", "배", "포도", "딸기", "바나나" };

            //foreach (string item in array)
            //{
            //    WriteLine(item);
            //}

            //char[] i = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

            //foreach (char a in i)
            //{
            //    WriteLine(a);
            //}


            //int count = 10;
            //for (int i = 0; i < count; i++)
            //{
            //    for (int j = 0; j < i + 1; j++)
            //    {
            //        Write('*');
            //    }
            //    WriteLine();
            //}

            //for (int i = 0; i < count; i++)
            //{
            //    for (int j = 0; j < count - i; j++)
            //    {
            //        Write(' ');
            //    }
            //    for (int j = 0; j < i + 1; j++)
            //    {
            //        Write('*');
            //    }
            //    WriteLine();
            //}

            //for (int i = 0; i < count; i++)
            //{
            //    for (int j = (count - 1) - i; j >= 0; j--)
            //    {
            //        Write(' ');
            //    }
            //    for (int j = 0; j < i + 1; j++)
            //    {
            //        Write('*');
            //    }
            //    for (int j = 0; j < i; j++)
            //    {
            //        Write('*');
            //    }
            //    WriteLine();
            //}

            //for (int i = 0; i < count; i++)
            //{
            //    for (int j = 0; j < count - i; j++)
            //    {
            //        Write(' ');
            //    }
            //    for (int j = 0; j < 2 * i + 1; j++)
            //    {
            //        Write('*');
            //    }
            //    WriteLine();
            //}

            //for (int i = 0; i < count; i++)
            //{
            //    for (int j = count - 1; j >= 0; j--)
            //    {
            //        for (int k = 0; k < count - i; k++)
            //        {
            //            Write(' ');
            //        }
            //        Write('*');
            //    }
            //    WriteLine();
            //}

            //while(true)
            //{
            //    Write("숫자를 입력해주세요(짝수 입력시 종료) : ");
            //    int input = int.Parse(ReadLine());

            //    if( input % 2 == 0)
            //    {
            //        break;
            //    }
            //}

            //for (int i = 0; i < 100; i++)                               //goto 쓰지마셈
            //{
            //    for (int j = 0; j < 100; j++)
            //    {
            //        if (i == 50 && j == 50)
            //        {
            //            goto Label;
            //        }
            //    }
            //Label:
            //}

            //for(int i = 0; i < 100; i++)
            //{
            //    if (i % 2 == 0)
            //    {
            //        continue;
            //    }
            //    WriteLine(i);
            //}

            //string input = "감자 고구마 토마토";
            //string[] inputs = input.Split(new char[] { ' ' });

            //foreach (string item in inputs)
            //{
            //    WriteLine(item);
            //}

            //string input = " test   \n";
            //WriteLine("::" + input.Trim() + "::");
            //Read();

            //string[] array = {"감자", "고구마", "토마토", "가지"};
            //WriteLine(string.Join(",", array));

            //WriteLine("첫 번째 출력");
            //Thread.Sleep(1000);
            //WriteLine("두 번째 출력");
            //Thread.Sleep(1000);
            //WriteLine("세 번째 출력");

            //int x = 1;
            //while (x < 50)
            //{
            //    Clear();
            //    SetCursorPosition(x, 5);

            //    if (x % 3 == 0)
            //    {
            //        WriteLine("@__");
            //    }
            //    else if (x % 3 == 1)
            //    {
            //        WriteLine("@_-");
            //    }
            //    else
            //    {
            //        WriteLine("@-_");
            //    }

            //    Thread.Sleep(100);
            //    x++;
            //}

            //while(true)
            //{
            //    ConsoleKeyInfo info = ReadKey();
            //    switch(info.Key)
            //    {
            //        case ConsoleKey.UpArrow:
            //            WriteLine("위로 이동");
            //            break;
            //        case ConsoleKey.RightArrow:
            //            WriteLine("우로 이동");
            //            break;
            //        case ConsoleKey.DownArrow:
            //            WriteLine("아래로 이동");
            //            break;
            //        case ConsoleKey.LeftArrow:
            //            WriteLine("좌로 이동");
            //            break;
            //        default:
            //            return;
            //    }
            //}

            //1.요소
            //2.index
            //3.Length
            //4.break
            //5.continue
            //6.

            //2번

            //2번

            //3번

            //2번

            //2번

            //2번

            //0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n

            //출력\n * 10

            //int i = 0;
            //while(i < 10)
            //{
            //    Write("출력");
            //    i++;
            //}

            //int count = 10;
            //for (int i = 0; i < count; i++)
            //{
            //    for (int j = 0; j < count - i; j++)
            //    {
            //        Write(' ');
            //    }
            //    for (int j = 0; j < 2 * i + 1; j++)
            //    {
            //        Write('*');
            //    }
            //    WriteLine();
            //}

            //int min = int.MaxValue; ;
            //int max = int.MinValue;
            //for (int i = 0; i < 5; i++)
            //{
            //    Write("숫자를 입력해주세요 : ");
            //    int input = int.Parse(ReadLine());
            //    if (min > input)
            //    {
            //        min = input;
            //    }
            //    if (max < input)
            //    {
            //        max = input;
            //    }
            //}
            //WriteLine("min " + max);
            //WriteLine("max " + min);

            //string start = "1";
            //for (int i = 0; i < 20; i++)
            //{
            //    WriteLine((i + 1) + "번째: " + start);

            //    string end = "";
            //    char number = start[0];
            //    int count = 0;
            //    for(int j = 0; j < start.Length; j++)
            //    {
            //        if(number == start[j])
            //        {
            //            count++;
            //        }
            //        else
            //        {
            //            end = end + number + count;
            //            number = start[j];
            //            count = 1;
            //        }
            //    }
            //    end = end + number + count;
            //    start = end;
            //}


            string[] fruits = { "사과", "배", "수박", "딸기" };

            for(int i = 0; i < fruits.Length; i++)
            {
                Write(fruits[i] + " ");
            }
            WriteLine();

            for(int i = fruits.Length - 1; i >= 0; i--)
            {
                Write(fruits[i] + " ");
            }
            WriteLine();

            foreach(string item in fruits)
            {
                Write(item + " ");
            }

            //1부터 1000까지 정수 중 50배수 개수 구하기
            //문자열 감자 고구마 토마토 string 배열로 저장후 foreach출력
            //문자열 고구마 토마토 역순의 문자로 바꿔 출력
            //입력한 문자열을 리스트에 담아 알파벳 순서대로 정렬 출력
            //아이디를 입력받는 코드 작성
            // 
            // 단 숫자 영어를 포함한 2~100자리 사이의 문자열이 아니면 다시 입력
        }
    }
}
```
