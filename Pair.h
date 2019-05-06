
#include <iostream>

template <typename T>
class Pair{
private:
	T arr[2];
public:
	Pair(T A,T B){
		arr[0]=A;
		arr[1]=B;
	}
	~Pair(){
	}
	Pair(const Pair&):arr[0](Pair.arr[0]),arr[1](Pair.arr[0]){};

	T GetMax (){
		if (arr[0]>arr[1]) return arr[0];
		else return arr[1];
	}

	T GetMin (){
		if (arr[0]>arr[1]) return arr[1];
		else return arr[0];
	}

	friend std::ostream& operator<<(std::ostream& os,const Pair& P){
		cout<<P.arr[0]<<","<<P.arr[1];
		return os;
	}
};
