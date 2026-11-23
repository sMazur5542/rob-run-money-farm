// stats.cpp — part of rob-run-money-farm.

#include "robrunmoneyfarm/stats.h"

#include <cstdio>

namespace robrunmoneyfarm {

Stats::Stats(const std::string& config_path)
    : config_path_(config_path) {}

void Stats::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Stats::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-money-farm] stats: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunmoneyfarm
