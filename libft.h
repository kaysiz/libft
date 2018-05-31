/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:51:51 by ksiziva           #+#    #+#             */
/*   Updated: 2018/05/31 16:40:12 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

char    *ft_strjoin(char const *s1, char const *s2);
int ft_isspace(int c);
int ft_isalnum(int c);
void    ft_bzero(void *s, int n);
int ft_atoi(const char *str);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_islower(int arg);
int ft_isprint(int c);
int ft_isalpha(int c);
int ft_isupper(int arg);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *str, int c, size_t n);
void    ft_putchar(char c);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl(char const *s);
void    ft_putendl_fd(char const *s, int fd);
void    ft_putstr(char const *s);
void    ft_pustr_fd(char const *s, int fd);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strchr(const char *s, int c);
void    ft_strclr(char *s);
int ft_strcmp(const char *str1, const char *str2);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strjoin(char const *s1, char const *s2);

#endif
