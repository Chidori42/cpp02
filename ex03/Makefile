CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	main.cpp\
		Fixed.cpp \
		bsp.cpp \
		Point.cpp

NAME = BSP

OBJECTS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

%.o: %.cpp Fixed.hpp Point.hpp
	c++ $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	c++ $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all