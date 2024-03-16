#include<iostream>
int game(int ans, int *Strikes_count, int *Balls_count);

using namespace std;

int main(){
    int ans;
    int gue;
    int Strikes_count;
    int Balls_count;
    int result=0;
    bool a=true;
    cout<<"Enter a answer: "<<endl;
    cin>>ans;
    while(a==true){
    result=game(ans,&Strikes_count,&Balls_count);
    if(result==1){
        cout<<"You win!";
        a=false;
    }
    else
        cout<<"Strikes: "<<Strikes_count<<", Balls: "<<Balls_count<<endl;
    }
}

