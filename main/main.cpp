#include "../manager/TaskManager.hpp"
#include "../utils/Utils.hpp"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    TaskManager manager;

    if (argc < 2) {
        showHelp();
        return 0;
    }

    std::string command = argv[1];

    if (command == "add" && argc >= 4) {
        int priority = std::stoi(argv[2]);
        std::string desc;
        for (int i = 3; i < argc; ++i) {
            desc += argv[i];
            if (i != argc - 1) desc += " ";
        }
        manager.addTask(desc, priority);
        std::cout << "Task added.\n";
    } else if (command == "view") {
        manager.viewTasks();
    } else if (command == "complete" && argc == 3) {
        int index = std::stoi(argv[2]);
        manager.completeTask(index);
    } else if (command == "delete" && argc == 3) {
        int index = std::stoi(argv[2]);
        manager.deleteTask(index);
    } else {
        showHelp();
    }

    return 0;
}
