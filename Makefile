SOURCES = server.c client.c
OBJECTS = $(SOURCES:.c=.o)

BSRC	= server_bonus.c client_bonus.c
B_OBJ	= $(BSRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: server client

bonus: server_bonus client_bonus

server: server.o libft
	$(CC) -o $@ $< -Llibft -lft

client: client.o libft
	$(CC) -o $@ $< -Llibft -lft

server_bonus: server_bonus.o libft
	$(CC) -o $@ $< -Llibft -lft

client_bonus: client_bonus.o libft
	$(CC) -o $@ $< -Llibft -lft

%.o: %.c
	$(CC) -c $(CFLAGS) $?

libft:
	make -C libft

clean:
	rm -f $(OBJECTS) $(B_OBJ)
	make -C libft clean
	
fclean: clean
	rm -f server client server_bonus client_bonus libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re