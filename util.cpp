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