#MAKEFILE TO TEST EACH .C FILE ALONE
CFILE=ft_bzero.c
FLAGS=-Wall -Wextra -Werror
all : a.out
	./a.out
a.out : $(CFILE) ft_p.c
	cc $(FLAGS) $^ -I .
norm : $(filter-out $(CFILE),*.c)
	norminette $^
c :
	rm a.out
