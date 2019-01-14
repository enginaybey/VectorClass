#ifndef VECTOR_H_
#define VECTOR_H_

namespace vctr
{
template <class T> 

class vector {
private: 
	int n;
	T *p;
	
public:
	vector();
	vector(int N);
    void setvector();
	int getn();
    T getitem(int a);
    T* getvector();
    vector copy(vector& c);
// +, -, *, / operators between vector and double.
    vector operator+(T& b);
    vector operator-(T& b);
    vector operator*(T& b);
    vector operator/(T& b);
// +, -, * (as dot product) operators between vector and vector.
    vector operator+(vector& b);
    vector operator-(vector& b);
    double operator*(vector& b);
	~vector();
 };
 
// +, -, *, / operators between double and vector.
template <class R>
vector<R> operator+(R& u,vector<R>& b);
template <class R>
vector<R> operator-(R& u,vector<R>& b);
template <class R>
vector<R> operator*(R& u,vector<R>& b);
template <class R>
vector<R> operator/(R& u,vector<R>& b);
}/*namespace vctr*/
#endif
