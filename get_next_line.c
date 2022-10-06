/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:31:29 by baltes-g          #+#    #+#             */
/*   Updated: 2022/10/06 19:18:03 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    static char *accumulative[4096];
    char        *auxi_line;
    if (fd < 0 || BUFFER_SIZE < 1) 
        return (NULL);
    accumulative[fd] = read_from_file(fd, accumulative[fd]);
    if (!accumulative[fd])
        return (NULL);
    aux_line = read_from_acc(fd, accumulative[fd]);
    if (!aux_line)
        return (NULL);
    return (aux_line);
}
