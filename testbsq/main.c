/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:21:07 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/07 11:21:14 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*grand_carre(int line, int taille, char tab[line][taille], char obs);
int	*ft_min(int embala[3]);
void ft_print_square(int line, int taille , char map[line][taille],int *bot, int *top, char plein);
void	ft_putstr(char *str);
int	ft_atoi(char *str);

int main(int argc, char **argv)
{	int rest = 1;
	while (argc != 1)
	{

	
		char buffer[3000000];
		int fd;
		int count = 0;
		int size;
		char p1;
		char p2;
		char p3;
		char *p4;
		int size2 = 0;
		int size3 = 0;
		int stop = 0;
		int stop1 = 0;
		int stop2 = 0;
		
	

	
	

	
		fd = open(argv[rest], O_RDWR);
		size = read (fd,buffer,3000000);
		while (buffer[count] != '\n')
		{
			size2++;
			count++;
		}
		
		close(fd);
		

		
			p4 = malloc(sizeof(char)*size2);
			p1 = buffer[size2 - 1];
			p2 = buffer[size2 - 2];
			p3 = buffer[size2 - 3];
			if (p1 == p2 || p2 == p3 || p1 == p3)
			{
				stop1 = 1;
				
				
				
				

				
				
			}
			count = 0;

			
			
			while (count < size2 - 3)
			{
				p4[count] = buffer[count];
				count++;
			}
			//count = 0;
			
			
			count = size2 + 1;
			while (buffer[count] != '\n')
			{
				size3++;
				count++;
			}
			if (size3 == 0)
			{
				stop2 = 1;
			}
			if (stop2 == 0)
			{

			
				int taille = ft_atoi(p4);
				if (taille <= 0 || buffer[size2 + 1] == '\0')
				{
					stop1 = 1;
				}

				//printf("p1 : %c , p2: %c , p3 : %c , p4 : %d \n", p1, p2, p3 , taille);
				
				
				//printf("%d",taille + 2);
				//printf("%d",size3 + 5);
				
				
				if (stop1 == 0)
				{

					char map[taille + 1][size3 + 1];
					char map1[taille + 1][size3 + 1];
					count = size2 + 1;
					int count1 = 0;
					int count2 = 0;
					int count3 = 0;
					int count10 = 0;
					while (count1 < taille /* + 1 */)
					{
						count2 = 0;
						while (count2 < size3  && buffer[count] != '\n')
						{
							if (buffer[count] != p2 && buffer[count] != p3)
							{
								
								
								
								
								stop = 1;
								break;
								
						
								
							}
							map[count1][count2] = buffer[count];
							count2++;
							count++;

						}
						
						
						if (count1 == 0)
						{
							count10 = count2;
						}
						if (count2 != count10)
						{
							
							stop = 1;
							break;
						

							
							
						}	
						
						map[count1][count2] = '\0';
						count++;
						count1++;
					}
					


					count = size2 + 1;
					count1 = 0;
					count2 = 0;
					count3 = 0;
					while (count1 < taille /* + 1 */)
					{
						count2 = 0;
						while (count2 < size3  && buffer[count] != '\n')
						{
							map1[count1][count2] = buffer[count];
							count2++;
							count++;

						}
						map1[count1][count2] = '\0';
						count++;
						count1++;
					}

					count = 0;
					/*while (count < taille)
					{
						printf("%s",map[count]);
						printf("\n");
						count++;
					}*/
					//taille = taille + 2;
					//size3 = size3 + 5;
					taille = taille + 1;
					size3 = size3 + 1;
				//	parcour(taille,size,map);
				//	grand_carre(taille, size3, map, 'o');
				//	printf("%d", carre[0]);
				
				
				

					if (stop == 0)
					{

					
						int *bottom = malloc(sizeof(int)* 3);
						bottom =  grand_carre(taille, size3, map, p2);
						int	*up = malloc(sizeof(int)* 2);
						up = ft_min(bottom);

						//printf("oy1 : %d \n oy2 : %d", bottom[0], bottom[1]);
						//printf("oy1 : %d \n oy2 : %d\m", up[0], up[1]);
						ft_print_square(taille ,size3, map1, bottom, up, p1);
						count = 0;
						while (count < taille - 1)
						{
							ft_putstr(map1[count]);
							write(1,"\n",1);
							count++;
							
						}
					}
				}
			}
		
			
		
		if (stop1 == 1 || stop == 1 || stop2 == 1)
			{
				write(2,"map error\n",10);

			}
	

		if (argc > 2)
		{
			write(1,"\n",1);
		}
		rest++;
		argc--;
		

	}


	return 0;

}
