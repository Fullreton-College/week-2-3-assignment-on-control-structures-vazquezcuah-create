#include <iostream>

using namespace std;

int main()
{
    double l1;
    double l2;
    double w1;
    double w2;
    cout<<"Enter the length of the first rectangle: "<<endl;
    cin>>l1;
    cout<<"Enter the width of the first rectangle: "<<endl;
    cin>>w1;
    cout<<"Enter the length of the second rectangle: "<<endl;
    cin>>l2;
    cout<<"Enter the width of the second length: "<<endl;
    cin>>w2;

    if((w1*l1)==(w2*l2)){
     cout<<"The areas of the rectangles are the same with an area of "<<(w1*w2)<<" units squared."<<endl;   
    }else if((w1*l1)<(w2*l2)){
        cout<<"The second rectangle has a greater area with an area of "<<(w2*l2)<<" units squared."<<endl;
    }else{
        cout<<"The first rectangle has a greater area with an area of "<<(l1*w1)<< " units squared."<<endl;
    }
    return 0;
}

