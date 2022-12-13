# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 10:21:22 by lcollado          #+#    #+#              #
#    Updated: 2022/12/13 17:53:39 by lcollado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILE VARIABLES
NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror
INCLUDE = -I inc
CC = gcc $(FLAGS) $(INCLUDE)
# -I se utiliza para especificar un directorio adicional donde Make debe buscar 
#archivos de cabecera al momento de compilar un programa

# CODE VARIABLES
#Especifica los directorios que contienen los archivos fuente
#PATH
DIR_TOOLS = tools
DIR_SRC = src
DIR_OBJ = obj

#Genera una lista de archivos fuente en el directorio de tools
SRC_TOOLS = ft_putchar.c \
			ft_puthex_ptr.c \
			ft_putnbr_base.c \
			ft_putstr.c \
			ft_putunsnbr.c \
			ft_strlen.c \
			ft_puthex.c 

#Combina las listas de archivos fuente en una sola lista
SRCS = ${SRC_TOOLS:%=$(DIR_TOOLS)/%} \
		ft_formatprint.c \
		ft_printf.c

#Genera una lista de archivos objeto a partir de los archivos fuente
OBJS = $(SRCS:%.c=$(DIR_OBJ)/%.o)

#RULES
#Regla para compilar todos los archivos fuente
all: $(NAME)

#Regla para compilar el archivo de biblioteca y para compilar archivos fuente
$(NAME) : $(OBJS)
	ar crs $(NAME) $(OBJS)

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $< -o $@

#Opción de incluir:
#	mkdir -p $(DIR_OBJ) 2> /dev/null
#indica que se debe crear el directorio especificado por la variable $(OBJ_PATH),
#y que cualquier mensaje de error generado por el comando mkdir 
#(como "No se puede crear el directorio porque ya existe")
#debe ser redirigido a /dev/null, que es un archivo especial en el sistema operativo
#que descarta cualquier entrada o salida.
#De esta manera, se evita que se muestren mensajes de error en la consola cuando se intenta crear el directorio y ya existe. Esto puede ser útil
# por ejemplo, si se desea crear el directorio de forma silenciosa sin mostrar mensajes de error.

#A la hora de compilar:
#la variable $< se refiere al primer archivo de la lista de dependencias de la regla de compilación
#mientras que $@ se refiere al archivo objeto resultante
#$< se refiere a $(DIR_SRC)/%.c y $@ se refiere a $(DIR_OBJ)/%.o.

#Regla para limpiar los archivos objeto y el archivo de salida
clean:
	@rm -rf $(DIR_OBJ)
fclean : clean
	@rm -rf $(NAME)

#Regla para recompilar el archivo de biblioteca estática
re : fclean all

.PHONY: all re clean fclean 

#Cada letra del comando crs es una opción que se pasa al comando ar, que es el comando de archivo de biblioteca en Linux.
#La opción c indica que se debe crear un archivo de biblioteca,
#la opción r indica que se deben reemplazar cualquier archivo de biblioteca existente con el mismo nombre,
#y la opción s indica que se debe crear una biblioteca estática.

#En resumen, el comando crs se utiliza para indicar al comando ar que cree una biblioteca estática
#y que reemplace cualquier archivo de biblioteca existente con el mismo nombre.

#El operador %= en un Makefile se usa para reemplazar una parte de una cadena de texto por otra cadena.
#En este caso, se está reemplazando la extensión .c de los nombres de los archivos en la variable PRINT por print/.
#Esto significa que el resultado de la variable SRCS será una lista de archivos con sus nombres modificados de la siguiente manera:

#ft_format_printf.c se convierte en print/ft_format_printf.c

#De esta manera, si se utiliza el comando mkdir -p foo/bar/baz, se crearán los directorios foo, bar y baz, en ese orden, si todavía no existen.

