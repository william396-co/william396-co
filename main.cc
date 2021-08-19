#include <iostream>
#include "util.h"

using namespace std;


int main()
{
    cout<<now()<<endl;
    cout<<now_ms()<<endl;

    for(int i =0;i < 10; ++i)
        cout<<random(10)<<"\t";
    cout<<endl;

    return 0;
}
