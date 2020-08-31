#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int main(){
Event one, two, three;
int start, end, i=1;
string name, rename;
bool equal;
for(; i<4; i++){
    cout<<"Enter the start time of the event: ";
    cin>>start;
    cout<<"Enter the end time of the event: ";
    cin>>end;
    while(start>=end || start<0 || end>24){
        cout<<"Enter the start time of the event: ";
        cin>>start;
        cout<<"Enter the end time of the event: ";
        cin>>end;
    }
    cout<<"Enter the name of the event: ";
    cin>>name;
    if(i==1){
        one.event(start, end, name);
        one.show();}
    else if(i==2){
        two.event(start, end, name);
        two.show();}
    else if(i==3){
        three.event(start, end, name);
        three.show();}
}
cout<<"Rename event 1, 2, or 3?: ";
cin>>i;
cout<<"Enter a new name for event "<<i<<": ";
cin>>rename;
if(i==1){
    one.rename(rename);
    one.show();}
else if(i==2){
    two.rename(rename);
    two.show();}
else if(i==3){
    three.rename(rename);
    three.show();}
one.duration();
equal=one.equal(two);
cout<<"Equal: "<<equal<<endl;
bool overlap;
overlap=one.overlaps(three);
cout<<"Overlaps: "<<overlap;

return 0;
}
