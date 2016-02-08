/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 18:21:47 by gahubaul          #+#    #+#             */
/*   Updated: 2016/02/07 18:21:50 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     get_next_line(int const fd, char **line)
{
	char *str;

	if ((read_result = read(fd, buff, BUFF_SIZE)) == -1)
		return (-1);
}