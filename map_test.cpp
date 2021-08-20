#include "map_test.h"
#include "util.h"

#include <vector>
#include <iostream>


std::vector<int> GetRandList()
{
    std::vector<int> vi;    
    for(int i=0; i < 10; ++i)
        vi.emplace_back(random(100));

    std::cout<<"inner vi address:"<<&vi[0]<<std::endl;
    return vi;
}

void rvo_test()
{
    std::vector<int> vo = GetRandList();
    std::cout<<"outter vi address:"<<&vo[0]<<std::endl;
}