#include<iostream>
#include<random>
using namespace std;
int util(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int>
    distribution(0,9);

    int ans=0;
    for(int i=0;i<3;i++){
        int digit=distribution(gen);
        ans=ans*10+digit;
    }
    return ans;
}