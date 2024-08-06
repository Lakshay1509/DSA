#include<iostream>

using namespace std;


class Human {

    public:

    int height;
    int weight;
    int age;


    public:
    int getage(){

        return this->age;
    }

    void setheight(int h){

        this->height=h;
    }

};

class Male: public Human{

    public:
    string colour;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }

};


int main(){

    Male object1;

    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.colour<<endl;
    cout<<object1.height<<endl;

    object1.setheight(80);

    cout<<object1.height<<endl;




}

