/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 03:34:46 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 23:11:33 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ch_up(char board[][9], int *pos, int k)
{
	int		i;
	int		j;
	char	max;

	i = 1;
	j = 1;
	max = '$';
	board[pos[0]][pos[1]] = '2';
	while (board[i][pos[1]] != k + '0')
	{
		if (board[i][pos[1]] > max)
		{
			max = board[i][pos[1]];
			j++;
		}
		i++;
	}
	board[pos[0]][pos[1]] = '0';
	if (j != (board[0][pos[1]] - '0'))
		return (1);
	return (0);
}

int		ch_dw(char board[][9], int *pos, int k)
{
	int		i;
	int		j;
	char	max;

	i = k;
	j = 1;
	max = '$';
	board[pos[0]][pos[1]] = '2';
	while (board[i][pos[1]] != k + '0')
	{
		if (board[i][pos[1]] > max)
		{
			max = board[i][pos[1]];
			j++;
		}
		i--;
	}
	board[pos[0]][pos[1]] = '0';
	if (j != (board[k + 1][pos[1]] - '0'))
		return (1);
	return (0);
}

int		ch_l(char board[][9], int *pos, int k)
{
	int		i;
	int		j;
	char	max;

	i = 1;
	j = 1;
	max = '$';
	board[pos[0]][pos[1]] = '2';
	while (board[pos[0]][i] != k + '0')
	{
		if (board[pos[0]][i] > max)
		{
			max = board[pos[0]][i];
			j++;
		}
		i++;
	}
	board[pos[0]][pos[1]] = '0';
	if (j != (board[pos[0]][0] - '0'))
		return (1);
	return (0);
}

int		ch_r(char board[][9], int *pos, int k)
{
	int		i;
	int		j;
	char	max;

	i = k;
	j = 1;
	max = '$';
	board[pos[0]][pos[1]] = '2';
	while (board[pos[0]][i] != k + '0')
	{
		if (board[pos[0]][i] > max)
		{
			max = board[pos[0]][i];
			j++;
		}
		i--;
	}
	board[pos[0]][pos[1]] = '0';
	if (j != (board[pos[0]][k + 1] - '0'))
		return (1);
	return (0);
}

int		check_position(char b[][9], int *p, char var, int k)
{
	int		index;

	index = 1;
	if (b[p[0]][p[1]] != '0')
		return (1);
	while (index < (k + 1))
	{
		if (b[p[0]][index] == var && p[1] != index)
			return (1);
		index++;
	}
	index = 1;
	while (index < (k + 1))
	{
		if (b[index][p[1]] == var && p[0] != index)
			return (1);
		index++;
	}
	if (var == '2')
	{
		if (ch_up(b, p, k) || ch_dw(b, p, k) || ch_l(b, p, k) || ch_r(b, p, k))
			return (1);
	}
	return (0);
}
