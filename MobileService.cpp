#include <iostream>
#include <string>
using namespace std;
int main(){
string name;
char plan;
double gigs;
double bill;
cout<<"Input the following info to recieve an estimate of your bill total!"<<endl<<endl;
cout<<"Enter your first name: "<<endl;
cin>>name;
cout<<"Enter your plan (Input A/B/C)): "<<endl;
cin>>plan;
cout<<"Enter the amount of data used in GB: "<<endl;
cin>>gigs;
if(plan=='A'||plan=='a'){
    if(gigs>2){
        gigs-=2;
        bill=gigs*8;
        bill+=39.99;
    }else{
        bill=39.99;
    }
    cout<<name<<", because you have plan A and used "<<gigs<<"GB your bill will total to "<<bill<<"$ ."<<endl;
    if(bill>89.99){
        bill-=89.99;
        cout<<"if you switched to plan C you could only pay $89.99 and save $"<<bill<<"!"<<endl;
    }else if(bill>59.99){
        bill-=59.99;
        cout<<"if you switched to plan B you could only pay $59.99 and save $"<<bill<<"!"<<endl;
    }
}
if(plan=='B'||plan=='b'){
    if(gigs>8){
        gigs-=8;
        bill=gigs*8;
        bill+=59.99;
    }else{
        bill=59.99;
    }
    cout<<name<<", because you have plan B and used "<<gigs<<"GB your bill will total to "<<bill<<"$ ."<<endl;
    if(bill>89.99){
        bill-=89.99;
        cout<<"if you switched to plan C you could only pay $89.99 and save $"<<bill<<"!"<<endl;
    }
}
if(plan=='C'||plan=='c'){
  bill=89.99;
    cout<<name<<", because you have plan C and used "<<gigs<<"GB your bill will total to "<<bill<<"$ ."<<endl;
   
}
return 0;
}
