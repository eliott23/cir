FLAGS=-Wall -Wextra -Werror
all : a.out
	./a.out
a.out : *.c
	cc $(FLAGS) $^ -I .
norm : $(filter-out test.c,*.c)
	norminette $^
clean :
	rm a.out
