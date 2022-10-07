/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:55:12 by baltes-g          #+#    #+#             */
/*   Updated: 2022/10/07 15:58:39 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE__H__
# define GET_NEXT_LINE__H__

# define BUFFER_SIZE

char    *get_next_line(int fd);
char *next_acc(char *accumulative);
char    *read_from_acc(int fd, char *accumulative);
char    *read_from_file(int fd, char *accumulative);
size_t	ft_strlen_gnl(const char *str);
char	*ft_strdup_gnl(const char *s1);

#endif
