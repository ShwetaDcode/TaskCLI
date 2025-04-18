#include "Utils.hpp"
#include <iostream>

void showHelp() {
    std::cout << "TaskCLI Commands:\n"
              << "  add <priority> <description>\n"
              << "  view\n"
              << "  complete <task_number>\n"
              << "  delete <task_number>\n"
              << "  help\n";
}
