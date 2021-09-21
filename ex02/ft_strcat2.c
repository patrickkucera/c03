/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 22:55:56 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/21 01:59:26 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
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

int	main(void)
{
	char test1[500] = "BGuOGuVohcxujSVLYTzOVkawfUW";
	/* char test2[500] = "AMOvtyZoFBzsqetaVievoNnPHRobvzPfEgiaxJsQldMVvYozMROymhvtskocpYX ";*/
	char test3[500] = "KYnsyDUZKwdhhLiNYGADVKNgavtVCKvsOshGMcJvMiSgLgYlVcFijRTdskocpYX ";
	/*char test4[500] = "CPIzsjnGhLVMxryqMBfOgfkeEziqzFTrQxaNYXoAPwcUrMKtjcrgQAEmYKCZqsb ";
	char test5[500] = "vsbzMevpIQfdmIDjDoWZyqssqrzpDkAnAPAJTJMjkjrULKxKtbthkTZgpQBuKYBRcHo ";
	char test6[500] = "mmaQqWIESAdHDWKiPynzPzLHemVSymhZWOAJTJMjkjrULKxKtbthkTZgpQBuKYBRcHo ";
	char test7[500] = "CUPEignFtlvsVBBAIuhtpxYmawAzRahogHnZEhMjkjrULKxKtbthkTZgpQBuKYBRcHo ";
	char test8[500] = "NxIjlMXLywjNSUKqGdxvwRTSmFDJAodaMDignpUWVfMmzvoaqwthkTZgpQBuKYBRcHo ";
	char test9[500] = "JUVZayGQRTQafzhNnmEqHqpSLYDMvhdZmIemaTpJzdnqrQTdnKNSROEqsLkcKYBRcHo ";
	char test10[500] = "toto ";
	char test11[500] = "42l33rGQRTQafzhNnmEqHqpSLYDMvhdZmIemaTpJzdnqrQTdnKNSROEqsLkcKYBRcHo ";
	char test12[500] = "pouicrGQRTQafzhNnmEqHqpSLYDMvhdZmIemaTpJzdnqrQTdnKNSROEqsLkcKYBRcHo "; */

	char btest1[500] = " jSVLYTzOVkawfUW";
/* 	char btest2[500] = "sQldMVvYozMROymhvtskocpYX";*/
	char btest3[500] = "MiSgLgYlVcFijRTd";
/*	char btest4[500] = "FTrQxaNYXoAPwcUrMKtjcrgQAEmYKCZqsb";
	char btest5[500] = "kjrULKxKtbthkTZgpQBuKYBRcHo";
	char btest6[500] = "zLHemVSymhZWO";
	char btest7[500] = "nFtlvsVBBAIuhtpxYmawAzRahogHnZEh";
	char btest8[500] = "DJAodaMDignpUWVfMmzvoaqw";
	char btest9[500] = "JzdnqrQTdnKNSROEqsLkc";
	char btest10[500] = "";
	char btest11[500] = "l33r";
	char btest12[500] = "pouic"; */

	char *res, *exp;
	
	res = ft_strcat(test1, btest1);
	exp = strcat(test1, btest1);
	printf("%s\n%s -> %d\n", res, exp, res == exp);
	res = ft_strcat(test3, btest3);
	exp = strcat(test3, btest3);
	printf("%s\n%s -> %d\n", res, exp, res == exp);	
}

/* 
==== check -e ====
$expected = "asdf\nasdf\nasdfzxcv\n";*/