#include <iostream>
#include <fstream>

#include "msg.pb.h"

using namespace std;
using namespace lm;

void listmsg(const lm::helloworld &msg)
{
    cout<<msg.id()<<endl;
    cout<<msg.str()<<endl;
}

int main()
{
    lm:helloworld msg;
    fstream input("./msg.pb",ios::in|ios::binary);
    if(!msg.ParseFromIstream(&input))
    {
        cerr<<"Failed to parse address book." << endl;
        return -1;
    }
    listmsg(msg);
    return 0;
}
