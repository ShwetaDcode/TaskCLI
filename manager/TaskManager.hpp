#ifndef TASK_MANAGER_HPP
#define TASK_MANAGER_HPP

#include "../task/Task.hpp"
#include <vector>
#include <string>

class TaskManager {
    std::vector<Task> tasks;
    const std::string filename = "tasks.txt";

public:
    TaskManager();
    void loadTasks();
    void saveTasks();
    void addTask(const std::string& desc, int prio);
    void viewTasks() const;
    void completeTask(int index);
    void deleteTask(int index);
};

#endif
