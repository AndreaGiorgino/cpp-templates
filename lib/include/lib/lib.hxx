
#pragma once
#ifndef H_LIB
#define H_LIB

namespace libnamespace {
class lib final {
   public: // definitions
   public: // ctors
    lib(void) = default;

    lib(const lib&)                     = default;
    auto operator =(const lib&) -> lib& = default;

    lib(lib&&)                     = default;
    auto operator =(lib&&) -> lib& = default;

    ~lib(void) = default;

   public:  // methods
   private: // methods
   private: // members
};
} // namespace libnamespace

#endif
