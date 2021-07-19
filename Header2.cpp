#include"Header2.h"
void Stack::lastsong()
{
	if (head2 == NULL)
	{

		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		Node2 *y = head2;
		while (y->Next2 != NULL)
		{

			y = y->Next2;
		}
		cout << "THE LAST SONG IS  " << y->num << endl;
	}

}
void Stack::firstsong()
{
	if (head2 == NULL)
	{
		cout << "list is empty" << endl;
	}
	else
	{
		Node2 *q = head2;
		cout << "THE FIRST SONG IS   " << q->num << endl;
	}
}
void Stack::next_song()
{
	if (head2 == NULL)
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{

		Node2 *f = head2;
		f = head2->Next2;
		cout << "THE NEXT SONG IS  " << f->num << endl;
	}
}
bool Stack::play()
{

	Node2 *t = head2;
	string song;
	cout << "Enter the name of the song which you want to play" << endl;
	cin >> song;
	bool flag = false;
	while (t!=NULL)
	{
		if (t->num == song)
		{
			flag = true;
			break;
		}
		t = t->Next2;
	}
	if (!flag){
		cout << "No songs in the list";
		return false;
	}
	else
	{
		cout << "\n\t\t\tNow Playing  " << song << endl;
		return true;

	}
}
void Stack::print()
{
	Node2 *r = head2;
	while (r != NULL)
	{
		cout << "THE SONG IS  " << r->num << endl;
		r = r->Next2;


	}



}
Stack::Stack()
{
	this->head2 = NULL;
}

void Stack::pushsong(string num2)
{

	Node2 *N = new Node2();
	N->num = num2;
	N->Next2 = head2;
	head2 = N;


}

int Stack::popsong()
{

	if (head2 != NULL)
	{
		string num2;
		Node2 *temp = head2;
		head2 = temp->Next2;
		num2 = temp->num;
		delete temp;
		return 'num2';
	}
	else
	{
		cout << "Stack is empty " << endl;
	}
	return -1;
}

