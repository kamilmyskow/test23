// czyszczenie kodu
#include <iostream>
#include <algorithm>
#include "ConsoleApplication1.h"
using namespace std;
int spr_max (int a,int b,int c)
{
	int maximum;
	
	if ((a > b) && (a > c)) maximum = a; //optymalizacja kodu 
	if ((b > a) && (b > c)) maximum = b; //mniej linii daje większą czytelność, mniej warunków lepszą skuteczność
	if ((c > a) && (c > b)) maximum = c; 

	return maximum;

}
int spr_min(int a, int b, int c)
{
	int minimum;

	//optymalizacja kodu 
	if ((a < b) && (a < c)) minimum = a;
	if ((b < a) && (b < c)) minimum = b;
	if ((c < a) && (c < b)) minimum = c;


	return minimum;

}

bool positive(int x) {
	
	if (x >= 0)
		return true;
	else
		return false;
}




int main()
{
	cout << spr_max(-1, 8, 1)<<endl;
	cout << spr_min(-20,-40,-30) << endl; // sprawdzenie poprawności programu
	cout << positive(5) << endl;// sprawdzenie poprawności programu
	return 0;
}
