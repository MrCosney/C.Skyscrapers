/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 03:34:21 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 23:34:17 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	viewtable(char **argv, char board[][9], int k);
void	print(char	board[][9], int k);
void	ft_putstr(char *str);
int		solution(char board[][9], char x, int k);
int		check_input(int argc, char **argv, int k);
int		size(int argc, char **argv);


int		main(int argc, char **argv)
{
	char	board[9][9];
	char	value;
	int		j;

	j = size(argc, argv);
	if (j > 6)
	{
		ft_putstr("Sorry, it can solve 7x7 or more, but comp. time is huge\n");
		return (0);
	}
	if (j == -1 || check_input(argc, argv, j))
	{
		ft_putstr("Error\n");
		return (0);
	}
	viewtable(argv, board, j);
	value = j + '0';
	if (solution(board, value, j))
	{
		ft_putstr("Error\n");
		return (0);
	}
	print(board, j);
	return (0);
}
