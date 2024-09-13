NAME = LineSwap
SRCS = main.cpp LineSwap.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

CYAN='\033[1;36m'
BLUE='\033[1;34m'
GREEN='\033[6;32m'
WHITE='\033[0;m'

all: $(NAME)

$(NAME) : $(OBJS)
	@clear
	@$(CPP) $(CFLAGS) $(OBJS) -o $@
	@if [ $$? -eq 0 ]; then \
		echo ${GREEN}"Compilation successful!"${WHITE}; \
	fi
%.o: %.c
	@$(CPP) $(CFLAGS) -c $< -o $@
clean:
	@clear
	@$(RM) $(OBJS)
	@echo ${BLUE}">------Files clean-------<\n"${WHITE}
fclean: clean
	@$(RM) $(NAME)
	@clear
	@echo ${BLUE}">------Files clean-------<\n"${WHITE}
	@echo ${CYAN}">-------Name clean-------<\n"${WHITE}
re: fclean all

.PHONY: all clean fclean re cleanall first