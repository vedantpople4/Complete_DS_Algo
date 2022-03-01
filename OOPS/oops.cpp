#include<iostream>
#include<string.h>
using namespace std;

class Hero{
    public:
    char *name;
    int health; //properties
    char level;
    static int timeToComplete;

    Hero(){
        cout<<"Simple Contructor createrd"<<endl;
        name = new char[100];
    }

    Hero(int health, char level){
        this->health = health;
        this->level = level;
    }

    Hero(int health, int level, char name[]){
        this->health = health;
        this->level = level;
        this->name = name;
    }

    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;


        cout<<"Copy contructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

    static int random(){
        return timeToComplete;
    }

    void printtext(){
        cout<<endl;
        cout<<" Level is-> "<<level<<endl<<" Health is-> "<<health<<endl<<" Name is->"<<name<<endl;
        cout<<endl;
    } 

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char s){
        level = s;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int Hero::timeToComplete = 5;

int main()
{
    // //Hero ramesh(87,'F'); //Cretion of object
    // // ramesh.health = 56;
    // // ramesh.level = 'A';
    // //cout<<ramesh.getHealth()<<endl;
    // //ramesh.setHealth(70);
    // cout<<ramesh.getHealth()<<endl;
    // //ramesh.setLevel('S');
    // cout<<ramesh.health<<" "<<ramesh.level<<endl;  
    // cout<<sizeof(ramesh)<<endl; 

    // Hero *h = new Hero;
    // h->setHealth(76);
    // h->setLevel('B');
    // cout<<(*h).level<<endl;
    // cout<<(*h).health<<endl;

    // Hero base(45,'H');
    // Hero baseabove(base);

    // cout<<baseabove.health<<" "<<baseabove.level<<endl;

    Hero hero1;
    hero1.setHealth(14);
    hero1.setLevel('T');
    //hero1.setName("Classhero1");
    char name[7]="Vertye";
    hero1.setName(name);

    //cout<<hero1.health<< endl<<hero1.level<<" "<<hero1.name<<endl;
    hero1.printtext();

    //copy constructor

    Hero hero2(hero1);

    hero1.name[0] = 'N';
    hero1.printtext();
    hero2.printtext();

    hero1 = hero2;

    hero1.printtext();
    hero2.printtext(); 

    cout<<"Static Variable: "<<hero1.timeToComplete<<endl;

    cout<<"Returned from static function: "<<Hero::random()<<endl;






    return 0;
}