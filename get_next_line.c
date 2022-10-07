/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:31:29 by baltes-g          #+#    #+#             */
/*   Updated: 2022/10/07 15:50:22 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char    *read_from_file(int fd, char *accumulative)
{
    char    *buffer;
    int     aux;
    char    *aux2;

    buffer = malloc(sizeof(char *) * (BUFFER_SIZE + 1));
    if (!buffer)
        return (NULL)
    while (!strchr(accumulative, '\n') && aux != 0)
    {
        aux = read(fd, buffer, BUFFER_SIZE);
        if (aux == -1)
            return (NULL);
        aux2 = accumulative;
        buffer[aux] = '\0';
        accumulative = ft_strjoin(accumulative, buffer);
        free(aux2);
    }
    free(buffer);
    return(accumulative);
}

char *next_acc(char *accumulative)
{
    while (accumulative != '\n' && accumulative != '\0')
        ++accumulative;
    if (accumulative == '\n')
        return (ft_strdup_gnl(accumulative, 0); //aqui pot haver leaks
    return (strdup("");
}

char    *read_from_acc(int fd, char *accumulative)
{
    int     i;
    char    *aux;

    i = 0;
    aux = ft_strdup_gnl(accumulative);
    return (aux);
}

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
    accumulative[fd] = next_acc(accumulative[fd]);
    return (aux_line);
}
