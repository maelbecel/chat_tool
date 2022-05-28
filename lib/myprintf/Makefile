##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

NAME		=		libmyprintf.a

MYH			=		printf.h \

SRC			=		displaybinary.c \
					displaychar.c \
					displaynbr_dec.c \
					displaynbr_hexa_capital.c \
					displaynbr_hexa.c \
					displaynbr_octal.c \
					displaynbr.c \
					displaypercent.c \
					displaypointer.c \
					displaystr_unprintable.c \
					displaystr.c \
					my_printf.c

CFLAGS      +=	    -I . -fvisibility=hidden

OBJ			=		$(SRC:.c=.o)

SRC_COUNT    :=         $(words $(SRC))

NB           =         0

RM			=		rm -f

ECHO		=		/bin/echo -e
DEFAULT		=		"\033[00m"
BOLD		=		"\e[1m"
RED			=		"\e[31m"
GREEN		=		"\e[32m"
LIGHT_BLUE	=		"\e[94m"
WHITE		=		"\e[1;37m"

all:	$(NAME)

$(NAME):		$(OBJ)
			@(ar rc $(NAME) *.o)
			@(mv $(NAME) ../)
			@(cp $(MYH) ../../include/)
			@($(ECHO) " ")
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
			"Lib 'myprintf' sucessfully build. "$(DEFAULT))

clean:
			@($(RM) $(NAME))
			@($(RM) $(OBJ))
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
			"Clean lib 'myprintf'"$(DEFAULT))

fclean:		clean
			@($(RM) ../$(NAME))
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
			"Fclean lib 'myprintf'"$(DEFAULT))

re:		fclean all

debug:	CFLAGS += -g3 -pg
debug:	re
			@gcc -o $(NAME) $(OBJ) $(INCLUDE) $(LDFLAGS) \
			&& $(ECHO) $(BOLD) $(GREEN)"► BUILD SUCCESS !"$(DEFAULT) \
			|| ($(ECHO) $(BOLD) $(RED)"► BUILD FAILED"$(DEFAULT) && exit 1)

%.o:		%.c
			@$(eval NB=$(shell echo $$(($(NB)+1))))
			@gcc -c -o $@ $^ $(CFLAGS) \
			&& python3 ../../build/build.py $< $(NB) $(SRC_COUNT)

.PHONY: all clean fclean re
