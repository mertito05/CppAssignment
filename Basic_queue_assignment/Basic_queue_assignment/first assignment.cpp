#include <iostream>
using namespace std;
/*Задача 12.Да се състави програма за създаване на опашка и изключване
от нея на N-я елемент от края и замяна на N-1 елементв стойност Х.
Стойността Х се задава от потребителя, по време на изпълнение на програмата*/
//user input -1
void userinput();
void menu();
void push(int n);
int pop(int &n);
int choice;
struct elem
{
	int key; elem* next;
} *first = NULL, *last = NULL, * p;
void menu() {
	int num;
	string confirm;
	cout << "=========================================\n";
	cout << "\t\tMenu\t\n";
	cout << "=========================================\n";
	cout << " 1.Add element\n";
	cout << " 2.Remove element\n";
	cout << " 3.Remove specific element\n";
	cin >> choice;
	do
	{ 
		switch (choice)
		{
		case 1:	cout << "\n Input integers: \n";
			while (cin >> num)
				push(num);
			break;
		case 2:
			cout << "\nBuffered data: ";
			while (pop(num))
			{
				cout << num << " ";
			}
			break;
		case 3:break;
		default:
			break;
		}
		cout << "Press y or Y to continue:";
		cin >> confirm;
	} while (confirm == "y" || confirm == "Y");
}
int main()
{
	menu();
	
	cout << "\n";
	cout << " Your last choice was ";
	return choice;
}
void push(int n) 
{
	p = last;
	last = new elem;
	last->key = n;
	last->next = NULL;
	if (p != NULL) p->next = last;
	if (first == NULL) 
	{
		first = last;
	}
}
int pop(int& n) 
{
	if (first) 
	{
		n = first->key;
		p = first;
		first = first->next;
		if (first == NULL) last = first;
		delete p; 
		return 1;
	}
	else
		return 0; 
}
