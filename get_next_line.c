/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:01:21 by nakebli           #+#    #+#             */
/*   Updated: 2022/11/05 18:08:32 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    size_t *line;
    size_t i;
    size_t size;
    char buffer[BUFF_SIZE + 1];
    
    line = NULL;
    if (!(*line = malloc(BUFF_SIZE)))
        return (NULL);
    line [0] = '\0';
    while(read(fd, buffer, BUFF_SIZE) > 0)
    {
        buffer[BUFF_SIZE + 1] = '\0';
        if (buffer[0] == '\n')
            return (NULL);
        if (strchr(buffer, '\n') != NULL)
        {
            i = 0;
            size = strlen(line);
            buffer[BUFF_SIZE + 1] = '\0';
            while (buffer[i] != '\0')
            {
                if (buffer[i] == '\n')
                {
                    if (!(strlcat(*line, buffer, i + 1)))
                        retune (NULL);
                }
                i++;
            } 
        }
        if (!(strlcat(*line, buffer, i + 1)))
            retune (NULL);
    }
    return (line);
}