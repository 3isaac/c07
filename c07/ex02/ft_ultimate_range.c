/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbouskk <isbouskk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:23:16 by isbouskk          #+#    #+#             */
/*   Updated: 2024/08/10 18:23:18 by isbouskk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	space;
	int	*mag;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	space = max - min;
	mag = (int *)malloc(sizeof(int) * space);
	if (!mag)
	{
		*range = NULL;
		return (0);
	}
	*range = mag;
	i = 0;
	while (i < space)
	{
		mag[i] = min + i;
		i++;
	}
	return (space);
}

/*#include<stdio.h>
int main() {
    int *range;
    int size;
    int i;
    
    // Test case 1: Normal range
    size = ft_ultimate_range(&range, -15, 0);
    printf("Test 1 (5 to 9):\n");
    printf("Size returned: %d\n", size);
    if (size > 0) {
        printf("Array contents: ");
        i = 0;
        while (i < size) {
            printf("%d ", range[i]);
            i++;
        }
        free(range);
    }
    
    // Test case 2: Invalid range (min >= max)
    size = ft_ultimate_range(&range, 10, 5);
    printf("\nTest 2 (Invalid range 10 to 5):\n");
    printf("Size returned: %d\n", size);
    
    return 0;
}*/
