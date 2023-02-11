NAME = tester

SRCS_PATH =./

SRCS_TEST =./tests

OBJS_PATH = ./objects

SRCS_NAME = main.c

DIRLIBFT = "./libft"
DIRLIBUNIT = "./libunit"
DIRTESTS = "./tests"

INCLUDES = -I$(DIRLIBUNIT) -I$(DIRLIBFT) -I$(DIRTESTS)

SRCS = $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))


HEADER_DIR = ./

FLAG = -Wall -Wextra -Werror -I$(HEADER_DIR)

CC = GCC $(FLAG) $(INCLUDES)

OBJS = ${SRCS:.c=.o}

%.o:%.c
	$(CC) -o $@ -c $<

${NAME} : ${OBJS}
	make -s -C libunit
	make -C tests
	#ar rcs $(NAME) $(OBJS)
	$(CC)   $(OBJS) -L$(DIRLIBUNIT) -lunit -L${DIRTESTS} -ltests 

all : ${NAME}

clean :
	rm -f ${OBJS} $(OBJS_BONUS)
	$(MAKE) -C libunit clean
	$(MAKE) -C tests clean

fclean : clean
	rm -f ${NAME}
	$(MAKE) -C libunit fclean
	$(MAKE) -C tests fclean

re : fclean all


.PHONY : all clean fclean re
