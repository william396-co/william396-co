#include <chrono>
#include <vector>
#include <string>


/*  时间相关函数 */
time_t now();
time_t now_ms();
time_t now_hour();
time_t now_day();
time_t now_week();

/*  随机函数 */
uint32_t random(size_t n);
struct Item
{
	uint32_t id;
	uint32_t weight;
};
std::vector<Item> ItemList;
uint32_t randomByWeight(const ItemList& list);

/* 高德纳洗牌法 */
void shuffle(std::vector<uint32_t> rndVec);


/* 字符串解析函数 */
std::vector<std::string> StrSplit(const std::string& src, const std::string& sep);