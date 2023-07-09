NAME = libsorting.a
PATH_SRC = ../src/
PATH_OBJ = ../src/

CC = g++
CFLAGS = -Wall -Wextra -Werror


SRC = 	$(PATH_SRC)mergesort.cpp\
		$(PATH_SRC)quicksort.cpp\
		$(PATH_SRC)selectionsort.cpp\
		$(PATH_SRC)bubble_sort.cpp\
		$(PATH_SRC)shellsort.cpp\
		$(PATH_SRC)timsort.cpp\
		$(PATH_SRC)insertion_sort.cpp\
		$(PATH_SRC)heapsort.cpp\
		$(PATH_SRC)patiencesort.cpp\
		$(PATH_SRC)smoothsort.cpp\
		$(PATH_SRC)treesort.cpp\

OBJ = $(patsubst %.cpp,%.o,$(SRC))


all: $(NAME)

@$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all