#include"Header.h"
void dnode::nextsongg()
{
	if (empty())
	{
		cout << "List is Empty" << endl;
	}
	else
	{
		node *E = head;
		E = E->next->next;
		cout << "The Next Song is " << E->ele << endl;



	}
}
bool dnode::play()
{
	if (empty())
	{
		cout << "List is Empty" << endl;
	}
	else
	{
		 node *t = head;
		string song;
		cout << "Enter the name of the song which you want to play" << endl;
		cin >> song;
		bool flag = false;
		while (t != NULL)
		{
			if (t->ele == song)
			{
				flag = true;
				break;
			}
			
			t = t->next;

		}
		if (!flag)
		{
			cout << "No song in a list " << endl;
			//	break;
			return false;
		}
		else
		{
			cout << "\n\t\t\tNow Playing  " << song << endl;
			return true;
		}

	}
}
void dnode::getlastelement()
{
	if (empty())
	{
		cout << "List is empty" << endl;
	}
	else
	{
		if (empty())
		{
			cout << "List is empty" << endl;
		}
		else
		{
			node *y = head;
			while (y->next != tail)
			{

				y = y->next;
			}
			cout << " The Last Song is " << y->ele << endl;

		}
	}
}
void dnode::countnodes()
{
	if (empty())
	{
		cout << "List is empty" << endl;
	}
	else
	{
		if (empty())
		{
			cout << "List is empty" << endl;
		}
		else
		{
			node *p = head;
			int count = 0;
			while (p != tail)
			{

				count++;
				p = p->next;
			}
			cout << "The Number of songs are   " << count++ << endl;
		}
	}
}
dnode::dnode(){
	head = new node;
	tail = new node;
	head->next = tail;
	head->pre = nullptr;
	tail->pre = head;
	tail->next = nullptr;
}
bool dnode::empty()
{
	if (head->next == tail && tail->pre == head)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void dnode::addfront(string ele1)
{
	node *k = new node();
	k->ele = ele1;

	if (!empty())
	{

		k->next = head->next;
		k->pre = head->next->pre;
		head->next = k;
		k->next->pre = k;
		//cout<<"SONG is entered in linklist"<<endl;
	}
	else
	{
		head->next = k;
		k->next = tail;
		k->pre = head;
		tail->pre = k;
		//cout<<"Song is entered in empty list"<<endl;

	}
}
void dnode::print()
{
	if (empty())
	{
		cout << "List is empty" << endl;
	}
	else
	{
		if (empty())
		{
			cout << "List is empty" << endl;
		}
		else
		{
			node *h = head->next;
			while (h != tail)
			{

				cout << "The songs are   " << h->ele << endl;

				h = h->next;
			}
		}
	}
}
void dnode::addlast(string ele2){
	node *u = new node();
	node *r = head;
	u->ele = ele2;
	if (!empty())
	{
		while (r->next != tail)
		{
			r = r->next;
		}
		r->next = u;
		u->next = tail;
		u->pre = r;
		tail->pre = u;
	}
	else
	{
		head->next = u;
		u->next = tail;
		u->pre = head;
		tail->pre = u;
		//cout<<"song is entered in empty list"<<endl;
	}

}
void dnode::getfrontelem()
{
	if (empty())
	{
		cout << "List is empty" << endl;
	}
	else
	{
		cout << "The First song is " << head->next->ele << endl;

	}
}