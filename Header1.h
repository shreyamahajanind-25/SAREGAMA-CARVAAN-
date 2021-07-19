#include <iostream>
#include<string>
using namespace std;

class node1
{
public:
	
	string num;
	node1 *next1;

};

class que
{
   public:
	node1 *head1;
    void getfirstsong(); 
	void lastsong();
	que();
	void  inque(string num);
	int deque();
	bool PLAY();
	void nextsong();
	void print();
};
