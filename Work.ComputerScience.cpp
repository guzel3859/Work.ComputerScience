#include <iostream>
#include <string>
using namespace std;

int main()
{   //Задача 1.
	cout << "Task 1: Please enter four numbers a, b, c,d";
	int a, b, c, d, i;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	for (i = 10000; i <= 99999; i++)
		if (i % a == b && i % c == d)
			cout << i << " ";

	//Задача 2.
	cout << "\nTask 2: Please enter any one number";
	int m, k, l;
	cin >> m;
	k = 0; l = 1;
	do
	{
		if (m % l == 0) k++;
		l++;
	} while (l <= m);
	if (k == 2) cout << "prime";
	else cout << "composite";

	//Задача 3.
	cout << "\nTask 3:";
	int n[] = { 1, 3 ,5 ,2,97, 30, 22, 14, 44, 32, 9 };
	double s = 0; int o = 0;
	for (int i = 0; i <= 10; i++)
	{
		if (n[i] % 2 == 1)
			s += n[i]; o++;
	}
	s = s / o;
	printf("s= %.2f", s);

}
	