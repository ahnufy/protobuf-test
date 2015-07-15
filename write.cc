#include <iostream>
#include <fstream>

#include "msg.pb.h"

using namespace std;
using namespace lm;

int main()
{
    lm:helloworld msg;
    msg.set_id(101);
    msg.set_str("hello");
    fstream output("./msg.pb",ios::out|ios::trunc|ios::binary);
    if(!msg.SerializeToOstream(&output))
    {
        cerr << "Failed to write msg." << endl;
        return -1;
    }
    return 0;
}
