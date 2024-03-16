#include<iostream>
int game(int ans, int *Strikes_count, int *Balls_count);
int util();

using namespace std;

int main(){
    int ans;
    int gue;
    int Strikes_count;
    int Balls_count;
    int result=0;
    int count=5;
    bool a=true;
    ans=util();
    while(a==true){
        if(count==0){
            cout<<"You lose!"<<endl;
            a=false;
            break;
        }
        cout<<count<<" chance left."<<endl;
        result=game(ans,&Strikes_count,&Balls_count);
        if(result==1){
            cout<<"You win!";
            a=false;
    }
    else
        cout<<"Strikes: "<<Strikes_count<<", Balls: "<<Balls_count<<endl;
        count--;
    }
}

