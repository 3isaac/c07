/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbouskk <isbouskk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:07:03 by isbouskk          #+#    #+#             */
/*   Updated: 2024/08/10 18:10:35 by isbouskk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*mag;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	mag = malloc(sizeof(int) * range);
	if (!mag)
		return (NULL);
	i = 0;
	while (i < range)
	{
		mag[i] = min + i;
		i++;
	}
	return (mag);
}

/*int main()
{
	int *tab = ft_range(10, 19);
	int *ptr = tab;

	while(ptr < tab + (19 - 10))
	{
		printf("%d,", *ptr);
		ptr++;
	}
	free(tab);
	return 0;
}*/
