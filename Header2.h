#include<iostream>
#include<string>
using namespace std;

class Node2
{
public:
  string num;
   Node2 *Next2;
};

class Stack
{
public: 

	Node2 *head2;
	Stack();
	void firstsong();
	void pushsong(string num2);
	int  popsong();
	void print();
	bool play();
	void lastsong();
	void next_song();
};
