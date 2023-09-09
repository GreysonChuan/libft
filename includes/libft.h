/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:53:21 by gchuan            #+#    #+#             */
/*   Updated: 2023/07/06 21:53:57 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int				ft_atoi(char *str);
int				ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_isalpha(char c);
int				ft_isdigit(char c);
int				ft_isalnum(char c);
int				ft_isascii(int c);
int				ft_isprint(int c);
void			*ft_memset(void *str, int c, size_t n);
void			ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
void			*ft_calloc(size_t nitems, size_t size);
char			*ft_strdup(char *src);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char 			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);

#endif
