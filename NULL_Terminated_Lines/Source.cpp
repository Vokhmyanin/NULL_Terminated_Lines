#include<iostream>
#include<windows.h>
using namespace std;
int StringLength(const char str[]);
void to_upper(char str[]); //принимает строку и переводит в верхний регистр

void main()
{
	setlocale(LC_ALL, "");
	//char str[] = { 'H','e','l','l','o',0};
	//char str[] = "Hello";
	const int SIZE = 20;
	char str[SIZE] = {};
	cout << "¬ведите строку: ";
	//cin >> str;
	SetConsoleCP(1251);
	cin.getline(str, SIZE);
	SetConsoleCP(866);
	cout << str << endl;
	cout<<"ƒлина введенной строки: "<<StringLength(str)<<endl;
	to_upper(str);
	cout << str;
}
int StringLength(const char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')str[i] -= 32;
}
}