#include <iostream>

using namespace std;

class Complexe {


public :              
    float img;
    float rel;


    Complexe(){};            
    Complexe(float img,float rel){
     this->img=img;
     this->rel=rel;
	 };

  Complexe operator-(Complexe C){ 
    Complexe S;
    S.img=img-C.img;
    S.rel=rel-C.rel;

    return S;}

Complexe operator/(Complexe C){ 
 Complexe D; 
    D.img=img/C.img;
    D.rel=rel/C.rel;
    return D;
	}

Complexe operator*(Complexe C){  
    
    Complexe M;
    M.img=img*C.img;
    M.rel=rel*C.rel;
	return M;}


 Complexe operator+(Complexe C){   
   
    Complexe A;
    A.img=img+C.img;
    A.rel=rel+C.rel;
	return A;}};
int main()
{
    float x1,y1;
    float x2,y2;

    cout<<"Entrer la valeur du partie reel du premier nombre complexe = ";
    cin>>x1;
    cout<<"Entrer la valeur du partie imaginaire du premier nombre complexe = ";
    cin>>y1;

    cout<<"Entrer la valeur du partie imaginaire du deuxieme nombre complexe =";
    cin>>x2;
    cout<<"Entrer la valeur du partie reel du deuxieme nombre complexe =";
    cin>>y2;


   Complexe c1(x1,y1);
    cout<<"le premier nombre complexe est : "<<c1.rel<<"+"<<c1.img<<"i"<<"\n"<<endl;
   Complexe c2(x2,y2);
    cout<<"le deuxieme nombre complexe est :"<<c2.rel<<"+"<<c2.img<<"i"<<"\n"<<endl;

   Complexe c3;
    char operation;
    cout<<"Entrer l'operation (+,-,*,/)"<<endl;
    cin>>operation;
  if(operation=='+'){
   c3=c1+c2;

    cout<<"l'addition des deux nombre complexe est :"<<c3.rel<<"+"<<c3.img<<"i"<<"\n"<<endl;}
 if(operation=='-'){
   c3=c1-c2;

  cout<<"la soustraction des deux nombre complexe est :"<<c3.rel<<"+"<<c3.img<<"i"<<"\n"<<endl;}
if(operation=='*'){
   c3=c1*c2;

  cout<<"le produit des deux nombre complexe est :"<<c3.rel<<"+"<<c3.img<<"i"<<"\n"<<endl;}

if(operation=='/'){
   c3=c1/c2;

  cout<<"la division des deux nombre complex est :"<<c3.rel<<"+"<<c3.img<<"i"<<"\n"<<endl;}
    return 0;
} 
