#pragma once
#include <chrono>
#include <vector>
#include <string>

using ItemList = std::vector<std::pair<uint32_t,uint32_t>>;

/*  时间相关函数 */
time_t now();
time_t now_ms();
time_t now_hour();
time_t now_day();
time_t now_week();

/*  随机函数 */
uint32_t random(size_t n);
uint32_t randomByWeight(const ItemList& list);

/* 高德纳洗牌法 */
void shuffle(std::vector<uint32_t> rndVec);


/* 字符串解析函数 */
std::vector<std::string> StrSplit(const std::string& src, const std::string& sep);
std::string upper(const std::string& str);
std::string lower(const std::string& str);

size_t my_strlen(const char* start);