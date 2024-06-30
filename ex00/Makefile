NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror

PC = megaphone.cpp

PO = ${PC:.cpp=.o}

all: $(NAME)

$(NAME): $(PO)
	$(CC) $(CFLAGS) $^ -o $@

$(PO): $(PC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(PO)

fclean: clean
	$(RM) $(NAME)

re: fclean all
