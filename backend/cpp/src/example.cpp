#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/daily_file_sink.h"


using namespace std;

void daily_example()
{
    // Create a daily logger - a new file is created every day at 2:30 am
    auto logger = spdlog::daily_logger_mt("daily_logger", "logs/daily.txt", 2, 30);
}

void basic_logfile_example()
{
    try {
        auto logger = spdlog::basic_logger_mt("basic_logger", "logs/basic-log.txt");
    } catch (const spdlog::spdlog_ex &ex) {
        cout << "Log init failed: " << ex.what() << std::endl;
    }
}

int main(int argc, char** argv[]) {
    return 0;
}