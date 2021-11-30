#include<iostream>

using namespace std;

int main(){
	
	int i = 0, P[5000], k, result=0,x=0;
	while(x < 5000){
		P[x] = 2*x+1;
		x++;
	}
	cout << "Please input k: ";
	cin>>k;
	if(k>0){
		while(i<5000){
			if((P[i]%k)==0){
				result = result-P[i];
			}else{
				result = result+P[i];
			}i++;
		}
		cout <<"Result = "<<result;
	}else{
		cout<<"Invalid input!!!";
	}
	
	return 0;
}