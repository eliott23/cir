#MAKEFILE TO TEST EACH .C FILE ALONE
CFILE=ft_memmove.c
FLAGS=-Wall -Wextra -Werror
all : a.out
	./a.out
a.out : $(CFILE) ft_ps.c ft_pi.c ft_put_tab.c
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
