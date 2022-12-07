NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFLAGS += -I include
# -I se utiliza para especificar un directorio adicional donde Make debe buscar 
#archivos de cabecera al momento de compilar un programa

#Especifica los directorios que contienen los archivos fuente
DIR_TOOLS = src/tools

DIR_SRC = src

#Genera una lista de archivos fuente en el directorio de tools
SRC_TOOLS = src/tools/ft_putchar.c\
			src/tools/ft_puthex_ptr.c\
			src/tools/ft_putnbr_base.c\
			src/tools/ft_putstr.c\
			src/tools/ft_putunsnbr.c\
			src/tools/ft_strlen.c

#Genera una lista de archivos fuente en el directorio principal (src)
SRC_SRC = src/ft_formatprint.c\
			src/ft_printf.c

#Combina las listas de archivos fuente en una sola lista
SRCS = $(SRC_TOOLS) $(SRC_SRC)

#Genera una lista de archivos objeto a partir de los archivos fuente
OBJS = $(SRCS:.c=.o)

#Regla para compilar todos los archivos fuente
all: $(NAME)

#Regla para compilar el archivo de biblioteca y para compilar archivos fuente
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -c
	ar crs $(NAME) $(OBJS)

#Regla para limpiar los archivos objeto y el archivo de salida
clean:
	@rm -rf $(OBJS)
fclean : clean
	@rm -rf $(NAME)

#Regla para recompilar el archivo de biblioteca estática
re : fclean all

.PHONY: all re clean fclean 

