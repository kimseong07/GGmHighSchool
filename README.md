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
#define EXIT_X 8
#define EXIT_Y 7
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
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1},
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
	{1,0,0,1,0,1,0,1,0,0,1,1,1,1,1,0,0,1,1,1,0,1},
	{1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,1,0,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1},
	{1,1,1,0,1,1,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,1,0,0,1,0,1,1,1,0,1,0,0,0,1,0,1,0,1,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
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
		for (int j = 0; j < MAZESIZE_Y; j++)
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
###### KeyInput
```
#include <iostream>
#include <conio.h>
#include <Windows.h> 
#include <time.h>

using namespace std;

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int currentX, currentY;
char ShowMap[20][21] =
{
	"++++++++++++++++++++",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"+..................+",
	"++++++++++++++++++++"
};

int blockX[10], blockY[10];

void gotoXY(int x, int y)
{
	HANDLE hOut;
	COORD Cur;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(hOut, Cur);
}

void createBlock()
{

	bool isSame = false;

	for (int i = 0; i < 10; i++)
	{
		do
		{
			isSame = false;

			blockX[i] = rand() % 18 + 1;
			blockY[i] = rand() % 18 + 1;

			for (int j = 0; j < i; j++)
			{
				if (blockX[i] == blockX[j] && blockY[i] == blockY[j])
				{
					isSame = true;
					break;
				}
			}

		} while (isSame);

		ShowMap[blockY[i]][blockX[i]] = '+';
	}
}

void displayScreen()
{
	for (int y = 0; y < 20; y++)
	{
		for (int x = 0; x < 21; x++)
		{
			gotoXY(x, y);
			_putch(ShowMap[y][x]);
		}

	}
	gotoXY(currentX, currentY);
	_putch('0');
	gotoXY(30, 2);
	cout << "Q:종료";
	gotoXY(30, 25);
}

void Move(int dir)
{
	int dir_x = 0;
	int dir_y = 0;

	switch (dir)
	{
	case LEFT:
		dir_x = dir_x - 1;
		break;
	case RIGHT:
		dir_x = 1;
		break;
	case UP:
		dir_y = dir_y - 1;
		break;
	case DOWN:
		dir_y = 1;
		break;
	}
	if (ShowMap[currentY + dir_y][currentX + dir_x] != '+')
	{
		currentX += dir_x;
		currentY += dir_y;

		if (currentX > 19)
		{
			currentX = 0;
		}
		else if (currentX < 0)
		{
			currentX = 19;
		}
		else if (currentY > 19)
		{
			currentY = 0;
		}
		else if (currentY < 0)
		{
			currentY = 19;
		}

	}
}

void ChangePlusA()
{
	if (ShowMap[currentY - 1][currentX] == '+' && currentY != 1)
	{
		ShowMap[currentY - 1][currentX] = '.';
	}
	if (ShowMap[currentY + 1][currentX] == '+' && currentY != 18)
	{
		ShowMap[currentY + 1][currentX] = '.';
	}
	if (ShowMap[currentY][currentX - 1] == '+' && currentX != 1)
	{
		ShowMap[currentY][currentX - 1] = '.';
	}
	if (ShowMap[currentY][currentX + 1] == '+' && currentX != 18)
	{
		ShowMap[currentY][currentX + 1] = '.';
	}
}

void ChangePlusB()
{
	if (ShowMap[currentY - 1][currentX] == '+' && currentY == 1)
	{
		ShowMap[currentY - 1][currentX] = ' ';
		ShowMap[19][currentX] = ' ';
	}
	if (ShowMap[currentY + 1][currentX] == '+' && currentY == 18)
	{
		ShowMap[currentY + 1][currentX] = ' ';
		ShowMap[0][currentX] = ' ';
	}
	if (ShowMap[currentY][currentX - 1] == '+' && currentX == 1)
	{
		ShowMap[currentY][currentX - 1] = ' ';
		ShowMap[currentY][19] = ' ';
	}
	if (ShowMap[currentY][currentX + 1] == '+' && currentX == 18)
	{
		ShowMap[currentY][currentX + 1] = ' ';
		ShowMap[currentY][0] = ' ';
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int ch;
	currentX = 1;
	currentY = 1;


	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			ShowMap[j][i];
		}
	}

	createBlock();

	while (true)
	{

		displayScreen();
		ch = _getch();
		if (ch == 0xE0 || ch == 0)
		{
			ch = _getch();
			switch (ch)
			{
			case LEFT:
			case RIGHT:
			case UP:
			case DOWN:
				Move(ch);
				break;
			}
		}
		else
		{
			ch = tolower(ch);
			if (ch == 'q')
			{
				exit(0);
			}
			else if (ch == 'z')
			{
				ShowMap[currentY][currentX] = 'X';
			}
			else if (ch == 'a')
			{
				
				ChangePlusA();
			}
			else if (ch == 'b')
			{
				ChangePlusB();
			}
		}
	}

	return 0;
}
```
###### stack
```
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<char> s;

	string str;

	cin >> str;
	
	for (int i = 0; i < str.length(); i++)
	{
		s.push(str[i]);
	}

	while (s.empty() == false)
	{
		cout << s.top();
		s.pop();
	}
	cout << endl;

	return 0;
}
```
###### Que
```
#include <iostream>
using namespace std;

#define NEXT(index,QSIZE) ((index + 1)%QSIZE) 

typedef struct Queue
{
	int* buf;
	int qsize;
	int front;
	int rear;
	int count;
}Queue;

void InitQueue(Queue* queue, int qsize);
int IsFull(Queue* queue);
int IsEmpty(Queue* queue);
void Enqueue(Queue* queue,int data);
int Dequeue(Queue* queue);

int main(void)
{
	int i, size;
	int select = -1;

	Queue queue;

	cout << "큐의 크기를 입력하세요.:";
	cin >> size;

	InitQueue(&queue, size);

	while (1)
	{
		cout << "1. Enqueue 2.Dequeue 3.Exit" << endl;
		cout << ">>";
		cin >> select;

		switch (select)
		{
		case 1:
			int value;
			cout << "input data : ";
			cin >> value;
			Enqueue(&queue, value);
			break;
		case 2:
			Dequeue(&queue);
			break;
		case 3:
			return 0;
			
		}
		cout << "\n";
	}
}

void InitQueue(Queue* queue, int qsize)
{
	queue->buf = new int[qsize];
	queue->qsize = qsize;
	queue->front = queue->rear = 0;
	queue->count = 0;
}

int IsFull(Queue* queue) { return queue->count == queue->qsize; }

int IsEmpty(Queue* queue) { return queue->count == 0; }

void Enqueue(Queue* queue, int data)
{
	if (IsFull(queue))
	{
		cout << "큐가 꽉 찼음\n";
		return;
	}
	queue->buf[queue->rear] = data;
	queue->rear = NEXT(queue->rear, queue->qsize);
	queue->count++;
}
int Dequeue(Queue* queue)
{
	int re = 0;
	if (IsEmpty(queue))
	{
		cout << "큐가 비었음\n";
		return re;
	}
	re = queue->buf[queue->front];
	queue->front = NEXT(queue->front, queue->qsize);
	cout << "dequeue:" << re;
	queue->count--;
	return re;
}
```
###### corutine 
```
public enum eFadeState
{
    None,
    FadeOut,
    ChangeBg,
    FadeIn,
    Done
}

public class FadeCo : MonoBehaviour
{
    eFadeState fadeState;

    Image imgBg;

    public float Delay = 10f;
    public float Delay2 = 10f;

    IEnumerator iStateCo = null;
    private void Awake()
    {
        imgBg = this.gameObject.GetComponent<Image>();
        if(imgBg == null)
        {
            Debug.LogWarning("img is null");
        }
    }
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space) && fadeState == eFadeState.None)
        {
            fadeState = eFadeState.None;
            NextState();
        }
    }

    IEnumerator None()
    {
        while(fadeState == eFadeState.None)
        {
            fadeState = eFadeState.FadeOut;
            yield return null;
        }

        NextState();
    }

    IEnumerator FadeOut()
    {
        float alpha = 0f;
        while(fadeState == eFadeState.FadeOut)
        {
            if(alpha < Delay)
            {
                alpha += Time.deltaTime;
            }
            else
            {
                fadeState = eFadeState.ChangeBg;
            }

            alpha = Mathf.Clamp(alpha, 0, Delay);
            imgBg.color = new Color(imgBg.color.r, imgBg.color.g, imgBg.color.b, alpha);

            yield return null;
        }

        NextState();
    }

    IEnumerator ChangeBg()
    {
        yield return null;

        fadeState = eFadeState.FadeIn;

        NextState();
    }

    IEnumerator FadeIn()
    {
        float alpha = 1f;
        while (fadeState == eFadeState.FadeIn)
        {
            if (alpha > 0)
            {
                alpha -= Time.deltaTime;
            }
            else
            {
                fadeState = eFadeState.Done;
            }

            alpha = Mathf.Clamp(alpha, 0, Delay2);
            imgBg.color = new Color(imgBg.color.r, imgBg.color.g, imgBg.color.b, alpha);

            yield return null;
        }

        NextState();
    }

    IEnumerator Done()
    {
        yield return null;

        fadeState = eFadeState.None;
    }

    void NextState()
    {
        // 04월 15일 배운 하이라이트 함수
        MethodInfo mInfo = this.GetType().GetMethod(fadeState.ToString(), BindingFlags.Instance | BindingFlags.NonPublic);
        iStateCo = (IEnumerator)mInfo.Invoke(this, null); 

        StartCoroutine(iStateCo);
    }
}
```
###### NumRev
```
#include <iostream>
#include <stack>
 
using namespace std;
 
int main()
{
	stack<int> s;
 
	int num[1000];
	int input;
	int max = 0;
 
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		cin >> num[i];
		max++;
	}
	while (max > 0)
	{
		max--;
		cout << num[max] << endl;
	}
	return 0;
}
```
###### PushPush
```
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

#define UP		72
#define DOWN	80
#define LEFT	75
#define RIGHT	77

char Stage[10][16] =
{
	"+++++++++++++++",
	"+++      ++++++",
	"++++&    ++++++",
	"++++ OO  ++++++",
	"++++ O   ++.+++",
	"+++++   @++.+++",
	"+++++      .+++",
	"+++++    +  +++",
	"+++++ @  ++++++",
	"+++++++++++++++"
};

char backgroundMap[10][16];
int currentX, currentY;
int totalMove;

bool bPull;

int portalX = 0;
int portalY = 0;
int portalX1 = 0;
int portalY1 = 0;

void gotoXY(int x, int y)
{
	HANDLE hOut;
	COORD Cur;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(hOut, Cur);
}

void clrscr()
{
	system("cls");
}

void initScreen()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			gotoXY(x, y);
			_putch(backgroundMap[y][x]);
		}
	}

	gotoXY(currentX, currentY);
	_putch('&');
	gotoXY(20, 2);
	puts("Q:종료 R:다시 하기");
	gotoXY(20, 4);
	cout << "이동 회수 : " << totalMove;

}

bool checkEnd()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			if (Stage[y][x] == '.' && backgroundMap[y][x] != 'O')
			{
				return false;
			}
		}
	}

	return true;
}

void move(int dir)
{
	int dir_x = 0, dir_y = 0;

	switch (dir)
	{
	case LEFT:
		dir_x = -1;
		break;
	case RIGHT:
		dir_x = 1;
		break;
	case UP:
		dir_y = -1;
		break;
	case DOWN:
		dir_y = 1;
		break;
	}

	if (backgroundMap[currentY + dir_y][currentX + dir_x] != '+')
	{
		if (backgroundMap[currentY + dir_y][currentX + dir_x] == 'O')
		{
			if (backgroundMap[currentY + dir_y * 2][currentX + dir_x * 2] == backgroundMap[portalY1][portalX1])
			{
				backgroundMap[currentY + dir_y][currentX + dir_x] = ' ';
				backgroundMap[currentY + dir_y * 2][currentX + dir_x * 2] = '@';
				backgroundMap[portalY][portalX] = 'O';
			}
			//위쪽 
			if (backgroundMap[currentY + dir_y * 2][currentX + dir_x * 2] == backgroundMap[portalY][portalX])
			{
				backgroundMap[currentY + dir_y][currentX + dir_x] = ' ';
				backgroundMap[currentY + dir_y * 2][currentX + dir_x * 2] = '@';
				backgroundMap[portalY1][portalX1] = 'O';
			}

			if (backgroundMap[currentY + dir_y * 2][currentX + dir_x * 2] == ' '
				|| backgroundMap[currentY + dir_y * 2][currentX + dir_x * 2] == '.')
			{
				if (Stage[currentY + dir_y][currentX + dir_x] == '.')
				{
					backgroundMap[currentY + dir_y][currentX + dir_x] = '.';
				}
				else if (Stage[currentY + dir_y][currentX + dir_x] == '@')
				{
					backgroundMap[currentY + dir_y][currentX + dir_x] = '@';
				}
				else
				{
					backgroundMap[currentY + dir_y][currentX + dir_x] = ' ';
				}
				backgroundMap[currentY + dir_y * 2][currentX + dir_x * 2] = 'O';
			}
			else
			{
				return;
			}
		}
		if (bPull)
		{
			if (Stage[currentY - 1][currentX] == '.')
			{
				backgroundMap[currentY - 1][currentX] = '.';
			}
			else
			{
				backgroundMap[currentY - 1][currentX] =  ' ';
			}
			backgroundMap[currentY - 1 + dir_y][currentX + dir_x] = '8';
		}

		currentX += dir_x;
		currentY += dir_y;
		totalMove++;
	}
}

int main()
{
	int ch;
	while (true)
	{
		memcpy(backgroundMap, Stage, sizeof(backgroundMap));

		for (int y = 0; y < 10; y++)
		{
			for (int x = 0; x < 15; x++)
			{
				if (backgroundMap[y][x] == '&')
				{
					currentX = x;
					currentY = y;
					backgroundMap[y][x] = ' ';
				}
				if (backgroundMap[y][x] == '@')
				{
					if (portalX == 0 && portalY == 0)
					{
						portalX = x;
						portalY = y;
					}
					else
					{
						portalX1 = x;
						portalY1 = y;
					}
				}
			}
		}

		clrscr();
		totalMove = 0;
		bPull = false;

		while (true)
		{
			initScreen();
			ch = _getch();
			if (ch == 0xE0 || ch == 0)
			{
				ch = _getch();
				switch (ch)
				{
				case LEFT:
				case RIGHT:
				case UP:
				case DOWN:
					move(ch);
					break;
				}
			}
			else
			{
				ch = tolower(ch);
				if (ch == 'r')
				{
					break;
				}
				else if (ch == 'q')
				{
					clrscr();
					exit(0);
				}
				else if (ch == 'p')
				{
					if (bPull)
					{
						if (backgroundMap[currentY - 1][currentX] == '8')
						{
							backgroundMap[currentY - 1][currentX] = 'O';

							bPull = false;
						}
						else if (backgroundMap[currentY][currentX - 1] == '8')
						{
							backgroundMap[currentY][currentX - 1] = 'O';

							bPull = false;
						}
						else if (backgroundMap[currentY +1][currentX] == '8')
						{
							backgroundMap[currentY + 1][currentX] = 'O';

							bPull = false;
						}
						else if (backgroundMap[currentY][currentX + 1] == '8')
						{
							backgroundMap[currentY][currentX + 1] = 'O';

							bPull = false;
						}
					}
					else
					{
						if (backgroundMap[currentY - 1][currentX] == 'O')
						{
							backgroundMap[currentY - 1][currentX] = '8';
							bPull = true;
						}
						else if (backgroundMap[currentY][currentX - 1] == 'O')
						{
							backgroundMap[currentY][currentX - 1] = '8';

							bPull = true;
						}
						else if (backgroundMap[currentY + 1][currentX] == 'O')
						{
							backgroundMap[currentY + 1][currentX] = '8';

							bPull = true;
						}
						else if (backgroundMap[currentY][currentX + 1] == 'O')
						{
							backgroundMap[currentY][currentX + 1] = '8';

							bPull = true;
						}
					}
				}
			}
			if (checkEnd())
			{
				clrscr();
				gotoXY(10, 4);
				cout << "끝났습니다. 아무 키나 누르세요.";
				_getch();
				clrscr();
				exit(0);
				break;
			}
		}
	}
	return 0;
}
```
###### linked list
```
#include <iostream>

using namespace std;


typedef struct linked
{
	int data;
	struct linked* next;
}node;

void Init();
void Insert(node* ptr);
void PrintList(node* ptr);
void Modify(node* ptr);
void InsertData(node* ptr);
void Delete(node* ptr);

int main()
{
	int menu = 0;

	Init();

	while (1)
	{
		cout << "1.입력 2.출력 3.수정 4.삽입 5.삭제 6.종료" << endl;
		cout << "input menu : ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			Insert(tail);
			break;
		case 2:
			PrintList(head);
			break;
		case 3:
			Modify(head);
			break;
		case 4:
			InsertData(head);
			break;
		case 5:
			Delete(head);
			break;
		case 6:
			break;
		default:
			cout << "select menu error.." << endl;
		}
		if (menu == 6) break;
	}
	return 0;
}

void Init()
{
	head = new node;
	bead->data = 0;
	head = > next = NULL;

	tail = head;

	return;
}

void Insert(node* ptr)
{
	node* newnode = new node;
	int num = 0;

	cout << "input number : ";
	cin >> num;

	newnode->data = num;
	newnode->next = NULL;

	ptr->next = newnode;
	tail = newnode;

	return;
}
void PrintList(node* ptr)
{
	node* view = ptr->next;

	while (view != NULL)
	{
		cout << view->data;
		view = view->next;
	}
	cout << endl;
	return;
}
void Modify(node* ptr)
{
	int index = 0;
	int num = 0;
	int i;

	cout << "input modify index : ";
	cin >> index;

	cout << "input modify data : ";
	cin >> num;

	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}

	ptr->data = num;
	return;
}

void InsertData(node* ptr)
{
	node* newnode = new node;

	int index = 0, num = 0;
	int i;

	cout << "input InsertData index : ";
	cin >> index;

	cout << "input data : ";
	cin << num;

	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}

	newnode->data = num;
	newnode->next = NULL;

	if (ptr->next == NULL)
	{
		ptr->next = newnode;
		tail = newnode;
	}
	else
	{
		newnode->next = ptr->next;
		ptr->next = newnode;
	}
	return;
}
void Delete(node* ptr)
{
	node* temp = 0;
	int i;
	int index;

	if (head == tail)
	{
		cout << "not found data" << endl;
		return;
	}
	cout << "input delete index : ";
	cin << index;

	for (i = 0; i < index - 1; i++)
	{
		ptr = ptr->next;
	}
	temp = ptr->next;
	
	if (temp->next = = NULL)
	{
		ptr->next = NULL;
		tail = ptr;
	}
	else
	{
		ptr->next = temp->next;
	}
	delete(temp);
	return;
}

```
###### Double linked list
```
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* nextNode;
    struct Node* prevNode;
};
 
struct Node* CreateNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->nextNode = NULL;
    temp->prevNode = NULL;
    return temp;
}
 
void AppendNode(Node** head, Node* newNode)
{
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        Node* tail = *head;
        while (tail->nextNode != NULL)
        {
            tail = tail->nextNode;
        }
        tail->nextNode = newNode;
        newNode->prevNode = tail;
        newNode->nextNode = NULL;
    }
}
 
int CountNode(Node** head)
{
    int count = 0;
    struct Node* current = *head;
    while (current != NULL)
    {
        current = current->nextNode;
        count++;
    }
    return count;
}
 
struct Node* SearchNode(Node** head, int index)
{
    struct Node* current = *head;
    while (current->nextNode != NULL && (--index) >= 0)
    {
        current = current->nextNode;
    }
    return current;
};
 
void RemoveNode(Node** head, Node* remove)
{
    if (*head == NULL)
    {
        cout << "\n There is no list data. \n" << endl;
        *head = remove->nextNode;
        remove->prevNode = NULL;
        remove->nextNode = NULL;
        delete(remove);
    }
    else
    {
        Node* temp = *head;
        while (temp->nextNode != remove)
        {
            temp = temp->nextNode;
        }
        temp->nextNode = remove->nextNode;
        remove->nextNode->prevNode = temp;
        remove->nextNode = NULL;
        remove->prevNode = NULL;
        delete(remove);
    }
}
 
void InsertNodeAfter(Node* current, Node* newNode)
{
    newNode->prevNode = current;
    newNode->nextNode = current->nextNode;
    current->nextNode->prevNode = newNode;
    current->nextNode = newNode;
}
 
void InsertNodeBefore(Node* current, Node* newNode)
{
    newNode->nextNode = current;
    newNode->prevNode = current->prevNode;
    current->prevNode->nextNode = newNode;
}
 
int main()
{
    Node* node = NULL;
    Node* head = NULL;
    Node* mynode = NULL;
 
    int i = 0;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        node = CreateNode(i);
        AppendNode(&head, node);
    }
    cout << "\ncounting node.." << endl;
 
    count = CountNode(&head);
 
    cout << count << endl;
 
    cout << "\nChecking node.." << endl;
    for (int i = 0; i < count; i++)
    {
        mynode = SearchNode(&head, i);
        cout << "[" << i << "]" << mynode->data << endl;
    }
    cout << "\ninserting after node...\n" << endl;
    node = CreateNode(3000);
    mynode = SearchNode(&head, 6);
    InsertNodeAfter(mynode, node);;
    count = CountNode(&head);
    for (int i = 0; i < count; i++)
    {
        mynode = SearchNode(&head, i);
        cout << i << " " << mynode->data << endl;
    }
    cout << "\ninserting before node...." << endl;
 
    node = CreateNode(1000);
    mynode = SearchNode(&head, 2);
 
    InsertNodeBefore(mynode, node);
 
    count = CountNode(&head);
    for (int i = 0; i < count; i++)
    {
        mynode = SearchNode(&head, i);
        cout << "[" << i << "]" << mynode->data << endl;
    }
    return 0;
}
```
###### pushpush finish
```
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

#define UP		72
#define DOWN	80
#define LEFT	75
#define RIGHT	77

char Stage[10][16] =
{
	"+++++++++++++++",
	"+++++++++++++++",
	"++++&  ++++++++",
	"++++ OO++++++++",
	"++++ O ++++.+++",
	"++++++ ++++.+++",
	"++++++     .+++",
	"+++++    +  +++",
	"+++++    ++++++",
	"+++++++++++++++"
};

void gotoXY(int x, int y)
{
	HANDLE hOut;
	COORD Cur;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(hOut, Cur);
}

void clrscr()
{
	system("cls");
}

char backgroundMap[10][16];
int currentX, currentY;
int totalMove;
bool bPull;

void initScreen()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			gotoXY(x, y);
			_putch(backgroundMap[y][x]);
		}
	}

	gotoXY(currentX, currentY);
	_putch('&');

	gotoXY(20, 2);
	puts("PushPush");

	gotoXY(20, 4);
	puts("Q : 종료");

	gotoXY(20, 6);
	printf("이동 횟수 : %d", totalMove);
}

bool checkEnd()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			if (Stage[y][x] == '.' && backgroundMap[y][x] != 'O')
			{
				return false;
			}
		}
	}

	return true;
}
bool movePullBlock(int posX, int posY, int dir_x, int dir_y)
{
	if (backgroundMap[currentY + posY][currentX + posX] == '8')
	{
		if (backgroundMap[currentY + posY + dir_y][currentX + posX + dir_x] == ' ' || backgroundMap[currentY + posY + dir_y][currentX + posX + dir_x] == '.')
		{
			if (Stage[currentY + posY][currentX + posX] == '.')
			{
				backgroundMap[currentY + posY][currentX + posX] = '.';
			}
			else
			{
				backgroundMap[currentY + posY][currentX + posX] = ' ';
			}

			backgroundMap[currentY + posY + dir_y][currentX + posX + dir_x] = '8';
		}
		else
		{
			return false;;
		}
	}
	return true;
	
}

void move(int dir)
{
	int dir_x = 0, dir_y = 0;

	switch (dir)
	{
	case LEFT:
		dir_x = -1;
		break;
	case RIGHT:
		dir_x = 1;
		break;
	case UP:
		dir_y = -1;
		break;
	case DOWN:
		dir_y = 1;
		break;
	}

	if (backgroundMap[currentY + dir_y][currentX + dir_x] != '+')
	{
		if (backgroundMap[currentY + dir_y][currentX + dir_x] == 'O')
		{
			if (backgroundMap[currentY + dir_y * 2][currentX + dir_x * 2] == ' ' || backgroundMap[currentY + dir_y * 2][currentX + dir_x * 2] == '.')
			{
				if (Stage[currentY + dir_y][currentX + dir_x] == '.')
				{
					backgroundMap[currentY + dir_y][currentX + dir_x] = '.';
				}
				else
				{
					backgroundMap[currentY + dir_y][currentX + dir_x] = ' ';
				}

				backgroundMap[currentY + dir_y * 2][currentX + dir_x * 2] = 'O';
			}
			else
			{
				return;
			}
		}

		if (bPull)
		{
			if (!movePullBlock(0, -1, dir_x, dir_y))
			{
				return;
			}

			if (!movePullBlock(0, 1, dir_x, dir_y))
			{
				return;
			}

			if (!movePullBlock(-1, 0, dir_x, dir_y))
			{
				return;
			}

			if (!movePullBlock(1, 0, dir_x, dir_y))
			{
				return;
			}
		}

		currentX = currentX + dir_x;
		currentY = currentY + dir_y;
		totalMove++;		
	}
}

int main()
{
	int ch;

	memcpy(backgroundMap, Stage, sizeof(backgroundMap));

	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			if (backgroundMap[y][x] == '&')
			{
				currentX = x;
				currentY = y;
				backgroundMap[y][x] = ' ';
			}
		}
	}

	clrscr();

	totalMove = 0;
	bPull = false;

	while (true)
	{
		initScreen();

		ch = _getch();

		if (ch == 0xE0 || ch == 0)
		{
			ch = _getch();

			switch (ch)
			{
			case LEFT:
			case RIGHT:
			case UP:
			case DOWN:
				move(ch);
				break;
			}
		}
		else
		{
			ch = tolower(ch);

			if (ch == 'q')
			{
				clrscr();
				exit(0);
			}
			else if (ch == 'p')
			{
				if (bPull)
				{
					if (backgroundMap[currentY - 1][currentX] == '8')
					{
						backgroundMap[currentY - 1][currentX] = 'O';
					}

					if (backgroundMap[currentY + 1][currentX] == '8')
					{
						backgroundMap[currentY + 1][currentX] = 'O';
					}

					if (backgroundMap[currentY][currentX - 1] == '8')
					{
						backgroundMap[currentY][currentX - 1] = 'O';
					}

					if (backgroundMap[currentY][currentX + 1] == '8')
					{
						backgroundMap[currentY][currentX + 1] = 'O';
					}

					bPull = false;
				}
				else
				{
					if (backgroundMap[currentY - 1][currentX] == 'O')
					{
						backgroundMap[currentY - 1][currentX] = '8';
						bPull = true;
					}

					if (backgroundMap[currentY + 1][currentX] == 'O')
					{
						backgroundMap[currentY + 1][currentX] = '8';
						bPull = true;
					}
					
					if (backgroundMap[currentY][currentX - 1] == 'O')
					{
						backgroundMap[currentY][currentX - 1] = '8';
						bPull = true;
					}
					
					if (backgroundMap[currentY][currentX + 1] == 'O')
					{
						backgroundMap[currentY][currentX + 1] = '8';
						bPull = true;
					}
				}
			}
		}

		if (checkEnd())
		{
			clrscr();

			gotoXY(10, 4);
			printf("CLEAR");

			_getch();
			clrscr();
			exit(0);
			break;
		}
	}

	return 0;
}
```
###### Calculator
```
#include <iostream>
#include <stack>
using namespace std;

#define MAX_STACK_SIZE 100
#define MAX_EXPR_SIZE 100

typedef enum {
	lparen, rparen, pl, mi, times, divide, mode, eos, operand
} precedence;

precedence stack[MAX_STACK_SIZE];
char expr[MAX_EXPR_SIZE];

static int isp[] = { 0,19,12,12,13,13,13,0 };
static int icp[] = { 20,19,12,12,13,13,13,0 };

precedence get_token(char* symbol, int* n)
{
	*symbol = expr[(*n)++];
	switch (*symbol) {
	case '(': return lparen;
	case ')': return rparen;
	case ' + ': return pl;
	case ' - ': return mi;
	case ' / ': return divide;
	case ' * ': return times;
	case ' % ': return mode;
	case ' ': return eos;
	default: return operand;
	}
}
void postfix(void)
{
	char symbol;
	precedence token;
	int n = 0;
	int top = 0;
	stack[0] = eos;
	for (token = get_token(&symbol, &n); token != eos; token = get_token(&symbol, &n))
	{
		if (token == operand)
		{
			cout << symbol;
		}
		else if (token == rparen)
		{
			while (stack[top] != lparen)
			{
				print_token(pop());
			}
			pop();
		}
		else 
		{
			while (isp[stack[top]] >= icp[token])
			{
				print_token(pop());
			}
			push(token);
		}
	}
	while ((token = pop()) != eos)
	{
		print_token(token);
	}
	cout << endl;
}
int eval(void)
{
	precedence token;
	char symbol;
	int op1, op2;
	int n = 0;
	int top = -1;
	token = get_token(&symbol, &n);
	while (token != eos) {
		if (token == operand)
		{
			push(symbol - '0');
		}
		else
		{
			op2 = pop();
			op1 = pop();
			switch (token)
			{
			case pl: push(op1 + op2);
				break;
			case mi: push(op1 - op2);
				break;
			case times: push(op1 * op2);
				break;
			case divide: push(op1 / op2);
				break;
			case mode: push(op1 % op2);
			}
		}
		token = get_token(&symbol, &n);
	}
	return pop();
}
```
###### dino-run
```
//20304 김성규
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

#define DINO_BOTTOM_Y 12
#define DINO_X 7
#define BULLET_Y 20
#define BULLET_X 10
#define TREE_BOTTOM_Y 20
#define TREE_BOTTOM_X 46

void gotoXY(int x, int y)
{
    HANDLE hOut;
    COORD Cur;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    Cur.X = x * 2;
    Cur.Y = y;
    SetConsoleCursorPosition(hOut, Cur);
}

void clrscr()
{
    system("cls");
}

/*
"        $$$$$$$ "
"       $$ $$$$$$"
"       $$$$$$$$$"
"$      $$$      "
"$$     $$$$$$$  "
"$$$   $$$$$     "
" $$  $$$$$$$$$$ "
" $$$$$$$$$$$    "
"  $$$$$$$$$$    "
"    $$$$$$$$    "
"     $$$$$$     "
"     $    $$$   "
"     $$         "

"        $$$$$$$ "
"       $$ $$$$$$"
"       $$$$$$$$$"
"$      $$$      "
"$$     $$$$$$$  "
"$$$   $$$$$     "
" $$  $$$$$$$$$$ "
" $$$$$$$$$$$    "
"  $$$$$$$$$$    "
"    $$$$$$$$    "
"     $$$$$$     "
"     $$$  $     "
"          $$    "
*/

bool legFlag;

void setConsoleView()
{
    system("mode con:cols=100 lines=25");
    system("title 공룡 게임");
}

void drawDino(int dinoY)
{
    gotoXY(0, dinoY);

    if (legFlag)
    {
        cout << "        $$$$$$$$$$$" << endl;
        cout << "       $$ $$$$$$$$$" << endl;
        cout << "       $$$$$$$$$$$$" << endl;
        cout << "   $   $$$         " << endl;
        cout << "  $$   $$$$$$$$$$  " << endl;
        cout << " $$$  $$$$$        " << endl;
        cout << "$$$  $$$$$$$       " << endl;
        cout << "$$$$$$$$$$$$$$$    " << endl;
        cout << " $$$$$$$$$$$       " << endl;
        cout << "    $$$$$$$$       " << endl;
        cout << "     $$$$$$        " << endl;
        cout << "     $    $$$      " << endl;
        cout << "     $$            ";
    }
    else
    {
        cout << "                   " << endl;
        cout << "        $$$$$$$$$$$" << endl;
        cout << "       $$$ $$$$$$$$" << endl;
        cout << "$      $$$$$$$$$$$$" << endl;
        cout << "$$     $$$$$$$$$$  " << endl;
        cout << "$$$   $$$$$        " << endl;
        cout << " $$  $$$$$$$$$$    " << endl;
        cout << " $$$$$$$$$$$       " << endl;
        cout << "  $$$$$$$$$$       " << endl;
        cout << "    $$$$$$$$       " << endl;
        cout << "     $$$$$$        " << endl;
        cout << "     $$$  $        " << endl;
        cout << "          $$       ";
    }
    legFlag = !legFlag;
}

void drawTree(int treeX)
{
    gotoXY(treeX, TREE_BOTTOM_Y);
    cout << "$$$$";
    gotoXY(treeX, TREE_BOTTOM_Y + 1);
    cout << " $$ ";
    gotoXY(treeX, TREE_BOTTOM_Y + 2);
    cout << " $$ ";
    gotoXY(treeX, TREE_BOTTOM_Y + 3);
    cout << " $$ ";
    gotoXY(treeX, TREE_BOTTOM_Y + 4);
    cout << " $$ ";
}

void drawBullet(int bulletX)
{
    gotoXY(bulletX, BULLET_Y);
    cout << "XXXX";
}

void scoreT(int score)
{
    gotoXY(40, 1);
    cout << "score : " << score << endl;
}

int getKeyDown()
{
    if (_kbhit() != 0)
    {
        return _getch();
    }
    return 0;
}

int main(void)
{
    legFlag = false;

    bool isJumping = false;
    bool isBottom = true;
    bool isBullet = false;
    const int gravity = 3;

    int dinoX = DINO_X;
    int dinoY = DINO_BOTTOM_Y;
    int treeX = TREE_BOTTOM_X;
    int treeY = TREE_BOTTOM_Y;
    int bulletX = BULLET_X;
    int score = 0;

    setConsoleView();

    while (true)
    {
        switch (getKeyDown())
        {
        case 'j':
            if (isBottom)
            {
                isJumping = true;
                isBottom = false;
            }
            break;
        case 'a':
            if (isBullet == false)
            {
                isBullet = true;
            }
            break;
        default:
            break;
        }

        if (isBullet)
        {
            drawBullet(bulletX);
            bulletX += 2;
        }

        if (isJumping)
        {
            dinoY -= gravity;
        }
        else
        {
            dinoY += gravity;
        }

        if (dinoY >= DINO_BOTTOM_Y)
        {
            dinoY = DINO_BOTTOM_Y;
            isBottom = true;
        }
        else if (dinoY <= 3)
        {
            isJumping = false;
        }

        treeX -= 2;

        if (treeX <= 0)
        {
            treeX = TREE_BOTTOM_X;
        }

        if (bulletX >= 45)
        {
            isBullet = false;
            bulletX = BULLET_X;
        }

        if (bulletX >= treeX-1 && isBullet)
        {
            isBullet = false;
            bulletX = BULLET_X;
            treeX = TREE_BOTTOM_X;

            score++;
        }

        if (dinoX >= treeX - 1 && dinoY >= DINO_BOTTOM_Y)
        {
            return 0;
        }
        scoreT(score);
        drawDino(dinoY);
        drawTree(treeX);
        
        Sleep(80);
        clrscr();
    }

    return 0;
}
```
###### rhythm game class
```
#pragma once
#include "console.h"

class Note
{
private:
	int x;
	int y;
	int index;

	int _input;
	int score;

public:
	void initNote();

	void drawNote();
	void downNote();

	void checkEnd();

	void playSound();

	int getKeyDown();

	void keyInput();
};
```
```
#include "note.h"

void Note::initNote()
{
	index = rand() % 7 + 1;

	x = index * 2;
	y = 0;
}

void Note::drawNote()
{
	gotoXY(x,y);
	setTextColor(11);
	std::cout << "@";
	setTextColor(10);
}

void Note::downNote()
{
	y++;
}

void Note::checkEnd()
{
	if (y == 12)
	{
		playSound();
		index = rand() % 7 + 1;
		initNote();
	}
}

void Note::playSound()
{
	int data[7] = { 523, 587, 659, 698, 784, 880, 988 };

	beep(data[index - 1], 500);
}

int Note::getKeyDown()
{
	if (_kbhit() != 0)
	{
		return _getch() - '0';
	}
}

void Note::keyInput()
{
	_input = getKeyDown();
	if (_input == index && y == 11)
	{
		if (y == 11)
		{
			playSound();
			index = rand() % 7 + 1;
			initNote();
		}
	}
	
}
```
###### world correction
```
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void gotoXY(int x, int y)
{
	HANDLE hOut;
	COORD Cur;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Cur.X = x * 2;
	Cur.Y = y;
	SetConsoleCursorPosition(hOut, Cur);
}

int GetKeyDown()
{
	if (_kbhit() != 0)
	{
		return _getch();
	}

	return 0;
}

vector<string> pastWord;
vector<string> strWords;

void SetConsoleView()
{
	system("mode con:cols=50 lines=20");
	system("title WORD GAME");
}

void DrawReadyGame()
{
	system("cls");
	gotoXY(5, 2);
	cout << "==============================";
	gotoXY(5, 3);
	cout << "========= WORD GAME ==========";
	gotoXY(5, 4);
	cout << "==============================";
	gotoXY(6, 6);
	cout << "시작하려면 's'를 눌러주세요";
	gotoXY(20, 18);
}

bool ReadyGame()
{
	DrawReadyGame();

	while (true)
	{
		int key = GetKeyDown();
		key = tolower(key);

		if (key == 's')
		{
			return true;
		}
	}

	return false;
}

void SetWords()
{
	string str[4] = { "apple", "banana", "code", "program" };

	ifstream readFromFile("words.txt");

	if (!readFromFile.is_open())
	{
		ofstream writeToFile("words.txt");

		for (int i = 0; i < 4; i++)
		{
			string temp = str[i];
			if (i < 3)
			{
				temp += "\n";
			}
			writeToFile.write(temp.c_str(), temp.size());
			strWords.push_back(str[i]);
		}

		writeToFile.close();
	}
	else
	{
		while (!readFromFile.eof())
		{
			string temp;
			getline(readFromFile, temp);
			strWords.push_back(temp);
		}

		readFromFile.close();
	}
}

void DrawStartGame()
{
	system("cls");
	gotoXY(5, 8);
	cout << "past = ";
	for (int i = 0; i < (int)pastWord.size(); i++)
	{
		cout << pastWord[i] << " ";
	}
	gotoXY(5, 12);
	cout << "input = ";
}

void StartGame()
{
	srand((unsigned)time(NULL));

	SetWords();

	while (true)
	{
		int num = rand() % (int)strWords.size();

		string strQuestion;
		string strOriginal = strWords[num];
		int originalLen = (int)strOriginal.length();

		for (int i = 0; i < originalLen; i++)
		{
			strQuestion += "_";
		}

		while (true)
		{
			DrawStartGame();

			gotoXY(5, 5);
			for (int i = 0; i < originalLen; i++)
			{
				cout << strQuestion[i] << " ";
			}
			cout << endl;

			gotoXY(9, 12);
			string strInput;

			bool bInput = true;
			int over = 0;
			cin >> strInput;
			for (int i = 0; i < (int)pastWord.size(); i++)
			{
				if (strInput == pastWord[i])
				{
					over++;
				}
			}
			if (over >= 1)
			{
				bInput = false;
			}

			if (bInput == true)
			{
				pastWord.push_back(strInput);

				if (strInput.length() == 1)
				{
					for (int i = 0; i < originalLen; i++)
					{
						if (strOriginal[i] == strInput[0])
						{
							strQuestion[i] = strInput[0];
						}
					}
				}
				else if (strInput.length() > 1)
				{
					if (strOriginal == strInput)
					{
						pastWord.clear();
						break;
					}
				}
			}
		}
	}
}

int main()
{
	SetConsoleView();

	while (true)
	{
		if (ReadyGame())
		{
			StartGame();
		}
	}

	return 0;
}
```
###### shooting game
####### main
```
#include <iostream>
#include <time.h>
#include <vector>

#include "Console.h"
#include "Roket.h"

bool bMoveDown;
int y;

vector<Roket> rokets;
vector<Roket> myrokets;

void setConsoleView()
{
	system("mode con:cols=60 lines=20");
	system("title SHOOTING GAME");
}

int main()
{
	bMoveDown = true;
	y = 0;

	setConsoleView();

	rokets.clear();


	int key;

	while (true)
	{
		key = getKeyDown();
		key = tolower(key);

		if (key == 'a')
		{
			Roket roket;
			roket.setRoket(y);

			myrokets.push_back(roket);
		}

		if (rand() % 100 < 10) 
		{
			Roket roket;
			roket.setRoket(-1);

			rokets.push_back(roket);

		}



		for (int i = 0; i < (int)rokets.size(); i++)
		{
			rokets[i].moveRoket();
			rokets[i].drawRoket();
		}

		for (int i = 0; i < (int)myrokets.size(); i++)
		{
			myrokets[i].moveRoket();
			myrokets[i].drawRoket();
		}

		gotoXY(2, y);
		cout << "▶";
		gotoXY(59, 19);

		if (bMoveDown)
		{
			y++;

			if (y > 19)
			{
				y = 19;
				bMoveDown = false;
			}
		}
		else
		{
			y--;

			if (y < 0)
			{
				y = 0;
				bMoveDown = true;
			}
		}

		for (int i = 0; i < (int)rokets.size(); i++)
		{
			if (rokets[i].checkEnd())
			{
				rokets.erase(rokets.begin() + i);
			}
		}

		for (int i = 0; i < (int)myrokets.size(); i++)
		{
			if (myrokets[i].checkEnd())
			{
				myrokets.erase(myrokets.begin() + i);
			}
		}

		for (int i = 0; i < (int)rokets.size(); i++)
		{
			for (int j = 0; j < (int)myrokets.size(); j++)
			{
				if (rokets[i].x == myrokets[j].x && rokets[i].y == myrokets[j].y)
				{
					rokets.erase(rokets.begin() + i);
					myrokets.erase(myrokets.begin() + j);
				}
			}
		}

		Sleep(50);
		clrscr();
	}

	return 0;
}
```
###### BianryTree
```
#include <iostream>
#include "BinaryTree.h"
using namespace std;

BTreeNode* MakeBTreeNode(void)
{
	BTreeNode* nd = new BTreeNode;

	nd->left = NULL;
	nd->right = NULL;

	return nd;
}

void DeleteBTreeNode(BTreeNode* bt)
{
	delete bt;
}

BTData GetData(BTreeNode* bt)
{
	return bt->data;
}

void SetData(BTreeNode* bt, BTData data)
{
	bt->data = data;
}

BTreeNode* GetLeftSubTree(BTreeNode* bt)
{
	return bt->left;
}

BTreeNode* GetRightSubTree(BTreeNode* bt)
{
	return bt->right;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->left != NULL)
		delete main->left;

	main->left = sub;
}

void MakeRightSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->right != NULL)
		delete main->right;

	main->right = sub;
}
void PreorderTraverse(BTreeNode* bt)
{
	if (bt == NULL)
		return;
	cout << bt->data << endl;
}

void InorderTraverse(BTreeNode* bt)
{
	if (bt == NULL)
		return;

	InorderTraverse(bt->left);
	cout << bt->data << endl;
	InorderTraverse(bt->right);
}

void PostorderTraverse(BTreeNode* bt)
{
	if (bt == NULL)
		return;
	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	cout << bt->data << endl;
}
```
