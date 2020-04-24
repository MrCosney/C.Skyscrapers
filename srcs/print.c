/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 04:48:19 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 05:14:01 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print(char board[6][6])
{
	int		i;
    int		j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			printf ("%c", board[i][j]);
			if (j != 4)
				printf (" ");
			j++;
		}
		printf ("\n");
		i++;
	}
}