/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:29:12 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/26 09:34:57 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strlen(int size, char **strs)
{
	int	i;
	int	len;
	int	pos;

	len = 0;
	pos = 0;
	while (pos < size)
	{
		i = 0;
		while (strs[pos][i])
		{
			len++;
			i++;
		}
		pos++;
	}
	return (len);
}

int	ft_seplen(char *sep)
{
	int	seplen;

	seplen = 0;
	while (sep[seplen])
	{
		seplen++;
	}
	return (seplen);
}

char	*cat(char *dest, char *src)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*join_strs(char **strs, int size, char *sep, char *ptr)
{
	int	pos;

	pos = 0;
	while (pos < size)
	{
		ptr = cat(ptr, strs[pos]);
		if (pos < size - 1)
		{
			cat(ptr, sep);
		}
		pos++;
	}
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strslen;
	int		seplen;
	char	*ptr;
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		if (str == NULL)
			return (0);
		str[0] = '\0';
		return (str);
	}
	strslen = ft_strlen(size, strs);
	seplen = ft_seplen(sep);
	seplen = strslen + seplen * size - 1;
	ptr = (char *)malloc(sizeof(char) * seplen + 1);
	if (ptr == NULL)
		return (0);
	ptr = join_strs(strs, size, sep, ptr);
	return (ptr);
}
/*
int     main()
{
        char **str = (char **)malloc(sizeof(char*) * 9);
        char sep[] = "**";
        str[0] = "I've";
        str[1] = "been";
        str[2] = "stuck with this";
        str[3] = "shit";
        str[4] = "";
        str[5] = "days";
        str[6] = "";
        str[7] = "fuck";
        str[8] = "sake";
        printf("%s", ft_strjoin(9, str, sep));
}
*/
