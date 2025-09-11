NAME = harlFilter
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCDIR = .
OBJDIR = obj

SOURCES = main.cpp Harl.cpp
OBJECTS = $(SOURCES:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	@echo "Testing WARNING level:"
	./$(NAME) "WARNING"
	@echo "\nTesting invalid level:"
	./$(NAME) "INVALID"

.PHONY: all clean fclean re test
