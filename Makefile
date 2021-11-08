CFILES=ft_memset.c
FLAGS=-Wall -Wextra -Werror
all : a.out
	./a.out
a.out : $(CFILES)
	cc $(FLAGS) $^ -I .
norm : $(filter-out $(CFILES),*.c)
	norminette $^
c :
	rm a.out
