/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbouskk <isbouskk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:44:43 by isbouskk          #+#    #+#             */
/*   Updated: 2024/08/10 18:22:33 by isbouskk         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		size;
	char	*dup;
	char	*og_src;

	if (!src)
		return (NULL);
	og_src = src;
	size = len(src);
	dup = malloc(sizeof(char) * (size + 1));
	while (*src)
	{
		*dup = *src;
		dup++;
		src++;
	}
	*dup = '\0';
	src = og_src;
	dup -= size;
	return (dup);
}
