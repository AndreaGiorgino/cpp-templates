#pragma once

class lib final {
    public: // definitions

    public: // ctors
        lib(void) = default;

        lib(const lib&) = default;
        auto operator =(const lib&) -> lib& = default;

        lib(lib&&) = default;
        auto operator =(lib&&) -> lib& = default;

        ~lib(void) = default;

    public: // methods

    private: // methods

    private: // members
};
