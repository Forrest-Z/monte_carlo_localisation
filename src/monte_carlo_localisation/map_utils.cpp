#include "monte_carlo_localisation/map_utils.hpp"
#include <cmath>

int MapUtils::coordinates_to_index(const uint32_t &x, const uint32_t &y, const uint32_t &map_width)
{
    return x + y*map_width;
}
std::pair<uint32_t, uint32_t> MapUtils::index_to_coordinates(const int &index, const uint32_t &map_width)
{
    uint32_t x = index % map_width;
    uint32_t y = (index - x)/map_width;
    return std::make_pair(x, y);
}
double MapUtils::distance_between_two_points(const uint32_t &x1, const uint32_t &y1,
                                             const uint32_t &x2, const uint32_t &y2)
{
    return hypot(x1-x2, y1-y2);
}