#MAKEFILE TO TEST EACH .C FILE ALONE
CFILE=ft_memcpy.c
FLAGS=-Wall -Wextra -Werror
all : a.out
	./a.out
a.out : $(CFILE) ft_pi.c ft_ps.c
	cc $(FLAGS) $^ -I .
gn : *.c
	norminette $^
n : $(CFILE)
	norminette $^
vv : Makefile
	cat $^
v : $(CFILE)
	cat $^ | grep -v lib
c :
	rm a.out
