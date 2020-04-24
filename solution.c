/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 04:21:15 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 23:15:38 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*empty_spots(char board[][9], int *pos, char var, int k);
int		check_position(char board[][9], int *pos, char var, int k);

int		solution(char board[][9], char x, int k)
{
	int		pos[2];

    empty_spots(board, pos, x, k);
	if (pos[0] == -1)
		x = x - 1;
	if (pos[0] == -1 && x == '0')
		return (0);
	empty_spots(board, pos, x, k);
	while (pos[1] < (k + 1))
	{
		if (check_position(board, pos, x, k) == 0)
		{
			board[pos[0]][pos[1]] = x;
			if (!solution(board, x, k))
				return (0);
			board[pos[0]][pos[1]] = '0';
			pos[1] = pos[1] + 1;
		}
		else
			pos[1] = pos[1] + 1;
	}
	return (1);
}
