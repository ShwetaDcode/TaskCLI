# TaskCLI

C++ developed Command Line Interface (CLI) task management application. The application allows a user to add, view, complete and delete tasks. The task list is stored in a file (`tasks.txt`) and the tasks have a priority based on priority. The project illustrates the use of modular programming techniques by separating functionality into classes and files so that can be easily maintained and upgraded

## Features
- Add a new task with a description and priority.
- View all tasks with their priority and completion status.
- Mark tasks as completed.
- Delete tasks from the list.
- Persistent task storage in a text file (`tasks.txt`).

## Directory Structure 
TaskCLI/
│
├── main/                # Main application entry point
│   └── main.cpp         # Main function and program flow
│
├── task/                # Task class definition and implementation
│   ├── Task.cpp         # Task class implementation
│   └── Task.hpp         # Task class header (declaration)
│
├── manager/             # Task manager (handles tasks management operations)
│   ├── TaskManager.cpp  # TaskManager class implementation
│   └── TaskManager.hpp  # TaskManager class header
│
├── utils/               # Utility functions like showing help
│   ├── Utils.cpp        # Utility function implementation
│   └── Utils.hpp        # Utility function header (declaration)
│
└── Makefile             # Makefile for building the project


## Prerequisites
To run this project, you need:
- A C++17 compatible compiler (e.g., `g++`).
- Make (for building the project).
- A terminal/command prompt for running the application.

## Installation

### 1. Clone the repository
Clone this repository to your local machine using the following command:

```bash
git clone https://github.com/your-username/TaskCLI.git
cd TaskCLI
