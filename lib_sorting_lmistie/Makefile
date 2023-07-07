NAME = libsorting.a
PATH_SRC = ../7_Sorting/
PATH_OBJ = ../7_Sorting/

CC = g++
CFLAGS = -Wall -Wextra -Werror


SRC = 	$(PATH_SRC)mergesort.cpp\
		$(PATH_SRC)quicksort.cpp\
		$(PATH_SRC)selectionsort.cpp\
		$(PATH_SRC)sort_bubble.cpp\
		$(PATH_SRC)shellsort.cpp\
		$(PATH_SRC)tim_sort.cpp\
		$(PATH_SRC)insertion_sort.cpp\


OBJ = $(patsubst %.cpp,%.o,$(SRC))


all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all