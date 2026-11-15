
#ifndef CONFIG_H
#define CONFIG_H
#if defined(_WIN32) && defined(UTIL_BUILD)
#define UTIL_API __declspec(dllexport)
#elif defined(_WIN32) && defined(UTIL_SHARED)
#define UTIL_API __declspec(dllimport)
#else
#define UTIL_API
#endif
#include <string>

#include "Logger.h"

class UTIL_API Config {
private:
    std::string contenu;

public:
    Config(const std::string& nomFichier);
    std::string getString(const std::string& cle) const;
};

#endif
