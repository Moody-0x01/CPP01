CXX=c++
NAME=brain
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
MAIN=./main.cpp

all: $(NAME)
$(NAME):
	$(CXX) $(CXXFLAGS) $(OBJS) $(MAIN) -o $@
clean:
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: re fclean clean bonus
