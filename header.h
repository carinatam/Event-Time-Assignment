#include <iostream>
#include <string>
using namespace std;
class Event{
private:
    int start_time;
    int end_time;
    string event_name;
public:
    void event(int start_time, int end_time, string event_name);
    void rename(string event_name);
    void duration();
    void show();
    bool equal(Event event2);
    bool overlaps(Event event3);
};
