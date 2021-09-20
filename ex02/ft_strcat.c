/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 22:55:56 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/20 17:41:35 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	char	*a;
	int		i;

	a = s1;
	i = 0;
	while (s1[i] != '\0')
	{
		s1++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		*s1++ = *s2++;
	}
	*s1 = '\0';
	return (a);
}

/*int main(void) {
  char s1[30] = "hello";  
  char s2[] = ", world\n";
 
  strcat(s1, s2);
  printf("%s", s1);
  return 0;
}*/

/*int main(void)
{
	char test[256] = "";
	printf("%s\n", ft_strcat(test, "asdf"));
	printf("%s\n", ft_strcat(test, ""));
	printf("%s\n", ft_strcat(test, "zxcv"));
}*/

/* 
==== check -e ====
$expected = "asdf\nasdf\nasdfzxcv\n";*/