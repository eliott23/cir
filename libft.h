/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:15:52 by aababach          #+#    #+#             */
/*   Updated: 2021/11/15 18:12:43 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void	ps(char *str);
void	pi(int	tab);
void	ft_put_tab(size_t b, int	*c);

int	ft_isalpha(int c); // check
int	ft_isdigit(int c); // check
int	ft_isalnum(int c); // check
int	ft_isascii(int c); // check
int	ft_isprint(int c); //check
size_t	ft_strlen(const char *s); // check
void	*ft_memset(void *b, int c, size_t len); //check
void	ft_bzero(void *s, size_t n); // check
void	*ft_memcpy(void *dst, const void *src, size_t n); //check
void	*ft_memmove(void *dst, const void *src, size_t len); //check
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize); //check
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize); //check
int ft_toupper(int c); //check
char	*ft_strchr(const char *s, int c); //check
char	*ft_strrchr(const char *s, int c); //check
int	ft_strncmp(const char *s1, const char *s2, size_t n); //check
void	*ft_memchr(const void *s, int c, size_t n); //check
int	ft_memcmp(const void *s1, const void *s2, size_t n); //check
char	*ft_strnstr(const char *haystack, const char *needle, size_t len); //check
int ft_atoi(const char *str); //check
char	*ft_strdup(const char *s1);
#endif
