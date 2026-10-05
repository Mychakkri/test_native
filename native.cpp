#include <string>

extern "C" const char* duplicate_text(const char* text) {
    static std::string result;

    result = std::string(text) + std::string(text);

    return result.c_str();
}
