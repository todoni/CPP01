CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
NAME = attack
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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
