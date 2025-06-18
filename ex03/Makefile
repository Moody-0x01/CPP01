CXX=c++
NAME=human
SRCS=./HumanA.cpp ./HumanB.cpp ./Weapon.cpp
OBJS=$(SRCS:%.cpp=%.o)
INCLUDE=.
CXXFLAGS=-Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)
MAIN=./main.cpp

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(MAIN) -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: re fclean clean bonus
