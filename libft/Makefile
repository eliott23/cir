NAME=libft.a
FLAGS=-Wall -Wextra -Werror
all : $(NAME)

$(NAME) : *.o
	ar -cr $(NAME) $(filter-out *_bonus.o,$^)

%.o : %.c
	cc  $(FLAGS) -c $(filter-out *_bonus.c,$^)

bonus : add

add : *_bonus.o
	ar -cr $(NAME) $^
%_bonus.o : %_bonus.c
	cc $(FLAGS) -c $^
clean :
	rm *.o
fclean : clean
	rm -f libft.a
re : fclean all
