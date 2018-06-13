// STACK using class

#include<iostream>


using namespace std;

int size=2;

class stack
{
private : 
		  int top;
		  int *array;	


public : 
		 stack();
		 int isempty();
		 int isfull();
		 void push(int);
		 int pop();
		 void printstack();

};

stack :: stack()
{
	array=new int[size];
	top=-1;
}

void stack::printstack()
{
	int t=top;
	while(t!=-1)
	{
		cout<<array[t--]<<endl;
	}	
}

int stack::isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int stack::isfull()
{
	if(top==size)
		return 1;
	else
		return 0;
}

void stack::push(int n)
{
	if(isfull())
		cout<<"stack overflow";
	else
		array[++top]=n;
}

int stack::pop()
{
	if(isempty())
	{	
		cout<<"stack underflow";
		return -1;
	}	
	else
		return array[top--];
}

int main()
{
		stack q;
		int n;

		cin>>n;

		cout<<q.pop()<<endl;
		cout<<q.pop()<<endl;
		q.push(n);
		q.push(n+1);
		q.push(n*n);
		cout<<q.pop()<<endl;
		q.printstack();
}