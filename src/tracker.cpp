// tracker.cpp — part of rob-run-money-farm.

#include "robrunmoneyfarm/tracker.h"

#include <cstdio>

namespace robrunmoneyfarm {

Tracker::Tracker(const std::string& config_path)
    : config_path_(config_path) {}

void Tracker::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tracker::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-money-farm] tracker: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunmoneyfarm
