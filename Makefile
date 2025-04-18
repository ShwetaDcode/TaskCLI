CXX = g++
CXXFLAGS = -std=c++17 -Wall

SRC = main/main.cpp manager/TaskManager.cpp task/Task.cpp utils/Utils.cpp
OBJ = $(SRC:.cpp=.o)

EXEC = taskcli

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

clean:
	rm -f $(EXEC) $(OBJ)
