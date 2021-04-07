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
##### unityIdlemoney
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
