#include <iostream>
#include "util.h"

using namespace std;


struct Goods
{
    uint32_t id;
    uint32_t weight;
}

void test_emplace()
{
    std::vector<Goods> vg;
    vg.pus_back({1,2});
}


int main()
{

    void test_emplace();

    srand(now());

    cout<<now()<<endl;
    cout<<now_ms()<<endl;
    cout<<now_hour()<<endl;
    cout<<now_day()<<endl;
    cout<<now_week()<<endl;

    for(int i =0;i < 10; ++i)
        cout<<random(10)<<"\t";
    cout<<endl;

    cout<<upper("Good morning!")<<endl;
    cout<<lower("nice to meet you!")<<endl;


    std::string str="dsadasd/dsada/fdf/aaaa/";
    std::vector<std::string> vec = StrSplit(str,"/");
    for(auto iter: vec)
        cout<<iter<<"\t";
    cout<<endl;

    return 0;
}
