/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbouskk <isbouskk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:24:14 by isbouskk          #+#    #+#             */
/*   Updated: 2024/08/12 21:32:19 by isbouskk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	lengths(char **sts, int size, char *sep)
{
	int	i;
	int	acc;

	i = 0;
	acc = 0;
	while (i < size)
	{
		acc += len(sts[i]);
		if (i < size - 1)
			acc += len(sep);
		i++;
	}
	return (acc);
}

char	*strconcat(char **strs, char *buff, int size, char *sep)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			buff[s++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				buff[s++] = sep[j++];
		}
		i++;
	}
	buff[s] = '\0';
	return (buff);
}

int	check_size(char **strs, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		i++;
		if (!strs[i])
			return (-1);
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buff;
	int		acc;

	if (check_size(strs, size) == -1)
		return (NULL);
	acc = lengths (strs, size, sep);
	buff = malloc (sizeof(char) * (acc + 1));
	if (!buff)
		return (NULL);
	buff = strconcat(strs, buff, size, sep);
	return (buff);
}
