// routes.cpp — part of rob-run-money-farm.

#include "robrunmoneyfarm/routes.h"

#include <cstdio>

namespace robrunmoneyfarm {

Routes::Routes(const std::string& config_path)
    : config_path_(config_path) {}

void Routes::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Routes::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-money-farm] routes: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunmoneyfarm
