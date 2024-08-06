#include <bits/stdc++.h>

using namespace std;

class Hero
{

private:
    int health;

public:
    char level;
    char *name;

    Hero(){
        cout<<"Constructor deployed"<<endl;
        name = new char[100];

    }

    Hero(int health,char level){

        this->health=health;

        this->level = level;
    }

    //copy constructor

    Hero(Hero&temp){

        cout<<"Copy constructor deployed"<<endl;

        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){

        cout<<"name : "<<this->name<<endl;
        cout<<"health : "<<this->health<<endl;
        cout<<"level : "<<this->level<<endl;
    }

    int getHealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char l)
    {
        level = l;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

    //destructor
    ~Hero(){
        cout<<"Destrcutor deployed "<<endl;
    }
};


int main()
{


    Hero Laila;
    Laila.setHealth(12);
    Laila.setLevel('D');

    char name[7] = "Divyam";

    Laila.setname(name);

    Laila.print();


    //static parametrised constructor
    Hero aryanman(100, 'A');

    cout<<"Health is :"<< aryanman.getHealth()<<endl;
    cout << "Level is : " << aryanman.getlevel() << endl;

    // dyanamic parametrised constructor

    Hero *mini_doraemon = new Hero(110,'S');
    cout<<"Health is :"<< mini_doraemon ->getHealth()<<endl;
    cout << "Level is : " << mini_doraemon->getlevel() << endl;

    delete mini_doraemon;


    // dyanamic

    Hero *doraemon = new Hero;

    cout << "Health is : " << (doraemon)->getHealth() << endl;

    cout << "Level is : " << (doraemon)->getlevel() << endl;

    delete doraemon;



    // create object(static allocation)
    Hero doramii;

    doramii.setHealth(70);
    doramii.level = 'A';

    cout << "Health is : " << doramii.getHealth() << endl;

    cout << "Level is : " << doramii.getlevel() << endl;
}