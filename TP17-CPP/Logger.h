
#ifndef LOGGER_H
#define LOGGER_H

#include <string>

#define UTIL_API

class UTIL_API Logger {
private:
    Logger();
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

public:
    static Logger& getInstance();
    void log(const std::string& message);
};

#endif
