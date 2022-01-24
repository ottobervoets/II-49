#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

int main(int argc, char **argv)
{
      // read input aguments
    size_t hrsIn = stoi(argv[1]);
    size_t scndsIn = stoi(argv[2]);
    
      // construct time/chrono objects
    hours hrs{hrsIn};
    seconds scnds{scndsIn};
        
      // convert hours to minutes
    minutes hrsToMins = hrs;
      // convert seconds to minutes
    duration<double, minutes::period> scndsToMins = scnds; 
    
    cout    << hrsIn    << " hours are "    << hrsToMins.count()    << " minutes \n"
            << scndsIn  << " seconds are "  << scndsToMins.count()  << " minutes \n";
}


