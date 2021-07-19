#include"Header1.h"
void que::lastsong()
{
	if (head1 == NULL)
	{
		cout << "List is empty" << endl;
	}
	else
	{
		node1 *g = head1;
		while (g->next1 != NULL)
		{
			g = g->next1;
		}
		cout << "THE LAST SONG IS  " << g->num << endl;
	}

}
void que::getfirstsong()
{
	if (head1 == NULL)
	{
		cout << "List is empty" << endl;
	}
	else
	{

		node1 *d = head1;
		cout << "First song is  " << d->num << endl;

	}

}
void que::nextsong()
{
	if (head1 == NULL)
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		node1 *r = head1;
		r = r->next1;
		cout << "THE NEXT SONG IS " << r->num << endl;
	}


}
bool que::PLAY()
{

	node1  *t = head1;
	string song;
	cout << "Enter the name of the song which you want to play" << endl;
	cin >> song;
	bool flag = false;
	while (t!=NULL)
	{
		if (t->num == song){
			flag = true;
			break;
		}
		t = t->next1;
	}
	if (!flag)
	{
		cout << "No songs in the list " << endl;
		return false;
	}
	else
	{
		cout << "\n\t\t\tNow Playing  " << song << endl;
		return true;
	}
}

void que::print()
{

	node1 *y = head1;
	while (y != NULL)
	{

		cout << "THE SONG IS  " << y->num << endl;
		y = y->next1;
	}

}

que::que()
{
	this->head1 = NULL;
}

void que::inque(string num1)
{
	node1 *n = new node1;
	n->num = num1;
	n->next1 = head1;
	head1 = n;
}
int que::deque()
{
	if (head1 != NULL)
	{
		string num1;
		node1 *temp1 = head1;
		node1 *temp2 = head1;

		while (temp1->next1 != NULL)
		{
			temp2 = temp1;
			temp1 = temp1->next1;
		}


		if (temp1 == head1)
		{
			head1 = NULL;
			num1 = temp1->num;
			delete temp1;
		}
		else{
			num1 = temp1->num;
			temp2->next1 = NULL;
			delete temp1;

		}

		return 'num';
	}
	else
	{
		cout << "Stack is empty" << endl;
	}
	return -1;
}
