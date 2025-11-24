# !--Makefile--

CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=main.cpp Harl.cpp
OBJS=$(SRCS:.cpp=.o)
TARGET=Harl

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

fclean: clean
	rm -f $(TARGET)

clean:
	rm -f $(OBJS)

re: fclean all

.PHONY: all re fclean clean
