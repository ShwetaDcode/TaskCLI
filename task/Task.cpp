#include "Task.hpp"
#include <iostream>
#include <sstream>

Task::Task(std::string desc, int prio, bool comp)
    : description(desc), priority(prio), completed(comp) {}

std::string Task::serialize() const {
    return description + "|" + std::to_string(priority) + "|" + (completed ? "1" : "0");
}

Task Task::deserialize(const std::string& line) {
    std::stringstream ss(line);
    std::string desc, prioStr, compStr;
    getline(ss, desc, '|');
    getline(ss, prioStr, '|');
    getline(ss, compStr);
    return Task(desc, std::stoi(prioStr), compStr == "1");
}

void Task::display(int index) const {
    std::cout << "[" << index << "] "
              << (completed ? "[✓] " : "[ ] ")
              << description << " (Priority: " << priority << ")\n";
}
