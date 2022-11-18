/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:25:26 by asadik            #+#    #+#             */
/*   Updated: 2022/11/17 19:30:45 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	owo;

	owo = 0;
	while (s[owo])
		owo++;
	return (owo);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = -1;
	joined = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!joined)
		return (NULL);
	while (++i < s1len)
	{
		joined[i] = s1[i];
	}
	while (i < (s1len + s2len))
	{
		joined[i++] = *(s2++);
	}
	joined[i] = '\0';
	free (s1);
	return (joined);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*mmal;
	int		i;

	len = ft_strlen(s1);
	mmal = malloc((len + 1) * sizeof(char));
	if (!mmal)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		mmal[i] = s1[i];
		i++;
	}
	mmal[i] = '\0';
	return (mmal);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*uwu;
	char	owo;

	i = 0;
	owo = ((char)c);
	uwu = ((char *)s);
	while (uwu[i] != owo && uwu[i] != '\0')
	{
		if (uwu[i] == owo)
		{
			return (&uwu[i]);
		}
		i++;
	}
	if (uwu[i] == owo)
	{
		return (&uwu[i]);
	}
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*owo;
	size_t	total;
	size_t	i;

	i = 0;
	total = (count * size);
	owo = malloc(total);
	if (!owo)
		return (NULL);
	while (i < total)
			((unsigned char *) owo)[i++] = '\0';
	return (owo);
}
