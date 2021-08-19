#include <iostream>
#include "util.h"

using namespace std;


int main()
{
    srand(now());

    cout<<now()<<endl;
    cout<<now_ms()<<endl;
    cout<<now_hour()<<endl;
    cout<<now_day()<<endl;
    cout<<now_week()<<endl;

    for(int i =0;i < 10; ++i)
        cout<<random(10)<<"\t";
    cout<<endl;


    std::string str="dsadasd/dsada/fdf/aaaa/";
    std::vector<std::string> vec = StrSplit(str,"/");
    for(auto iter: vec)
        cout<<iter<<"\t";
    cout<<endl;

    return 0;
}
