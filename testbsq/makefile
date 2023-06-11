# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 11:42:01 by mchaduc           #+#    #+#              #
#    Updated: 2023/06/07 13:36:22 by mchaduc          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

bsq : main.o ft_print.o biggest_square.o ft_atoi.o
	gcc main.o ft_print.o biggest_square.o ft_atoi.c -o	bsq
	chmod 777 bsq
	rm main.o ft_print.o biggest_square.o ft_atoi.o

main.o : main.c
	gcc main.c -c

ft_print.o : ft_print.c
	gcc ft_print.c -c

biggest_square.o : biggest_square.c
	gcc biggest_square.c -c

ft_atoi.o : ft_atoi.c
	gcc ft_atoi.c -c
