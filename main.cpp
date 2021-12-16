#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
    system("clear");
    float total,leave,res;
    int i=1,count=0;
    cout<<"Total Hour:\t";
    cin>>total;
    cout<<"Leave Hour:\t";
    cin>>leave;
    res=(1-leave/total)*100;
    cout<<res<<endl;
    
    while(res>=75.0){
        res=(1-(leave+i)/(total+i))*100;
        if(res>=75){
        cout<<"Res:\t"<<res<<endl<<endl;
        count++;
        i++;}
    }
    
    if(count>-1){
        cout<<"Margin hours:\t"<<count<<endl;
    }
    
    return 0;
}