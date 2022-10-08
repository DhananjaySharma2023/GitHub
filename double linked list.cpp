#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node
{
	public:
		int value;
		Node* Next;
		Node* Pre;
};
int main()
{
	Node* Head;  
	Node* Tail;                //Making Objects
	Node* one=NULL;
	Node* two=NULL;
	Node* three=NULL;
	
	one = new Node();               //making  new nodes
	two = new Node();
	three = new Node();
	 
	one->value = 2;                //assigning values
	two->value = 3;
	three->value = 4;
	
	one->Next= two;
	two->Next= three;
	three->Next=NULL;
	
	
	one->Pre= NULL ;
	two->Pre= one;
	three->Pre=two;
	Head = one; 
	Tail = three;
	while(Tail !=NULL)
	{
		cout<<Tail->value<<"\t";
		Tail=Tail->Pre;
	}
	return 0;
}
