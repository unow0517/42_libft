CC := cc

CFLAGS := -Wall -Werror -Wextra

CFILES =  ft_isalpha.c	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strdup.c ft_calloc.c ft_itoa.c ft_strmapi.c ft_striteri.c

OFILES = $(CFILES:.c=.o)

NAME = libft.a

#target: prerequisites
#	command
#	command...
#prerequisites(=dependencies) are file names which should exists to run target 

#[make] will run [all] automatically since it is the first target

all: $(NAME)

#make libft.a will make an archive(library) with OFILES
$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %c 
	$(CC) -c $(CFLAGS) -o $(OFILES) $(CFILES)

# $@ = target name
# $< = The name of the first prerequisite
# -c = Prevents the preprocessor from removing comments, except those on the preprocessing directive lines.
# -o = make obj file
# #^ = output all prerequisities

#[make clean] will remove all OBJ files
clean:
	rm -f $(OFILES)

#it first run [make clean], then remove [libft.a]
fclean: clean
	rm -f $(NAME)

#rebuild, first it delete all obj files and library with [fclean] and build 
re: fclean all

#libft.a should be generated at the end 