/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:02:46 by nakebli           #+#    #+#             */
/*   Updated: 2022/11/05 17:37:24 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
# define BUFF_SIZE  32

char    *get_next_line(int fd);

# endif