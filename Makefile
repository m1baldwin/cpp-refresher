CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 
SRC_DIR = src
LIB_DIR = lib
INCLUDE_DIR = include
BUILD_DIR = build

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
# Create a list of binaries, one for each source file
BINS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%, $(SRCS))

all: $(BUILD_DIR) $(BINS)


bankAccount:
	$(CXX) $(CXXFLAGS) -Iinclude -c $(LIB_DIR)/bankAccount.cpp -o $(BUILD_DIR)/bankAccount.o

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Pattern rule: build/<name> from src/<name>.cpp
$(BUILD_DIR)/%: $(SRC_DIR)/%.cpp $(BUILD_DIR)/bankAccount.o
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $< $(BUILD_DIR)/bankAccount.o -o $@

clean:
	rm -rf $(BUILD_DIR)