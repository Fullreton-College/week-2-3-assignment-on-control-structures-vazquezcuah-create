#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double price =199;
double discount=1.0;
int units;
cout<<"Enter the amount of units you would like in order to recieve a quote: "<<endl;
cin>>units;
if(units<10){
  price*=units;
}else if((units>=10)&&(units<=19)){
  discount-=.2;
  price*=units;
  price*=discount;
}else if((units>=20)&&(units<=40)){
  discount-=.3;
  price*=units;
  price*=discount;
}else if((units>=50)&&(units<=99)){
  discount -=.4;
  price*=units;
  price*=discount;
}else if(units>=100) {
  discount -= .5;
price*=units;
price*=discount;
}
discount-=1;
discount*=-100;
cout<<"With a puchase of "<<units<<" units";
if(discount>0){
  cout<<", you recieved a discount of "<<discount<<"% and so";
}
cout<< " your total estimated amount is $"<<price<<"."<<endl;
  return 0;
}
