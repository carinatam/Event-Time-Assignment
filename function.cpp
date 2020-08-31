#include <iostream>
#include <string>
#include "header.h"
using namespace std;
void Event::event(int st, int et, string party_name){
    start_time=st;
    end_time=et;
    event_name=party_name;
}
void Event::rename(string party_name){
    event_name=party_name;
}
void Event::duration(){
    cout<<end_time-start_time<<" hour(s)."<<endl;
}
void Event::show(){
    cout<<event_name<<": from "<<start_time<<" to "<<end_time<<endl;
}
bool Event::equal(Event event2){
    if((event2.event_name==this->event_name)&& (event2.start_time==this->start_time) && (event2.end_time==this->end_time)){
        return true;
    }
    else{
        return false;
    }
}
bool Event::overlaps(Event event3){
    if(event3.start_time<this->start_time){
        int temp;
        temp=event3.start_time;
        event3.start_time=this->start_time;
        this->start_time=temp;
        temp=event3.end_time;
        event3.end_time=this->end_time;
        this->end_time=temp;}
    if(((event3.start_time>=this->start_time) && (event3.start_time<this->end_time)) || ((event3.end_time>this->start_time) && (event3.end_time<this->end_time))){
        return true;
    }
    else{
        return false;
    }
}
