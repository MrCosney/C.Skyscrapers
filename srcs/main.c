/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 03:34:21 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 05:23:05 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "stdio.h"

int		main(int argc, char **argv)
{
	char	board[6][6];
	char	value;
	int		i;

	value = '4';
	if (check_input(argc, argv))
    {
		printf ("Error\n");
		return (0);
	}
	viewtable(argv, board);
	if (solution(board, value))
	{
		printf("Error\n");
		return (0);
	}
	print(board);
	return (0);
}
