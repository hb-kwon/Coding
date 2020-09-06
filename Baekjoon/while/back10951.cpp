#include <iostream>

using namespace std;

int main(){
	int A, B;
	
	while(1){
		cin >> A >> B;
		
		if(cin.eof() == true) break;
		//if(cin>>A>>B) A의B의 입력값이 있어야 true 
		
		cout << A + B << endl;
	}
	return 0;
}
