#include<iostream>
#include<list>
using namespace std;

int main(){
    int n;
    int i=0;
    string reponse;
   list<int>liste1;
   do{

       cout<<" choisis une entire ";
       cin>>n;
       liste1.push_back(n);
     i++;

   }while(i!=5);

   list <int>::iterator it = liste1.begin();
   liste1.sort();

   for(;it!=liste1.end();it++){
       cout<<*it<<" ";
   }

    return 0;
}
