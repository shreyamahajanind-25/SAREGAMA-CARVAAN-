#include"Header3.h"
void  node3::nextsong()
{
	if (head3 == NULL)
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		node3 *e = head3;
		e = e->next3;
		cout << "THE NEXT SONG IS  " << e->value<< endl;
	}
}
bool node3::play()
{
	if (head3 == NULL)
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{

		node3 *t = head3;
		string song;
		cout << "Enter the name of the song which you want to play" << endl;
		cin >> song;
		while (t->value != song)
		{
			t = t->next3;

		}
		if (t->value != song)
		{
			cout << "no song in a list " << endl;
			return false;
		}
		else
		{
			cout << "\n\t\t\tNow Playing " << song << endl;
			return true;
		}
	}
}
void node3::getfrontsong()
{
	if (head3 == NULL)
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		node3 obj;
		if (head3 != NULL)
		{

			obj.value = head3->value;
			obj.next3 = NULL;
		}
		else
		{
			cout << "List is empty......\n";
		}
		cout << "first  Song is " << obj.value << endl;
	}

}

void node3::countnodessong()
{
	if (head3 == NULL)
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		int i = 0;
		node3 *current;
		current = head3;
		while (current != NULL)
		{
			i++;
			current = current->next3;
		}
		cout << "THE TOTAL NUMBER OF SONGS  ARE " << i << endl;



	}
}



void node3::empty()
{
	if (head3 == NULL)
	{
		cout << "LIST Is EmPtY" << endl;

	}
	else
		cout << "NOT EMPTY" << endl;



}
void node3::insertsong(string value2){

	node3 *temp = new node3;

	temp->value = value2;
	if (head3 != NULL && tail3 != NULL){
		tail3->next3 = temp;
		tail3 = temp;
	}
	else{
		head3 = temp;
		tail3 = temp;
	}
}

void node3::addsongfirst(string value1)
{

	node3 *cur = new node3();


	cur->value = value1;

	cur->next3 = NULL;
	if (head3 == NULL)
	{
		head3 = cur;;
		cur->next3 = NULL;

	}
	else
	{
		cur->next3 = head3;
		head3 = cur;
	}
}
void node3::addmiddle()
{
	node3 *h = head3;
	node3 *b = new node3;

	cout << "Emter the Song" << endl;
	cin >> b->value;

	b->next3 = 0;
	while ((h != NULL) && (h->next3->value <= b->value))
	{
		h = h->next3;
	}
	b->next3 = h->next3;
	h->next3 = b;
}
void node3::print(){
	node3 *h = head3;
	while (h != NULL){

		cout << "the SONGS ARE     " << h->value << endl;

		h = h->next3;
	}

}
void node3::deletfirstsong()
{
	node3 *pre = new node3;
	pre = head3;
	if (head3 != NULL)
	{
		head3 = head3->next3;
		delete pre;
		cout << "SOng is deleted SUCCESSFULLY" << endl;
	}
	else
	{
		cout << "your list is empty" << endl;
	}

}
void node3::deletelastsong()
{
	if (head3 == NULL)
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		node3 *current = head3;
		node3 *pre = head3;
		while (current->next3 != NULL)
		{


			pre = current;
			current = current->next3;
		}
		pre->next3 = NULL;
		delete current;
		cout << "last SONG IS DELETED" << endl;
	}
}
void node3::searchsong()
{


	node3 *sear = head3;
	string num;
	cout << "Enter the song" << endl;
	cin >> num;
	while (sear != NULL && sear->value != num)
	{
		sear = sear->next3;
	}
	if (sear == NULL || num != sear->value)
	{
		cout << "not found:" << endl;
	}
	else

	if (num == sear->value)
	{

		cout << "found" << endl;

	}
}