# Компилятор и флаги
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra

# Директории и файлы
LIBSORTING_DIR := ../6_lib_sorting_lmistie/
INCLUDE_DIR := $(LIBSORTING_DIR)
LIB_DIR := $(LIBSORTING_DIR)
LIBSORTING := $(LIB_DIR)/libsorting.a

# Имя исполняемого файла
TARGET := a.out

# Правило сборки
$(TARGET): main.cpp $(LIBSORTING)
	@$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -L$(LIB_DIR) $< -lsorting -o $@

# Правило сборки библиотеки
$(LIBSORTING):
	$(MAKE) -C $(LIBSORTING_DIR)

# Правило очистки
clean:
	@$(MAKE) -C $(LIBSORTING_DIR) clean
	@rm -f $(TARGET)