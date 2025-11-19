# !--Makefile--

CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=main.cpp Zombie.cpp zombieHorde.cpp
OBJS=$(SRCS:.cpp=.o)
TARGET=zombies

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

re: fclean all

fclean: clean
	rm -f $(TARGET)

clean:
	rm -f $(OBJS)

.PHONY: all re fclean clean
