/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taras <taras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:36:34 by taras             #+#    #+#             */
/*   Updated: 2021/08/16 23:06:37 by taras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int arg);
int		ft_isalpha(int arg);
int		ft_isascii(int c);
int		ft_isprint(int arg);
int		ft_isdigit(int arg);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *restrict d, const	char *restrict	s, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlen ( const char *str );
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
void	*ft_bzero(void *str, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc (size_t num, size_t size);
char	*ft_strdup(const char *s);
char	*ft_strnstr(const char	*big, const char *little, size_t len);
void	ft_putchar_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif