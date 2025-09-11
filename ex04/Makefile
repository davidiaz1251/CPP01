NAME = sed_replacement
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCDIR = .
OBJDIR = obj

SOURCES = main.cpp
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
	@echo "Creating test file..."
	@echo "Hello world" > test.txt
	@echo "This is a test file" >> test.txt
	@echo "Hello again world" >> test.txt
	@echo "Running replacement: Hello -> Hi"
	./$(NAME) test.txt "Hello" "Hi"
	@echo "Original file:"
	@cat test.txt
	@echo "Modified file:"
	@cat test.txt.replace
	@echo "Cleaning up test files..."
	@rm -f test.txt test.txt.replace

.PHONY: all clean fclean re test
