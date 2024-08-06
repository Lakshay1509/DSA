#include<iostream>
using namespace std;


int main(){

    int amount;
    cin>>amount;
    int hundred = amount/100;
    cout<<hundred<<endl;
    amount = amount-(hundred*100);
    int fifty = amount/50;
    cout<<fifty<<endl;
    amount = amount-(fifty*50);
    int twenty = amount/20;
    cout<<twenty<<endl;
    amount = amount - (twenty*20);
    int ten = amount/10;
    cout<<ten<<endl;
    amount = amount - (ten*10);
    int one = amount/1;
    cout<<one<<endl;

    


}