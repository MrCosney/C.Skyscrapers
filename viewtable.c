/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viewtable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 03:35:10 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 22:55:17 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	view_up(char **argv, char board[][9], int k, int c, int i)
{
	while (i < (4 * k))
	{
		board[k + 1][c] = argv[1][i];
		if (board[k + 1][c] == '1')
		    board[k][c] = k + '0';
		i = i + 2;
		c++;
	}
	c = 1;
	while (i < (6 * k))
    {
		board[c][0] = argv[1][i];
		if (board[c][0] == '1')
		    board[c][1] = k + '0';
		i = i + 2;
		c++;
	}
	c = 1;
	while (i < (8 * k))
	{
		board[c][k + 1] = argv[1][i];
		if (board[c][k + 1] == '1')
		    board[c][k] = k + '0';
		i = i + 2;
		c++;
	}
}

void	viewtable(char **argv, char board[][9], int k)
{
	int		i;
	int		c;

	i = 1;
	while (i < (k + 1))
	{
		c = 1;
		while (c < (k + 1))
		{
			board[i][c] = '0';
			c++;
		}
		i++;
	}
	i = 0;
	c = 1;
	while (i < (2 * k))
	{
		board[0][c] = argv[1][i];
		if (board[0][c] == '1')
		    board[1][c] = k + '0';
		i = i + 2;
		c++;
	}
	c = 1;
	view_up(argv, board, k, c, i);
}
