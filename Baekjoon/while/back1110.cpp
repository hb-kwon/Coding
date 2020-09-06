#include <iostream>

using namespace std;

int main(){
	int N,NNo, NNt, NN;
	int cnt=0;
	
	cin >> N;
	if(N>=0 && N<=99){
		NNo = ((N%10) + 0.1*(N%100));
		NNt = 10*(N%10);
		NN = NNt + NNo%10;
		while(1){
			cnt++;
			if(N==NN) break;
			NNo = ((NN%10) + 0.1*(NN%100));
			NNt = 10*(NN%10);
			NN = NNt + NNo%10;
	
		}
	}
	cout << cnt << endl;
	return 0;
} 
