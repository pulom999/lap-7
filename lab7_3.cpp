#include<iostream>
#include<cmath>
using namespace std;

int adiff(int  a, int b) {
  a=a%360;
  b=b%360;
  
  if(a<0){
    a=360+a;
  }
  if(b<0){
    b=360+b;
  }
  int n,x;
  if(a<b){
    n=a;
    x=b;
  }else{
    n=b;
    x=a;
  }
  if(n+180==x){
    return 180;
  }else if(n+180<x){
    return abs(360+n-x);
  }else{
    return abs(x-n);
  }
}
int main(){
  cout << adiff(180,270) <<endl;
  cout << adiff(210,45) <<endl;
  cout << adiff(0,360) <<endl;
  cout << adiff(10,350) <<endl;
  cout << adiff(95,260) <<endl;
  cout << adiff(90,-90) <<endl;
  cout << adiff(1000,280) <<endl;
  cout << adiff(60,244) <<endl;
}