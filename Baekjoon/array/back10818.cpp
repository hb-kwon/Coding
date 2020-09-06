#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int n, a[n];
	cin >> n;
	srand(time(NULL));
	for(int i=0;i<n;i++)
		a[i] = rand() % 100;
	for(int i=0;i<n;i++)
		cout << a[i] << '\t';
}
