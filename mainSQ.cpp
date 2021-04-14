//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//#define MAZESIZE_X 12
//#define MAZESIZE_Y 22
//#define EXIT_X 8
//#define EXIT_Y 7
//typedef struct Position
//{
//	int x;
//	int y;
//	int d;
//} Position;
//
//typedef struct Mtable
//{
//	int x;
//	int y;
//} Mtable;
//
//int Maze[MAZESIZE_X][MAZESIZE_Y] = {
//	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1},
//	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
//	{1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
//	{1,0,0,1,0,1,0,1,0,0,1,1,1,1,1,0,0,1,1,1,0,1},
//	{1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
//	{1,1,0,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1},
//	{1,0,0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1},
//	{1,1,1,0,1,1,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1},
//	{1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,1,0,0,1,0,1,1,1,0,1,0,0,0,1,0,1,0,1,0,1},
//	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
//}; 
//
//Mtable Move[4] = {
//	{0,1},
//	{1,0},
//	{0,-1},
//	{-1,0},
//};
//
//int Mark[MAZESIZE_X][MAZESIZE_Y];
//int top;
//Position Trace[(MAZESIZE_X - 2) * (MAZESIZE_Y - 2)];
//
//void ShowMaze(Position);
//void Push(Position);
//void Pop(Position* P);
//
//int main(void)
//{
//	int isFound = FALSE;
//	int i, dir;
//
//	Position Now = { 1,1,0 };
//	Position Next;
//
//	Push(Now);
//	
//	while (!isFound && top > 0)
//	{
//		Pop(&Now);
//		dir = Now.d;
//
//		while (dir < 4)
//		{
//			Next.x = Now.x + Move[dir].x;
//			Next.y = Now.y + Move[dir].y;
//
//			if (Next.x == EXIT_X && Next.y == EXIT_Y)
//			{
//				Next.d = dir;
//				Push(Next);
//				isFound = TRUE;
//				break;
//
//			}
//			else if ((Maze[Next.x][Next.y] == 0) && (Mark[Next.x][Next.y] == 0))
//			{
//				Now.d = ++dir;
//				Push(Now);
//
//				Now.x = Next.x;
//				Now.y = Next.y;
//				dir = 0;
//
//				Mark[Next.x][Next.y] = 1;
//			}
//			else dir++;
//			ShowMaze(Now);
//		}
//	}
//	if (isFound == TRUE)
//		for (i = 0; i < top; i++)
//			ShowMaze(Trace[i]);
//	else cout << "Not Found!" << endl;
//	system("pause");
//	return 0;
//}
//
//void ShowMaze(Position P)
//{
//	Sleep(50);
//	system("cls");
//
//	cout << "출구는 (11,16)" << endl;
//	cout << "현재 좌표는" << P.x << " " << P.y << " " << P.d << endl;
//
//	for (int i = 0; i < MAZESIZE_X; i++)
//	{
//		for (int j = 0; j < MAZESIZE_Y; j++)
//		{
//			if (Maze[i][j] == 1)
//				cout << "#";
//			else if (P.x == i && P.y == j)
//				cout << "&";
//			else cout << " ";
//		}
//		cout << endl;
//	}
//}
//
//void Push(Position P)
//{
//	Trace[top].x = P.x;
//	Trace[top].y = P.y;
//	Trace[top].d = P.d;
//	top++;
//}
//
//void Pop(Position* P)
//{
//	top--;
//	P->x = Trace[top].x;
//	P->y = Trace[top].y;
//	P->d = Trace[top].d;
//}
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
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	stack<int> s;
//
//	int num[3] = { 0, };
//
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> num[i];
//		s.push(num[i]);
//	}
//
//	while (s.empty() == false)
//	{
//		cout << s.top() << " "; //가장 나중에 들어간 값 부터 확인
//		s.pop();
//	}
//	cout << endl;
//	
//	return 0;
//}
//도움: 성빈(string)
//20304 김성규
//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main()
//{
//	stack<char> s;
//
//	string str;
//
//	cin >> str;
//	
//	for (int i = 0; i < str.length(); i++)
//	{
//		s.push(str[i]);
//	}
//
//	while (s.empty() == false)
//	{
//		cout << s.top();
//		s.pop();
//	}
//	cout << endl;
//
//	return 0;
//}