/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <lodyiaremko@proton.me>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:26:10 by dsarmien          #+#    #+#             */
/*   Updated: 2024/12/11 15:53:58 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_memclean(char *ptr)

{
	if (ptr)
	{
		free(ptr);
		ptr = NULL;
	}
	return (ptr);
}

size_t	ft_strlen(const char *s)
{
	const char	*end;

	if (!s)
		return (0);
	end = s;
	while (*end)
		end++;
	return (end - s);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != (char)c)
	{
		if (!*s++)
			return (NULL);
	}
	return ((char *)s);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	size_t	s1_len;
	size_t	s2_len;
	size_t	fn_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	fn_len = s1_len + s2_len;
	new = (char *)malloc(fn_len + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, s1_len);
	ft_memcpy(new + s1_len, s2, s2_len);
	new[fn_len] = '\0';
	return (new);
}
