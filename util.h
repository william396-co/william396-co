#include <chrono>
#include <vector>
#include <string>


/*  时间相关函数 */
time_t now();
time_t now_ms();

/*  随机函数 */
uint32_t random(size_t n);

/* 高德纳洗牌法 */
void shuffle(std::vector<uint32_t> rndVec);


/* 字符串解析函数 */
std::vector<std::string> StrSplit(const std::string& src, const std::string& sep);