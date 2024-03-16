#include<iostream>
using namespace std;

int game(int ans, int* Strikes_count,int* Balls_count){
    int hun_a=ans/100;
    int ten_a=(ans%100)/10;
    int one_a=(ans%100)%10;

    bool a=true;
      int gue=0;
        *Strikes_count=0;
        *Balls_count=0;
        int result=0;
        cout<<"Enter a guess: "<<endl;
        cin>>gue;
        if(gue==ans)
        return 1;
        else{
        int hun_g=gue/100;
        int ten_g=(gue%100)/10;
        int one_g=(gue%100)%10;

        if(hun_a==hun_g){
            (*Strikes_count)++;
        }
        if(hun_a==ten_g){
            (*Balls_count)++;
        }
        if(hun_a==one_g){
            (*Balls_count)++;
        }

        if(ten_a==ten_g){
            (*Strikes_count)++;
        }
        if(ten_a==hun_g){
            (*Balls_count)++;
        }
        if(ten_a==one_g){
            (*Balls_count)++;
        }

        if(one_a==one_g){
            (*Strikes_count)++;
        }
        if(one_a==hun_g){
            (*Balls_count)++;
        }
        if(one_a==ten_g){
            (*Balls_count)++;
        }
        return result;
        }

}