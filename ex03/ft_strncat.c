/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:55:55 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/20 22:35:34 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*a;
	unsigned int	i;

	a = dest;
	while (*dest)
	{
		dest++;
	}
	i = 1;
	while (*src && i < nb)
	{
		*dest++ = *src++;
/* 		*dest = *src;
		dest++;
		src++; */
		
	}
	*dest = '\0';
	return (a);

/* 	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;

	while (dest[i])
	{
		i++;
	}
	//printf("%d", i);
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest); */
}

/* int	main(void)
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
	printf("%s\n", ft_strncat(test, "asdf", 16));
	printf("%s\n", ft_strncat(test, "", 16));
	printf("%s\n", ft_strncat(test, "qwerty", 0));
	printf("%s\n", ft_strncat(test, "asdf", 3));
} */
