#include<iostream>
#define n 5
using namespace std;
int stack[n];
int Top=-1;
void push();
void pop();
void top();
void display();

//Main Function 
int main(){

 int x;
	
	
	do
	{
	
	
		cout<<"/n1: push():"<<endl;
		cout<<"/n2: pop():"<<endl;
		cout<<"/n3: Top():"<<endl;
		cout<<"/n4: display():"<<endl;
		cout<<"/n5: Exit():"<<endl;
		cin>>x;
		switch(x)
		{
		case 1:
		{
		push();
		break;
		}
		case 2:
		{
		pop();
		break;
		}
		case 3:
		{
		top();
		break;
		}
		case 4:
		{
		display();
		break;
		}
		}
}
   while(x!=5);
   return 0;

		
		
	
	
}
void push()
{
	int value;
	cout<<"Enter the value you wanna push";
	cin>>value;
	if(Top==n-1){
		cout<<"Stack is Full "<<endl;
	}
	else{
		Top++;
		stack[Top]=value;
	}
}
void pop()
{
	int value;
	if(Top==-1){
		cout<<"Stack is Empty"<<endl;
	}
	else
	{
		value=stack[Top];
		Top--;
		cout<<"Pop out value from stack is "<<value<<endl;
	}
}
void top()
{
	if(Top==-1){
		cout<<"Stack is empty is no top"<<endl;
	}
	else
	{
		cout<<"Top value in stack is:"<<stack[Top]<<endl;
	}
}
void display(){
	if(Top==-1){
		cout<<"Stack is empty there is no top "<<endl;
	}
	else
	{
		for(int i=Top;i>=0;i--)
		{
			cout<<stack[i]<<" ";
		}
	}
}
