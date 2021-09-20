/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:55:55 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/20 21:56:13 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
/* 	char			*a;
	unsigned int	i;

	a = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	i = 1;
	while (*src != '\0' && i <= nb)
	{
		*dest++ = *src++;
		i++;
	}
	return (a); */

	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;

	while (dest[i])
	{
		i++;
	}
	printf("%d", i);
	while (src[j] && j <= nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
/* 	while (*src != '\0' && i <= nb)
	{
		*dest++ = *src++;
		i++;
	} */
}

/*int	main(void)
{
	char	dest[256] = "\0nabcd";
	printf("%s\n", ft_strncat(dest, "efghij", 6));
	printf("%s\n", ft_strncat(dest, "", 16));
	printf("%s\n", ft_strncat(dest, "qwerty", 0));
	printf("%s\n", ft_strncat(dest, "asdf", 3));
}*/
