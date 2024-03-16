#include<iostream>
#include<random>
#include<chrono>
using namespace std;
int util(){
    bool a=true;
    int ans;
    unsigned seed= chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<int>
    distribution(0,9);
    while(a==true){ 
         ans=0;
         for(int i=0;i<3;i++){
            int digit=distribution(gen);
            ans=ans*10+digit;
    }
    int hun_a=ans/100;
    int ten_a=(ans%100)/10;
    int one_a=(ans%100)%10;

    if(!(hun_a==ten_a)&&!(hun_a==one_a)&&!(ten_a==one_a))
    a=false;
}
    return ans;
}