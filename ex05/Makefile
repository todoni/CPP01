CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
NAME = harl
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS)
	rm -f $(NAME)
re :
	rm -f $(OBJS)
	rm -f $(NAME)
	make $(NAME)

.PHONY : all clean fclean re
