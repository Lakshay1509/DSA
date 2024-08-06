#include<iostream>

using namespace std;

int main(){

    int speed = 0;

    int time;

    cin>>time;

    long long distance;

    cin>>distance;

    int sum =0;

    for(int i =1 ; i<time;i++){
        int travelled = 0;
        speed = speed+1;
        travelled = speed*(time-i);
        
        if(travelled > (distance%1000000007)){
            sum ++;
            travelled =0;

        }

    }

    cout<<(sum%1000000007)<<endl;
}




