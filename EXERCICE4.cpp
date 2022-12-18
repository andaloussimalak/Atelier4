#include<iostream>
#include<list>

using namespace std;

int main(){
    string nom;
    string prenom;
    string age;
    int i=0;
   list<string>liste1;

           cout<<"choisis le nom";
           cin>>nom;
           liste1.push_back(nom);

               cout<<"choisis le prenom";
               cin>>prenom;
               liste1.push_back(prenom);

           cout<<"choisis l age";
           cin>>age;
           liste1.push_back(age);
          liste1.sort();


    for( list <string>::iterator it = liste1.begin();it!=liste1.end();it++){
        cout<<*it<<" ";
    }

    return 0;
}
