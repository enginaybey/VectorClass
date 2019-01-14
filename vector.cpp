#include "vector.h"

namespace vctr
{
template <class T>
vector<T>::vector(){n=0;}
template <class T>
vector<T>::vector(int N){
        n=N;
        p=new T[n];
    }
template <class T>	
void vector<T>::setvector(){
        double r=0.0;
		for (int i=0;i<n;i++){
			p[i]=(T)(r+1.0);
            r=r+1.0;	
		}
	}
template <class T>	
int vector<T>::getn(){
           return n;
    }
template <class T>    
T vector<T>::getitem(int a){
           return p[a];
    }
template <class T>    
T* vector<T>::getvector(){
           return p;
    }
template <class T>   
vector<T> vector<T>::copy(vector& c){
        int n=c.getn();
        for (int i=0;i<n;i++){
			this->p[i]=c.p[i] ;	
		}
		return *this;
        }
    
// +, -, *, / operators between vector and double.
template <class T>
vector<T> vector<T>::operator+(T& b) {
           int n=this->getn();
           vector f(n);
           for (int i=0;i<n;i++){
               f.p[i]=this->p[i] + b;
           }
           return f;
    }
template <class T>    
vector<T> vector<T>::operator-(T& b) {
           int n=this->getn();
           vector f(n);
           for (int i=0;i<n;i++){
               f.p[i]=this->p[i] - b;
           }
           return f;
    }
template <class T>
vector<T> vector<T>::operator*(T& b) {
           int n=this->getn();
           vector f(n);
           for (int i=0;i<n;i++){
               f.p[i]=this->p[i] * b;
           }
           return f;
    }
template <class T>
vector<T> vector<T>::operator/(T& b) {
           int n=this->getn();
           vector f(n);
           for (int i=0;i<n;i++){
               f.p[i]=this->p[i] / b;
           }
           return f;
    }
    
// +, -, * (as dot product) operators between vector and vector.
template <class T>
vector<T> vector<T>::operator+(vector& b) {
           int n=b.getn();
           vector f(n);
           for (int i=0;i<n;i++){
               f.p[i]=this->p[i] + b.p[i];
           }
           return f;
    }
template <class T>
vector<T> vector<T>::operator-(vector& b) {
           int n=b.getn();
           vector f(n);
           for (int i=0;i<n;i++){
               f.p[i]=this->p[i] - b.p[i];
           }
           return f;
    }
template <class T>
double vector<T>::operator*(vector& b) {
           double g=0.0;
           for (int i=0;i<n;i++){
               g = g + this->p[i] * b.p[i];
           }
           return g;
    }
template <class T>  
vector<T>::~vector(){}
	
// +, -, *, / operators between double and vector.
template <class R>
vector<R> operator+(R& u,vector<R>& b) {
           int n=b.getn();
           vector<R> f(n);
           for (int i=0;i<n;i++){
               f.getvector()[i]=u+b.getitem(i);
           }
           return f;
}
template <class R>
vector<R> operator-(R& u,vector<R>& b) {
           int n=b.getn();
           vector<R> f(n);
           for (int i=0;i<n;i++){
               f.getvector()[i]=u-b.getitem(i);
           }
           return f;
}
template <class R>
vector<R> operator*(R& u,vector<R>& b) {
           int n=b.getn();
           vector<R> f(n);
           for (int i=0;i<n;i++){
               f.getvector()[i]=u*b.getitem(i);
           }
           return f;
}
template <class R>
vector<R> operator/(R& u,vector<R>& b) {
           int n=b.getn();
           vector<R> f(n);
           for (int i=0;i<n;i++){
               f.getvector()[i]=u/b.getitem(i);
           }
           return f;
}
}/*namespace vctr*/
