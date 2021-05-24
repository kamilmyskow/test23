// 
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
/*	if (a > b) maximum = a;
	if (a > c) maximum = a;
	if (a < b) maximum = b;
	if (a < c) maximum = c;
	if (b > c) maximum = b;
	if (c > b) maximum = c;
*/
	return maximum;

}





int main()
{
	cout << spr_max(-1, 8, 1)<<endl;
	
	return 0;
}
