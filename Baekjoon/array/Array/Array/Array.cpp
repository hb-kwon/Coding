#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100;
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
}
