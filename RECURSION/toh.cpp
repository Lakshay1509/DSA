#include<iostream>

using namespace std;

void toh(int n, char start, char dest, char aux){

    if(n==1){
        cout<<"Move disk 1 from "<<start<<" to "<<dest<<endl;

    }
    else{
        toh(n-1,start,aux,dest);
        cout<<"Move disk "<<n<<" from "<<start<<" to "<<dest<<endl;
        toh(n-1,aux,dest,start);
    }

}

int main(){

    int n = 111;
    char from = 'A';
    char to = 'B';
    char via = 'C';
    //calling hanoi() method

    toh(n, from , via, to);

    return 0;

}