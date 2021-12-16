#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
    system("clear");
    float total,leave,percent,margin_percent,required_percent,req_per;
    int i=1,count=0;
    cout<<"Total Hour:\t";
    cin>>total;
    cout<<"Leave Hour:\t";
    cin>>leave;
    percent=(1-leave/total)*100;
    cout<<"Current attendance percentage:\t"<<percent<<endl;
    margin_percent=percent;
    required_percent=percent;
    //Calculate margin of one subject.
    while(margin_percent>=75.0){
        margin_percent=(1-(leave+i)/(total+i))*100;
        if(margin_percent>=75){
        //cout<<"margin_percent:\t"<<margin_percent<<endl<<endl;
        count++;
        i++;}
    }
    if(count>-1){
        cout<<"Margin hours:\t"<<count<<endl;
    }
    //Calculate required class for 75 attendance
    count=0;  i=1;
    while(required_percent<75.0){
        //cout<<"required_percent:\t"<<required_percent<<endl<<endl;
        count++;
        required_percent=(1-(leave)/(total+i))*100;
        req_per=required_percent;
        i++;
    }
    if(count>-1){
        cout<<"Required hours:\t"<<count<<endl;
        cout<<"Attendance after attending "<<count<<" classes: "<<req_per<<endl;
    }

    return 0;
}