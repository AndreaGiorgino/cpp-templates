
#pragma once
#ifndef H_LIB
#define H_LIB

namespace libnamespace {
class libclass final {
   public:
    // ------------------------------------------------------------------------
    // Ctors
    // ------------------------------------------------------------------------
    libclass(void) noexcept = default;

    // ------------------------------------------------------------------------
    // Copy
    // ------------------------------------------------------------------------
    libclass(const libclass&) noexcept                     = default;
    auto operator =(const libclass&) noexcept -> libclass& = default;

    // ------------------------------------------------------------------------
    // Move
    // ------------------------------------------------------------------------
    libclass(libclass&&) noexcept                     = default;
    auto operator =(libclass&&) noexcept -> libclass& = default;

    // ------------------------------------------------------------------------
    // Dtor
    // ------------------------------------------------------------------------
    ~libclass(void) noexcept = default;
};
} // namespace libnamespace

#endif
