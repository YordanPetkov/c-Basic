#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;

struct Player
{
	int godini;
	string ime, familia, otbor;
};
struct Team
{
	int  godina_suzdavane;
	string ime,grad,stadion;
};
int menu()
{
	int k;
	do
	{
        system("cls");
		cout<<"Handball Teams"<<endl;
		cout<<"   1 - dobavete otbor"<<endl;
		cout<<"   2 - dobavete igra4"<<endl;
		cout<<"   3 - Tyrsene na konkreten  igrach"<<endl;
		cout<<"   4 - Sprawka igra4ite v daden otbor"<<endl;
		cout<<"   5 - Spisuk na vsi4ki igra4i"<<endl;
		cout<<"   6 - Spisuk na vsi4ki otbori"<<endl;
		cin>>k;
	}
	while(1>=k && k>=5);
	return k;
}
//--------------------------------------
void addTeam ()
{
	Team x;
	cout<<"Vuvedu :"<<endl;
	cout<<"Ime na otbora"<<endl;
	cin>>x.ime;
	cout<<"Ime na stadiona"<<endl;
	cin>>x.stadion;
	cout<<"Godina na suzdavane"<<endl;
	cin>>x.godina_suzdavane;
	cout<<"Naseleno mqsto"<<endl;
	cin>>x.grad;
	ofstream fout_team("teams.txt", ios::app);
	fout_team<<x.ime<<" "<<x.stadion<<" "<<x.godina_suzdavane<<" "<<x.grad<<endl;
	fout_team.close();
}

void addPlayer ()
{
	Player x;
	cout<<"Vuvedu :"<<endl;
	cout<<"Ime"<<endl;
	cin>>x.ime;
	cout<<"Familia"<<endl;
	cin>>x.familia;
	cout<<"Ime na otbora"<<endl;
	cin>>x.otbor;
	cout<<"Godini"<<endl;
	cin>>x.godini;
	ofstream fout_team("players.txt", ios::app);
	fout_team<<x.ime<<" "<<x.familia<<" "<<x.otbor<<" "<<x.godini<<endl;
	fout_team.close();
}

void tyrsiIgra4()
{
	string Igra4ime,Igra4familia;
	ifstream fin_igra4("players.txt", ios::in);
	cout<<"Vuvedete imeto i faliliqta na igra4a"<<endl;
	cin>>Igra4ime>>Igra4familia;
	Player y;
	while (! fin_igra4.eof())
	{
		fin_igra4>>y.ime>>y.familia>>y.otbor>>y.godini;
		if(Igra4ime==y.ime && Igra4familia==y.familia)
		{
			cout<<y.ime<<" "<<y.familia<<" "<<y.otbor<<" "<<y.godini<<endl;
			fin_igra4.close();
			return;
		}
	}
	cout<<"Nqma takuv igra4"<<endl;
	fin_igra4.close();
}

void sprawkaOtbor()
{
    string Otbor;
	ifstream fin_otbor("teams.txt", ios::in);
	cout<<"Vuvedete imeto na otbora"<<endl;
	cin>>Otbor;
	Team y;
	while (! fin_otbor.eof())
	{
		fin_otbor>>y.ime>>y.stadion>>y.godina_suzdavane>>y.grad;
		if(Otbor==y.ime)
		{
			cout<<y.ime<<" "<<y.stadion<<" "<<y.godina_suzdavane<<" "<<y.grad<<endl;
			fin_otbor.close();
			return;
		}
	}
	cout<<"Nqma takuv otbor"<<endl;
	fin_otbor.close();
}

void spisukIgra4i()
{
    Player y;
	ifstream fin_igra4("players.txt", ios::in);
	while (! fin_igra4.eof())
	{
		fin_igra4>>y.ime>>y.familia>>y.otbor>>y.godini;
			cout<<y.ime<<" "<<y.familia<<" "<<y.otbor<<" "<<y.godini<<endl;
			
    
	}
	fin_igra4.close();
}

void spisukOtbori()
{
    Team y;
	ifstream fin_team("teams.txt", ios::in);
	while (! fin_team.eof())
	{
		fin_team>>y.ime>>y.stadion>>y.godina_suzdavane>>y.grad;
			cout<<y.ime<<" "<<y.stadion<<" "<<y.godina_suzdavane<<" "<<y.grad<<endl;
			
    
	}
	fin_team.close();
}
int main()
{
	int ok=1;
	do
	{
		int ch=menu();
		switch (ch)
		{
			case 1:{addTeam(); break;}
			case 2:{addPlayer(); break;}
			case 3:{tyrsiIgra4(); break;}
			case 4:{sprawkaOtbor(); break;}
			case 5:{spisukIgra4i(); break;}😂

			case 6:{spisukOtbori(); break;}
			default: ok=6;
		}
		cout<<endl;cout<<"Jelaete li da prodyljite?  1 - Da, 0 - Ne"<<endl;
		cin>>ok;
	}
	while(ok==1);
	cout<<"Chao"<<endl;
}