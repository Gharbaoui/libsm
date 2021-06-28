NAME		= libasm.a


OBJ			= ft_strlen.o	\
			  ft_strcpy.o	\
			  ft_strcmp.o	\
			  ft_strdup.o	\
			  ft_write.o	\
			  ft_read.o		\

HELP_COMPL = nasm -f macho64

all:$(NAME)

$(NAME):
			$(HELP_COMPL) ft_strlen.s
			$(HELP_COMPL) ft_strcpy.s
			$(HELP_COMPL) ft_strcmp.s
			$(HELP_COMPL) ft_strdup.s
			$(HELP_COMPL) ft_write.s
			$(HELP_COMPL) ft_read.s
			ar rc $(NAME) $(OBJ)
clean:
	rm -f *o
fclean:clean
		rm -f $(NAME)
re:fclean
	make all
