NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBFT_A = libft/libft.a

LIBFT = ./libft

SRC =   src/ft_check_repeat.c src/ft_error.c \
		src/ft_find_max.c src/ft_is_sorted.c \
		src/ft_move_a.c src/ft_move_b.c src/ft_move_all.c \
		src/ft_pivot.c src/ft_ps_atoi.c \
		src/ft_quicksort.c src/ft_quicksort2.c \
		src/ft_sort_three.c src/ft_sort.c \
		src/ft_start_sort.c src/main.c

SRC_O = $(SRC:.c=.o)

all:	$(SRC_O)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) $(LIBFT_A) $(SRC_O) -o $(NAME)
	@echo make done

clean:
	@rm -rf $(SRC_O)
	@make -C $(LIBFT) clean
	@echo make clean done

fclean:
	@rm -rf $(SRC_O) $(NAME)
	@make -C $(LIBFT) fclean
	@echo make fclean done

re: fclean all

.PHONY: all clean fclean re
