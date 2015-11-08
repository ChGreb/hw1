//  Homework1: fibonacci series
//  Christian Greb  2030036

#include<iostream>

using namespace std;

int main(){
  int N, f0=0, f1=1;
  int f2,f3;
  cout << "Please insert a valid(integer) value for N:" << endl << "N = ";
  cin >> N;
    for(int i=0; i<N-1; i++){
    f2 = f0+f1;
    f0 = f1;
    f1 = f2;
    }
  cout << "The fibonacci number for N=" \
        << N << " is f(" << N << ")= " << f2 << endl;

  return 0;
}
