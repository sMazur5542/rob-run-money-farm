// stats — part of rob-run-money-farm.

#pragma once

#include <string>
#include <vector>

namespace robrunmoneyfarm {

class Stats {
public:
    explicit Stats(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace robrunmoneyfarm
