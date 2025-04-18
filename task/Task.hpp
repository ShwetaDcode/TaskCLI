#ifndef TASK_HPP
#define TASK_HPP

#include <string>

class Task {
public:
    std::string description;
    int priority;
    bool completed;

    Task(std::string desc, int prio, bool comp = false);
    std::string serialize() const;
    static Task deserialize(const std::string& line);
    void display(int index) const;
};

#endif
