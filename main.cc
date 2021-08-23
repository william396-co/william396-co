#include <iostream>
#include <string>
#include "util.h"
#include "map_test.h"

using namespace std;

void print_point()
{
    int num = 100;
    int* p = &num;
    cout<<"num="<<num<<endl;
    cout<<"*p="<<*p<<endl;
    cout<<"p="<<p<<endl;
}


int main()
{

    std::string str1=  "dgodsadlfamlfdsafd";
    cout<<str1<<" len is "<<my_strlen(str1.c_str())<<endl;

    rvo_test();
    rvo_test2();

    print_point();

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