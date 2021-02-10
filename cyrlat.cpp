#include <iostream>
#include <string>
using namespace std;

int main ()
{
	char x;
	cout << "enter strange symbol" << endl; cin >> x;
	string latalph="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string cyralph="абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
	if(latalph.find(x) != string::npos)
	{
		cout << "latin" << endl;
	}
	else if(cyralph.find(x) != string::npos)
	{
		cout << "cyryll" << endl;
	}
	else
	{
		cout << "non-latin-nor-cyrill" << endl;
	}
}
