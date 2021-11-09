#MAKEFILE TO TEST EACH .C FILE ALONE
CFILE=ft_strlcpy.c
FLAGS=-Wall -Wextra -Werror
MYFILES=ft_ps.c ft_pi.c ft_put_tab.c
all : a.out
	./a.out
a.out : $(CFILE) $(MYFILES)
	cc $(FLAGS) $^ -I .
gn : *.c
	norminette $(filter-out	$(MYFILES),$^)
n : $(CFILE)
	norminette $^
vv : Makefile
	cat $^
v : $(CFILE)
	cat $^ | grep -v lib
c :
	rm a.out
e :
	vim $(CFILE)
