#include "util.h"


time_t now()
{
    using namespace std::chrono;

    return system_clock::to_time_t(system_clock::now());
}

time_t now_ms()
{
    using namespace std::chrono;

    return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}


uint32_t random(size_t n)
{
    srand(now());
    return static_cast<uint32_t>(double(rand() / RAND_MAX) * n);
}


/* 字符串解析函数 */
std::vector<std::string> StrSplit(const std::string& src, const std::string& sep)
{
        std::vector<std::string> ret;
        std::string tmpStr;
        for(auto iter = src.begin(); iter != src.end();++iter)
        {
            if(sep.find(*iter)!= std::string::npos)
            {
                if(tmpStr.length())
                    ret.emplace_back(tmpStr);
                tmpStr ="";
            }else
            {
                tmpStr+= *iter;
            }
        }
        if(tmpStr.length())
            ret.emplace_back(tmpStr);
    return ret;
}


void shuffle(std::vector<uint32_t> rndVec);
{
    for(int i = static_cast<int>(rndVec.size() -1); i >= 0;--i)
        std::swap(rndVec[i],rndVec[random(i+1)]);
}