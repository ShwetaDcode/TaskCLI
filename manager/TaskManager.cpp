#include "TaskManager.hpp"
#include <fstream>
#include <iostream>

TaskManager::TaskManager() {
    loadTasks();
}

void TaskManager::loadTasks() {
    std::ifstream infile(filename);
    std::string line;
    while (std::getline(infile, line)) {
        tasks.push_back(Task::deserialize(line));
    }
}

void TaskManager::saveTasks() {
    std::ofstream outfile(filename);
    for (const auto& task : tasks) {
        outfile << task.serialize() << std::endl;
    }
}

void TaskManager::addTask(const std::string& desc, int prio) {
    tasks.emplace_back(desc, prio);
    saveTasks();
}

void TaskManager::viewTasks() const {
    if (tasks.empty()) {
        std::cout << "No tasks found.\n";
        return;
    }
    for (size_t i = 0; i < tasks.size(); ++i) {
        tasks[i].display(i + 1);
    }
}

void TaskManager::completeTask(int index) {
    if (index > 0 && index <= tasks.size()) {
        tasks[index - 1].completed = true;
        saveTasks();
        std::cout << "Task marked as completed.\n";
    } else {
        std::cout << "Invalid index.\n";
    }
}

void TaskManager::deleteTask(int index) {
    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        saveTasks();
        std::cout << "Task deleted.\n";
    } else {
        std::cout << "Invalid index.\n";
    }
}
