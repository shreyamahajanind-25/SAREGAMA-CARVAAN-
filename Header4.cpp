#include"Header4.h"
bool CircularLL::play()
{
	node6 *t = cursor;
	string song;
	cout << "Enter the name of the song which you want to play" << endl;
	cin >> song;
	while (t->data != song)
	{
		t = t->next6;
	}
	if (t->data != song)
	{
		cout << "no song in a list " << endl;
		return false;
	}
	else
	{
		cout << "\n\t\t\tNow Playing  " << song << endl;
		return true;
	}
}
void CircularLL::print()
{
	node6 *r = cursor->next6;
	///	node6 *pre=cursor;
	while (r != cursor){

		cout << "the songs are  " << r->data << endl;
		r = r->next6;
	}
}
CircularLL::CircularLL()      // constructor
: cursor(NULL) { }
void CircularLL::backsong(){
	if (empty())
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		string c;
		c = cursor->data;
		cout << "the back element is " << c << endl;
		//return 0;
	}
}
void CircularLL::frontsong(){
	if (empty())
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		string cur = " ";


		cur = cursor->next6->data;
		cout << "THE FRONT ELEMENT IS " << cur << endl;
		//return ;
	}
}
bool CircularLL::empty(){

	if (cursor == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}

}
void CircularLL::nextsong(){
	if (empty())
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		cursor = cursor->next6;
		cout << "cursors is now " << cursor->data << endl;
	}
}
void CircularLL::add(string ele){
	node6 *q = new node6;
	q->data = ele;
	if (empty())
	{
		q->next6 = q;
		cursor = q;
		cout << "node is inserted in empty list" << endl;
	}
	else
	{

		q->next6 = cursor->next6;
		cursor->next6 = q;

	}

}
void CircularLL::addAfter(string r){
	node6 *y = new node6;
	cout << "enter the value in node" << endl;
	cin >> y->data;
	if (r == cursor->data)
	{
		cursor->next6 = y;
		y->next6 = cursor->next6;
		cursor = y;
	}
	else{
		while (!searchsong(r))
		{
			cursor = cursor->next6;
		}
		cursor->next6 = y;
		y->next6 = cursor->next6;
		cursor = y;
	}
}



void CircularLL::remove(){
	if (empty())
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		node6 *temp = cursor->next6;
		if (temp == cursor)
		{
			cursor = NULL;
		}
		else
		{
			cursor->next6 = temp->next6;
			delete temp;
		}

	}
}
bool CircularLL::searchsong(string e){
	if (empty())
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{

		if (e != cursor->data)
		{
			cout << "value is  not found" << endl;
		}
		else
		{
			while (e != cursor->data)
			{

				cursor = cursor->next6;

			}
			cout << "value is found" << endl;

		}
	}
	return 0;
}
