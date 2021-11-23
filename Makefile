#MAKEFILE TO TEST EACH .C FILE ALONE

CFILE=ft_lstadd_back_bonus.c
FLAGS=-Wall -Wextra -Werror
SFLAGS=-fsanitize=address
MYFILES=ft_pi.c ft_ps.c ft_put_tab.c  ft_pc.c
all : a.out
	./a.out
a.out : *.c
	cc $(FLAGS) $^ -I .
gn : *.c
	norminette $(filter-out	$(MYFILES),$^)
n : $(CFILE)
	norminette $^
vv : Makefile
	cat $^
v : $(CFILE)
	cat $^ | grep -v libft.h | grep -v ps | grep -v pi
c :
	rm a.out
e :
	vim $(CFILE)
ee:
	vim Makefile
s :
	alias c="clear"
git :
	./gits
segfault :
	cc $(FLAGS) $(CFILE) $(MYFILES) $(SFLAGS)

cp :
	rm -rf libft/$(filter-out $@,$(MAKECMDGOALS))
	cp $(filter-out $@,$(MAKECMDGOALS)) libft/
gcp : *.c
	rm -rf libft/ft_*
	cp $(filter-out $(MYFILES),$^) libft/
h :
	vim libft.h
check :
	cat libft/$(filter-out $@,$(MAKECMDGOALS))
lc :
	rm libft/*.o
	rm libft/libft.a
rgcp : *.c
	rm $(filter-out $(MYFILES),$^) *.h
	cp libft/*.c .
	cp libft/*.h .
