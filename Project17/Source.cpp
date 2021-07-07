#include<iostream>
using namespace std;
int n = 100;
int stack[100], top = -1;
void menu()
{
	cout << "\t\t\tMenu" << endl;
	cout << "\t1.\tEnter Elements in Stack" << endl;
	cout << "\t2.\tDelete Last Elements in Stack" << endl;
	cout << "\t3.\tLast Element Entered in Stack" << endl;
	cout << "\t4.\tDisplay Entered Element in Stack" << endl;
	cout << "\t0.\tExit" << endl;
	cout << "\t\t\t\t\t\t\tCreated BY:\n\t\t\t\t\t\t\t\tYousafKamran" << endl;
}
void push(int value)
{
	if (top >= n - 1)
		cout << "Stack overflow" << endl;
	else
	{
		top++;
		stack[top] = value;
	}
}
void pop()
{
	if (top <= -1)
	{
		cout << "Stack Underflow" << endl;
	}
	else {
		cout << "The popped element is " << stack[top] << endl;
		top--;
	}
}
void peek()
{
	if (top == -1)
	{
		cout << "Stack is Empty" << endl;
	}
	else
	{
		cout << "Last Element Enetered is:";
		cout << stack[top];
		cout << endl;
	}
}
void display()
{
	if (top >= 0)
	{
		for (int i = top; i >= 0; i--)
		{
			cout << stack[i] << " ";
		}
	}
	else
	{
		cout << "Stack is empty";
	}
}
int main()
{
	int val = 0, cho = 0, no = 0;
	char choi = 0;
	do
	{
		system("CLS");
		menu();
		cout << "Enter choice: ";
		cin >> cho;
		cout << endl;
		if (cho != 0)
		{
			if (cho == 1)
			{
				system("CLS");
				cout << "Enter how many values you want to enter:";
				cin >> no;
				cout << endl;
				for (int i = 0; i <= no - 1; i++)
				{
					cout << "Enter value to be pushed:" << endl;
					cin >> val;
					push(val);
				}
				cout << "Values Entered in stack" << endl;

			}
			else if (cho == 2)
			{
				system("CLS");
				pop();
				cout << endl;
				cout << "Last Element Deleted from the Stack" << endl;
				system("pause");
				continue;
			}
			else if (cho == 3)
			{
				system("CLS");
				peek();
				cout << endl;
				system("pause");
				continue;
			}
			else if (cho == 4)
			{
				system("CLS");
				cout << "Entered stack is" << endl;;
				display();
				cout << endl;
				system("pause");
				continue;
			}
			cout << "Do you want to continue(Y/N)";
			cin >> choi;
		}
		else
		{

			cout << "Goodbye" << endl;
			system("pause");
			choi == 'n';
			break;
		}
	} while (choi == 'Y' || choi == 'y');
	return 0;
}
