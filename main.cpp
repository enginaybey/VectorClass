//============================================================================
// Name        : vector.cpp
// Author      : Engin Aybey
// Version     : 1.1.9
// Copyright   : All rights reserved.
// Description : Vector Class
//============================================================================
#include <iostream>
#include <cstdlib>
#include "vector.h"
#include "vector.cpp"
using namespace std;
using namespace vctr;

int main() {
    int j;
    double v;
    int k=5;  // the size of the vector
    # define my_type double // we can change our vector type from here
    vector<my_type> y(k);
    vector<my_type> x(k);
    my_type w=3;
    
    x.setvector(); // the vector
    y.copy(x); // the copy of the vector
        
    //cout<<&x<<endl;
    //cout<<&y<<endl;

        cout<<"===================O================"<<endl;
    for (j=0;j<k;j++){
        cout <<"x["<<j+1<<"] = "<< x.getitem(j)<<endl;
        }
        cout<<"===================O================"<<endl;
        
    for (j=0;j<k;j++){
        cout <<"y["<<j+1<<"] = "<< y.getitem(j)<<endl;
        
		}
        cout<<"===================O================"<<endl;
        
// +, -, *, / operators between vector and double.          
        vector<my_type> r1(k);
        r1=x+w;
    for (j=0;j<k;j++){
        
        cout <<"x["<<j+1<<"] +"<<" "<<w<<" = "<<r1.getitem(j)<<endl;
        }
        
        cout<<"===================O================"<<endl;
        
        vector<my_type> r2(k);
        r2=x-w;
    for (j=0;j<k;j++){
        
        cout <<"x["<<j+1<<"] -"<<" "<<w<<" = "<<r2.getitem(j)<<endl;
        }

        cout<<"===================O================"<<endl;
        
        vector<my_type> r3(k);
        r3=x*w;
    for (j=0;j<k;j++){
        
        cout <<"x["<<j+1<<"] *"<<" "<<w<<" = "<<r3.getitem(j)<<endl;
        }

        cout<<"===================O================"<<endl;
        
        vector<my_type> r4(k);
        r4=x/w;
    for (j=0;j<k;j++){
        
        cout <<"x["<<j+1<<"] /"<<" "<<w<<" = "<<r4.getitem(j)<<endl;
        }

        cout<<"===================O================"<<endl;
        
// +, -, * (as dot product) operators between vector and vector.
        vector <my_type>r5(k);
        r5=x+y;
    for (j=0;j<k;j++){
        cout <<"x["<<j+1<<"] +"<<" y["<<j+1<<"] = "<<r5.getitem(j)<<endl;
        }

        cout<<"===================O================"<<endl;
        
        vector<my_type> r6(k);
        r6=x-y;
    for (j=0;j<k;j++){
        cout <<"x["<<j+1<<"] -"<<" y["<<j+1<<"] = "<<r6.getitem(j)<<endl;
		}

        cout<<"===================O================"<<endl;
        
        v=x*y;
        cout<<"the dot product of two vectors: "<<endl;
		cout <<"x * y = "<<v<<endl;
		cout<<"===================O================"<<endl;
		
        
// +, -, *, / operators between double and vector.
        vector<my_type> h1(k);
        h1=w+x;
    for (j=0;j<k;j++){
        
        cout <<" "<<w<<" + "<<"x["<<j+1<<"] = "<<h1.getitem(j)<<endl;
        }
        
        cout<<"===================O================"<<endl;
        
        vector<my_type> h2(k);
        h2=w-x;
    for (j=0;j<k;j++){
        
        cout <<" "<<w<<" - "<<"x["<<j+1<<"] = "<<h2.getitem(j)<<endl;
        }
        
        cout<<"===================O================"<<endl;
        
        vector<my_type> h3(k);
        h3=w*x;
    for (j=0;j<k;j++){
        
        cout <<" "<<w<<" * "<<"x["<<j+1<<"] = "<<h3.getitem(j)<<endl;
        }
        
        cout<<"===================O================"<<endl;
        
        vector<my_type> h4(k);
        h4=w/x;
    for (j=0;j<k;j++){
        
        cout <<" "<<w<<" / "<<"x["<<j+1<<"] = "<<h4.getitem(j)<<endl;
        }
        
        cout<<"===================O================"<<endl;
     
     system("PAUSE");
     return 0;
   
}
