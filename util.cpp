#include<iostream>
#include<random>
#include<chrono>
using namespace std;
int util(){
    unsigned seed= chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<int>
    distribution(0,9);

    int ans=0;
    for(int i=0;i<3;i++){
        int digit=distribution(gen);
        ans=ans*10+digit;
    }
    return ans;
}