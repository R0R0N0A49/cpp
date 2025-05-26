NAME = EasyFind
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

CYAN='\033[1;36m'
BLUE='\033[1;34m'
GREEN='\033[6;32m'
WHITE='\033[0;m'

all: $(NAME)

$(NAME) : $(OBJS)
	@$(CPP) $(CFLAGS) $(OBJS) -o $@
	@if [ $$? -eq 0 ]; then \
		echo ${GREEN}"Compilation successful!"${WHITE}; \
	fi

TOTAL := $(words $(SRCS))
COUNT = 0
BAR_LENGTH=20

%.o: %.cpp
	@$(CPP) $(CFLAGS) -c $< -o $@
	clear
	@$(eval COUNT=$(shell echo $$(($(COUNT)+1))))
	@echo -n $(BLUE)"Compiling " $(NAME) " : "$(CYAN)
	@echo -n "["
	@completed=$$(( $(COUNT) * $(BAR_LENGTH) / $(TOTAL) )); \
	remaining=$$(( $(BAR_LENGTH) - completed )); \
	for i in $$(seq 1 $$completed); do echo -n "█"; done; \
	for i in $$(seq 1 $$remaining); do echo -n "▒"; done
	@echo "] ($(COUNT)/$(TOTAL))"
clean:
	@clear
	@$(RM) $(OBJS)
	@echo ${BLUE}">------Files clean-------<\n"${WHITE}
fclean: clean
	@$(RM) $(NAME)
	@echo ${CYAN}">-------Name clean-------<\n"${WHITE}
re: fclean all

.PHONY: all clean fclean re cleanall first
