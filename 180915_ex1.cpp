#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
T GetMax (T a,T b){
	if (a>b) return a;
	else return b;
}

template <typename T1,typename T2>
T1 GetMax (T1 a,T2 b){
	if (a>b) return a;
	else return b;
}

template <typename T>
T GetMin (T a,T b){
	if (a>b) return b;
	else return a;
}

template <typename T1,typename T2>
T1 GetMin (T1 a,T2 b){
	if (a>b) return b;
	else return a;
}


int main () 
{
  int i=5, j=6, k;
  long l=10, m=5, n;
  k=GetMax<int>(i,j);
  n=GetMin<long>(l,m);
  cout << k << endl;
  cout << n << endl<<endl<<endl;

  char ci='Z';
  j=6, k;
  l=10, m=5, n;
  k=GetMax<int,long>(ci,m);
  n=GetMin<int,char>(j,l);
  cout << k << endl;
  cout << n << endl;

  system("pause");
  return 0;
}
