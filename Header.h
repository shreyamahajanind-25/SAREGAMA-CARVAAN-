
#include<iostream>
#include<string>
using namespace std;

class node{

private:
	string ele;
	node *next;
	node *pre;
friend class dnode;
};
class dnode{

public:

	dnode();
	bool play();
	void nextsongg();
	void getlastelement();
	void getfrontelem();
	void countnodes();
	void addlast(string ele2);
	void addfront(string ele1);
	bool empty();
	void print();
private:
	node *head;
	node *tail;
};
