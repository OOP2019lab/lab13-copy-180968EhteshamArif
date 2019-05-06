
#include<iostream>
using namespace std;
template<typename T>
//class pair
class Pair
{
	T values[2];
public:
	Pair(T a, T b);
	T GetMax();
	T GetMin();
	friend ostream& operator<<(ostream& os,Pair& p)
	{
		os<<p.values[0]<<','<<p.values[1]<<endl;
		
		return os;
	}
};
template<typename T>
//Constructor
Pair <T>::Pair(T a, T b)
{
	values[0]=a;
	values[1]=b;
}
template<typename T>
//Get maximum function
T Pair<T>::GetMax()
{
	if(values[0]>values[1])
	{
		return values[0];
	}
	return values[1];
}
//Get Min value
template<typename T>
T Pair<T>::GetMin()
{
	if(values[0]<values[1])
	{
		return values[0];
	}
	return values[1];
}
