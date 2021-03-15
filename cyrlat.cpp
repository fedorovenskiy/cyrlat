#include <iostream>
#include <string>
using namespace std;

int main ()
{
        std::ios_base::sync_with_stdio(false);
	std::wcin.imbue(std::locale("ru_RU.UTF-8"));
	wstring x;
	wcout << "enter strange symbol" << endl; wcin >> x;
	int lng=x.size();
	wstring latalph=L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	wstring cyralph=L"абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
	for (int l=0; l<=lng-1; l++)
	  {
	bool s=false;
	for (int i=0; i<=51; i++)
	{
	  if (latalph[i]==x[l]) { wcout << "L"; s=true; }
	}
	for (int j=0; j<=65; j++)
	{
	  if (cyralph[j]==x[l]) { wcout << "C"; s=true; }
	}
	if(s==false) {wcout << "N"; }
	
	  }
	wcout << endl;
	return 0;
}
