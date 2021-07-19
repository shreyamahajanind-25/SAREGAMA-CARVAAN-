#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class node3{
public:
 node3()
	 {
		 
	head3=NULL;
	tail3=NULL;
 }	 
 string value;
 void empty();
 void nextsong();
void  insertsong(string value2);
 void addsongfirst(string value1);
void deletfirstsong();
 void deletelastsong();
 void addmiddle();
void print();
 void searchsong();
 bool play();
void getfrontsong();
void countnodessong();
private:
 node3 *next3;
 node3 *head3;
 node3 *tail3;
};
