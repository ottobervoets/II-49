//JB: ?
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main(int argc, char **argv)
{
      // read input aguments
    //JB: TYPE, constness OB: van size_t naar int const. 
    int const hrsIn = stoi(argv[1]);
    int const scndsIn = stoi(argv[2]); //JB: -0 but segfault danger. OB: ik snap niet waarom
    
      // construct time/chrono objects
    hours hrs{hrsIn};
    seconds scnds{scndsIn};
        
      // convert hours to minutes
    minutes hrsToMins = hrs;
      // convert seconds to minutes
    duration<float, minutes::period> scndsToMins = scnds;
    //JB: Please stick to integer types.
    //JB: Also, don't reinvent the wheel.
    
    cout << hrsIn   << " hours are "   << hrsToMins.count()   << " minutes\n"
         << scndsIn << " seconds are " << scndsToMins.count() << " minutes\n";
}


