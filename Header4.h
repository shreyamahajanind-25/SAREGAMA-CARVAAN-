#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class node6{
public:
	string data;
node6 *next6;
};
class CircularLL{
node6 *cursor;
public:
	bool play();
	void print();
CircularLL();                // constructor
bool empty();                // is list empty?
void frontsong();                 // element at cursor
void backsong();                    // element following cursor
void nextsong();                  // advance cursor
void add(string ele);              // add after cursor
void remove();                    // remove node after cursor
void RemoveAfter(string e);           //remove after searching value e
void addAfter(string r);      //search the value key and place new node after that with data e
bool searchsong(string e);              // return true when value fond
};
