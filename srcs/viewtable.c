/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viewtable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 03:35:10 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 04:47:46 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	viewtable(char **argv, char board[6][6])
{
	int		i;
	int		c;

	i = 0;
	c = 1;
	while (i < 8)
	{
		board[0][c] = argv[1][i];
		i = i + 2;
		c++;
	}
	c = 1;
	while (i < 16)
	{
		board[5][c] = argv[1][i];
		i = i + 2;
		c++;
	}
	c = 1;
	while (i < 24)
    {
		board[c][0] = argv[1][i];
		i = i + 2;
		c++;
	}
	c = 1;
	while (i < 32)
	{
		board[c][5] = argv[1][i];
		i = i + 2;
		c++;
	}
	i = 1;
	while (i < 5)
	{
		c = 1;
		while (c < 5)
		{
			board[i][c] = '0';
			c++;
		}
		i++;
	}
	board[0][0] = '.';
	board[5][5] = '.';
	board[0][5] = '.';
    board[5][0] = '.';
}
