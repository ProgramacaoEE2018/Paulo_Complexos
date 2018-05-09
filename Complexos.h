#include <bits/stdc++.h>

using namespace std;

class Complexo//z=real+ i * im
{
private:
    float im;
    float real;
public:
    Complexo(float real,float im){
        this->real=real;
        this->im=im;
    }
    float Modulo(){return (sqrt(real*real+im*im));}
    Complexo Conjugado(){return Complexo(real,-im);}
    Complexo operator+(Complexo N){return Complexo(real+N.real,im+N.im);};
    Complexo operator-(Complexo N){return Complexo(real-N.real,im-N.im);};
    Complexo operator*(Complexo N){return Complexo((real*N.real-im*N.im),(real*N.im+im*N.real));};
    Complexo operator/(Complexo N){Complexo B(0,0); B=Complexo(real,im)*N.Conjugado();return Complexo(B.real/(N.Modulo()*N.Modulo()),B.im/(N.Modulo()*N.Modulo()));};
};
