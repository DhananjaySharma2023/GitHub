#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node
{
	public:
		int value;
		Node* Next;
};
int main()
{
	Node* Head;                  //Making Objects
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
	
	Head = one;
	while(Head !=NULL)
	{
		cout<<Head->value<<"\2t";
		Head=Head->Next;
	}
	return 0;
}
