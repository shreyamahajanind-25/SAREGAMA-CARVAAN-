#include<iostream>
#include<fstream>
#include"Header3.h"
#include"Header1.h"
#include"Header2.h"
#include"Header.h"
#include"Header4.h"
#include<stdlib.h>
#include<windows.h>

using namespace std;
unsigned char ld = 222;

void PrintLoading()
{
	system("COLOR FC");

	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\tLoading Music Player";
	cout << "\n\t\t\t\t ";
	for (int i = 0; i<18; i++){
		cout << ld;
		Sleep(200);
	}
	system("cls");
}
int main()
{
	CircularLL cir;
	que  obj1;
	dnode obj;
	Stack obj2;
	node3 obj3;
	
	PrintLoading();
	system("COLOR 0F");
	cout << endl << " \t\t\tMusic Player MENU" << endl << endl << endl;
	cout << "\t SELECT THE MODE WHERE YOU WANT TO PLAY THE SONGS" << endl << endl;
	cout << "\t\t Press 1 for Doubly Linklist" << endl;
	cout << "\t\t Press 2 for Queue " << endl;
	cout << "\t\t Press 3 for Stack " << endl;
	cout << "\t\t Press 4 for Singly Linkedlist " << endl;
	cout << "\t\t Press 5 for Circular Linklist" << endl;
	cout << "\t\t Press 6 for Exit " << endl << endl;
	int q;
	cin >> q;
	switch (q)
	{
	case 1:

		while (1)
		{
			system("COLOR 18");
			cout << "1.Add Front" << endl;
			cout << "2.Add Last" << endl;
			cout << "3.Count " << endl;
			cout << "4.Get Front" << endl;
			cout << "5.Get Last" << endl;
			cout << "6.Print" << endl;
			cout << "7.plays" << endl;
			cout << "8.NEXT SONG" << endl;
			cout << "9.Exit" << endl;
			int a;
			cin >> a;
			switch (a)
			{
			case 1:{
					   obj.addfront("Elastic_heart");
					   obj.addfront("Diamonds");
					   obj.addfront("Firestrom");
					   obj.addfront("Blank_space");
					   obj.addfront("Hurricane");
					   obj.addfront("Animals");
					   obj.countnodes();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 2:{
					   obj.addlast("Sugar");
					   obj.addlast("Fancy");
					   obj.addlast("I_luh_you_papi");
					   obj.addlast("International_Love");
					   obj.countnodes();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 3:{
					   obj.countnodes();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 4:{
					   obj.getfrontelem();
					   obj.countnodes();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 5:{
					   obj.getlastelement();
					   obj.countnodes();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 6:{
					   obj.print();
					   obj.countnodes();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}

			case 7:{
					   
					   if (obj.play()){
						   cout << endl;
						   cout << "\t\t\t";
						   for (int i = 0; i < 25; i++){
							   cout << ld;
							   Sleep(500);
						   }
						   system("cls");
					   }
					   system("pause");
					   system("CLS");

					   break;
			}

			case 8:{
					   obj.nextsongg();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 9:{
					   exit(0);
			}
			}
		}
		break;
		cout << endl;
		system("pause");
		system("CLS");
		break;
	case 2:
		while (1)
		{
			system("Color 5E");
			cout << "1.Enqueue" << endl;
			cout << "2.Dequeue" << endl;
			cout << "3.Print" << endl;
			cout << "4.PLAY" << endl;
			cout << "5.NEXT SONG" << endl;
			cout << "6.FIRST SONG" << endl;
			cout << "7.LAST SONG" << endl;
			cout << "8.Exit" << endl;
			int a;
			cin >> a;
			switch (a)
			{
			case 1:{
					   obj1.inque("Diamonds");
					   obj1.inque("Elastic_heart");
					   obj1.inque("Firestrom");
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 2:{
					   obj1.deque();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 3:{
					   obj1.print();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 4:{
					   if (obj1.PLAY()){
						   cout << endl;
						   cout << "\t\t\t";
						   for (int i = 0; i < 25; i++){
							   cout << ld;
							   Sleep(500);
						   }
						   system("cls");
					   }
					   system("pause");
					   system("CLS");
					   break;
			}
			case 5:{
					   obj1.nextsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 6:{
					   obj1.getfirstsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 7:{
					   obj1.lastsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 8:{
					   exit(0);
			}
			}
		}
		cout << endl;
		system("pause");
		system("CLS");
		break;
	case 3:
		while (1)
		{
			system("Color A1");
			cout << "1.Push Song" << endl;
			cout << "2.Pop Song" << endl;
			cout << "3.Print" << endl;
			cout << "4.PLAY" << endl;
			cout << "5.NEXT SONG" << endl;
			cout << "6.FIRST SONG" << endl;
			cout << "7.LAST SONG" << endl;
			cout << "8.Exit" << endl;
			int a;
			cin >> a;
			switch (a)
			{
			case 1:{
					   obj2.pushsong("Animals");
					   obj2.pushsong("Billionera");
					   obj2.pushsong("International_love");
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 2:{
					   obj2.popsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 3:{
					   obj2.print();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 4:{
					   if (obj2.play()){
						   cout << endl;
						   cout << "\t\t\t";
						   for (int i = 0; i < 25; i++){
							   cout << ld;
							   Sleep(500);
						   }
						   system("cls");
					   }
					   system("pause");
					   system("CLS");
					   break;
			}
			case 5:{
					   obj2.next_song();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 6:{
					   obj2.firstsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 7:{
					   obj2.lastsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 8:{
					   exit(0);
			}
			}
		}
		cout << endl;
		system("pause");
		system("CLS");
		break;
	case 4:
		while (1)
		{
			system("Color B2");
			cout << "1.Add Song at Front" << endl;
			cout << "2.Add song at Last" << endl;
			cout << "3.Count Songs" << endl;
			cout << "4.Get Front song" << endl;
			cout << "5.print" << endl;
			cout << "6.Delete Last Song" << endl;
			cout << "7.Search" << endl;
			cout << "8.Delete First Song" << endl;
			cout << "9.Delete Last Song" << endl;
			cout << "10.PLay" << endl;
			cout << "11.NEXT SONG" << endl;
			cout << "12.Exit" << endl;
			int a;
			cin >> a;
			switch (a)
			{
			case 1:{
					   obj3.addsongfirst("Billionera");
					   obj3.addsongfirst("Animals");
					   obj3.addsongfirst("Fancy");
					   obj3.addsongfirst("Low");
					   obj3.addsongfirst("Titanium");
					   obj3.countnodessong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 2:{
					   obj3.insertsong("chandelier");
					   obj3.insertsong("Accapala");
					   obj3.insertsong("Beauty_and_a_beat");
					   obj3.insertsong("Party_rock_anthem");
					   obj3.insertsong("Lancer");
					   obj3.insertsong("Whistle");
					   obj3.insertsong("Got_to_love_ya");
					   obj3.countnodessong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 3:{

					   obj3.countnodessong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 4:{
					   obj3.getfrontsong();
					   obj3.countnodessong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 5:{
					   obj3.print();
					   obj3.countnodessong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 6:{
					   obj3.deletelastsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 7:{
					   obj3.searchsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 8:{
					   obj3.deletfirstsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 9:{
					   obj3.deletelastsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 10:{
						if (obj3.play()){
							cout << endl;
							cout << "\t\t\t";
							for (int i = 0; i < 25; i++){
								cout << ld;
								Sleep(500);
							}
							system("cls");
						}
						system("pause");
						system("CLS");
						break;
			}
			case 11:{
						obj3.nextsong();
						cout << endl;
						system("pause");
						system("CLS");
						break;
			}
			case 12:{
						exit(0);
			}
			}
		}
		cout << endl;
		system("pause");
		system("CLS");
		break;
	case 5:
		while (1)
		{
			system("Color F0");
			cout << "1.Add" << endl;
			cout << "2.Front Song" << endl;
			cout << "3.Search Song" << endl;
			cout << "4.NextSong" << endl;
			cout << "5.Remove Front" << endl;
			cout << "6.Last Song" << endl;
			cout << "7.Add After" << endl;
			cout << "8.Print" << endl;
			cout << "9.play" << endl;
			cout << "10.Exit" << endl;
			int optt;
			cin >> optt;
			switch (optt)
			{
			case 1:{
					   cir.add("Survival");
					   cir.add("Super_bass");
					   cir.add("Wrecking_ball");
					   cir.add("Troublemaker");
					   cir.add("bang_bang");
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 2:{
					   cir.frontsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 3:{
					   cir.searchsong("Survival");
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 4:{
					   cir.nextsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 5:{
					   cir.remove();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 6:{
					   cir.backsong();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 7:{
					   cir.addAfter("Troublemaker");
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 8:{
					   cir.print();
					   cout << endl;
					   system("pause");
					   system("CLS");
					   break;
			}
			case 9:{
					   if (cir.play()){
						   cout << endl;
						   cout << "\t\t\t";
						   for (int i = 0; i < 25; i++){
							   cout << ld;
							   Sleep(500);
						   }
						   system("cls");
					   }
					   system("pause");
					   system("CLS");
					   break;
			}
			case 10:{
						exit(0);
			}
			}
		}
	case 6:{
			   exit(0);
	}
	}
	return 0;
}