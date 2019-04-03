#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;
struct gluposti
{
	int nomer;
	string ime, model, firma;
	double cena;
};
struct firma
{
	int nomerFirma, brojModeli;
	string ime;
};
int menu()
{
	int k;
	do
	{
        system("cls");
		cout<<"otbori"<<endl;
		cout<<"izberete otbor"<<endl;
		cout<<"   1 - dobavete otbor"<<endl;
		cout<<"   2 - napishete nomer na igracha"<<endl;
		cout<<"   3 - Tyrsene na konkreten  igrach"<<endl;
		cout<<"   4 - Sprawka na otborite v koito igrae"<<endl;
		cout<<"   5 - Sprawka na igracha v daden otbor"<<endl;
		cin>>k;
		cout<<k;
	}
	while(1<=k && k<=5);
	return k;
}
//--------------------------------------
void addTel ()
{
	gluposti x;
	cout<<"Tyka li si"<<endl;
	ofstream fout_tel("igach.txt", ios::app);
	cin>>x.nomer>>x.ime>>x.model>>x.cena>>x.firma;
	fout_tel<<x.nomer<<" "<<x.ime<<" "<<x.model<<" "<<x.cena<<" "<<x.firma<<endl;
	fout_tel.close();
}
void addFirma()
{
	firma y;
	int ok=1;
	ofstream fout_firma("otbor.txt", ios::app);
	while(ok==1)
	{
		cin>>y.nomerFirma>>y.ime>>y.brojModeli;
		fout_firma<<y.nomerFirma<<" "<<y.ime<<" "<<y.brojModeli<<endl;
		cout<<"Shte dobavqte li oshte igrachi? 1-da, 0-ne";
		cin>>ok;
	}
}
void tyrsiTel()
{
	string myTel;
	ifstream fin_tel("igrach.txt", ios::in);
	cout<<"Vavedete nomer na igracha";
	cin>>myTel;
	gluposti x;
	int br=0;
	while (! fin_tel.eof())
	{
		fin_tel>>x.nomer>>x.ime>>x.model>>x.cena>>x.firma;
		if (myTel==x.ime)
		{
			cout<<x.model<<" "<<x.cena<<" "<<x.firma;
			br++;
			fin_tel.close();
		}
		cout<<br<<endl;
	}
}
void tyrsiFirma()
{
	string myFirma;
	ifstream fin_firma("otbor.txt", ios::in);
	cout<<"Vavedete Tyrsenq otbor";
	cin>>myFirma;
	firma y;
	int br=0;
	while (! fin_firma.eof())
	{
		fin_firma>>y.nomerFirma>>y.ime>>y.brojModeli;
		if(myFirma==y.ime)
		{
			cout<<y.brojModeli;
			br++;
			fin_firma.close();
		}
		cout<<br<<endl;
	}
}
void telFirma()
{

}
int main()
{
	int ok;
	do
	{
		int ch=menu();
		cout<<ch;
		switch (ch)
		{
			case 1:{addTel(); break;}
			case 2:{addFirma(); break;}
			case 3:{tyrsiTel(); break;}
			case 4:{tyrsiFirma(); break;}
			case 5:{telFirma(); break;}
			default: ok=6;
		}
		cout<<"Jelaete li da prodyljite?  1 - Da, 0 - Ne"<<endl;
		cin>>ok;
	}
	while(ok==1);
	cout<<"Chao"<<endl;
}
