// main.cpp — entry point. Wires config and subsystems together.

#include "robrunmoneyfarm/settings.h"
#include "robrunmoneyfarm/routes.h"
#include "robrunmoneyfarm/tracker.h"
#include "robrunmoneyfarm/stats.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    robrunmoneyfarm::Settings settings = robrunmoneyfarm::Settings::load_default();
    robrunmoneyfarm::Routes routes(settings.store_path);
    robrunmoneyfarm::Tracker tracker(settings.store_path);
    robrunmoneyfarm::Stats stats(settings.store_path);
    std::fprintf(stderr, "[rob-run-money-farm] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
