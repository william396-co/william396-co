#include "util.h"
using namespace std::chrono;

using day = duration<long,std::ratio<24 * 60 * 60,1>>;
using week = duration<long,std::ratio<24 * 60 * 60 *7,1>>;

time_t now()
{
    return system_clock::to_time_t(system_clock::now());
}

time_t now_ms()
{
    return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

time_t now_hour()
{
    return duration_cast<hours>(system_clock::now().time_since_epoch()).count();
}

time_t now_day()
{
    return duration_cast<day>(system_clock::now().time_since_epoch()).count();
}

time_t now_week()
{
    return duration_cast<week>(system_clock::now().time_since_epoch()).count();
}


uint32_t random(size_t n)
{
    return static_cast<uint32_t>((double(rand()) / RAND_MAX) * n);
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

std::string upper(const std::string& str)
{
    std::string ret;
    for(auto iter: str)
        ret += std::toupper(iter);
    return ret;
}

std::string lower(const std::string& str)
{
    std::string ret;
    for(auto iter: str)
        ret += std::tolower(iter);
    return ret;
}


void shuffle(std::vector<uint32_t> rndVec)
{
    for(int i = static_cast<int>(rndVec.size() -1); i >= 0;--i)
        std::swap(rndVec[i],rndVec[random(i+1)]);
}

uint32_t randomByWeight(const ItemList& list)
{
    if(!list.empty())
    {
        if(list.size() > 1)
        {
            uint32_t totalWeight =0;
            for(auto iter: list)
                totalWeight += iter.second;

            if(totalWeight>0)
            {
                uint32_t rnd = random(totalWeight);
                for(auto iter: list)
                {
                    if(rnd < iter.second)
                        return iter.first;
                    else
                        rnd -= iter.second;
                }
            }

        }else
        {
            return list.begin()->first;
        }
    }
    return 0;
}