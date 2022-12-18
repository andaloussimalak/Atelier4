/*#include<iostream>
#include<list>

using namespace std;

class Repas ;
class Entraineur;
class Compitition ;
class Elments;

class Animal{

protected:
string nom;
int age;
string genre;

void setAtta(string nom1 , int age1 ,string genre1 ){
nom=nom1; age=age1; genre=genre1;
}

};
class Chat : public Animal{

private:
string type ;
public:

void sauter();

};
class Race {
    protected:
    string specificite ;
    protected:
   void israceHybride();
};
class Chien : public Animal , public Race{
private:
list<Entraineur> A ;

string taille;
public:
void setlist_Entraineur(list<Entraineur> A){
    this->A = A ;
}
void ischass3();


};
class Entraineur {
    private:
    list<Chien> B ;
    string nom ;
    string description ;
    void setlist_Chien( list<Chien> B){
    this->B = B ;
}

};
class Compitition {
    Entraineur E;
    Chien C;

    private:

    string date ;
    string nom ;
    public:
    int ordre ;
    void setAtta(string date, string nom,int ordre){
        this->date = date;
        this->nom = nom;
        this->ordre = ordre;
    }
};

class Repas{
    Chat A;

    private:
    string nom ;
   string heure;
   string description ;
   Repas(){
       list<Elments> E;
   }
   Repas(string nom, string heure,string description) : nom(nom), heure(heure), description(description){}
    ~Repas(){

    }

   public:
   void setAtta(string nom , string heure , string description){
       this->nom = nom;
       this->heure = heure;
       this->description = description;
   }
};


class Elments{
    private:
string nom ;
string type ;
  public:
 void setAtta(string nom , string type){
     this->nom = nom;
     this->type = type;
 }

};

int main(){

Chien misho ;
list<Entraineur>  hind ;
misho.setlist_Entraineur(hind);


    return 0;
}*/
#include <iostream>
#include <list>
#include <iterator>
using namespace std ;
class chat ;
class Repas ;
class Elements;
class Animal;

class Animal{
    protected:
      string nom;
      int age;
      string genre;
    public:
       Animal(string nom,int age,string genre){
        this->nom=nom;
        this->age=age;
        this->genre=genre;
       }
       ~Animal(){

       }

};
class Chat:public Animal
{
private:
   string type;
public:
    Chat(string type):Animal(nom,age,genre){
        this->type=type;
    }
    ~Chat(){

    }
    void sauter(){

    }
};
class Repas
{
   private:
    string nom;
    int heure;
    string description;
    list<Elements> *elem1;
    Chat c1;
   public:
    Repas();
    ~Repas();
    void setRepas( string nom, string description,int heure){
        this->nom = nom ;
        this->description =description;
        this->heure = heure;
      }
    string getnom(){
      return this->nom ;
      }
    string getdiscription(){
      return this->description ;
      }
    int getheure(){
      return this->heure ;
      }
    void setelem1(list<Elements> *elem1){
       this->elem1=elem1 ;
      }
    list<Elements>* getelem1(){
        return this->elem1 ;
    }
     void setc1(Chat c1){
       this->c1=c1 ;
      }
     Chat getc1(){
        return this->c1 ;
    }

};

class Elements{
    private:
     string nom;
     string type;
     Repas R;
    public :
       void setElements( string nom, string type){
        this->nom = nom ;
        this->type =type;
      }
      string getnom(){
      return this->nom ;
      }
      string gettype(){
      return this->type ;
      }
      void setRepas( Repas R ){
        this->R = R ;
      }
      Repas getRepas(){
      return this->R ;
      }
      ~Elements(){

      }

};
class Race{
    protected:
      string specificite;
      string israceHybride();
};

class Chien:public Animal,public Race {
private:

       string taille;
      list < string > entraineur1;
public:
    Chien(string taille):Animal(nom,age,genre){
        this->taille=taille;
    }
    ~Chien();
    string ischass();
};
class Entraineur
{
  private:
    string nom;
    string description;
    list<Chien> chien1;
  public:

    Entraineur(string nom ,string description){
        this->nom=nom;
        this->description=description;
    }
    ~Entraineur(){

    }



};

class Compitition
{
private:
    string date;
    string nom;
    int ordre;
    Entraineur enta1;
    Chien chen1;
public:
   Compitition();
    ~Compitition(){

    }
     void setElements( string nom, string date,int ordre){
        this->nom = nom ;
        this->date =date;
        this->ordre=ordre;
      }
    string getnom(){
      return this->nom ;
      }
      string getdate(){
      return this->date ;
      }
     int getordre(){
      return this->ordre ;
      }
};
