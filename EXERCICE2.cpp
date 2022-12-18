#include<iostream>
#include<list>

using namespace std;
string mois_chercher(string m){
    string mois;
  if(m =="01"){
     mois = "Janvier "; 
  }

    else if(m =="02"){ 
     mois = "fevrier "; 
  }
      else if(m =="03"){ 
     mois = "mars"; 
  }

     else if(m =="04"){ 
     mois = "avril"; 
  }

      else if(m =="05"){ 
     mois = "mai"; 
  }

      else if(m =="06"){ 
     mois = "juin"; 
  }

      else if(m =="07"){ 
     mois = "juillet"; 
  }

      else if(m =="08"){ 
     mois = "août"; 
  }

       else if(m =="09"){ 
     mois = "septembre"; 
  }

     else if(m =="10"){ 
     mois = "octobre"; 
  }

      else if(m =="11"){ 
     mois = "novembre"; 
  }

     else if(m =="12"){ 
     mois = "décembre"; 
  }

  return mois;


}
int main(){

 string chaine;
 string jour;
 string mois;
 string annee;
 string houre;
 string minute;
cout<<"donne une chaine de caracteres de sous forme JJMMAAAAHHNN ";
cin>>chaine;
  for(int i = 0 ;i < 2 ; i++ ){
    jour+=chaine[i];
  }
    for(int i = 2 ;i < 4 ; i++ ){
    mois+=chaine[i];
  }
      for(int i = 4 ;i < 8 ; i++ ){
    annee+=chaine[i];
  }
       for(int i = 8 ;i < 10 ; i++ ){
    houre+=chaine[i];
  }
       for(int i = 10 ;i < 12 ; i++ ){
    minute+=chaine[i];
  }
cout<<jour<<" er "<<mois_chercher(mois)<<" "<<annee<<" a "<<houre<<"h"<<minute;
    return 0;
}
