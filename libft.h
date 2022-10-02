/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:39:48 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/02 20:09:27 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);

int		ft_isalnum(int a);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_bzero(void *str, size_t n);

char	ft_toupper(int n);

char	ft_tolower(int n);

size_t	ft_strlen(char *str);

void	*ft_memset(void *str, int ch, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

int		ft_isprint(int x);

int		ft_isdigit(int f);

int		ft_isascii(int c);

int		ft_isalpha(int a);

void	*ft_calloc(size_t count, size_t size);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strchr(const char *s, int c);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_strdup(const char *s1);

char	*ft_strrchr(const char *s, int c);
#endif