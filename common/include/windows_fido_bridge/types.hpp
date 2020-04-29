#pragma once

#include <array>
#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

namespace wfb {

using byte_vector = std::vector<uint8_t>;
template <size_t N> using byte_array = std::array<uint8_t, N>;
using byte_string = std::basic_string<uint8_t>;
using byte_string_view = std::basic_string_view<uint8_t>;

}  // namespace wfb
