/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tablen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 10:57:42 by mbui              #+#    #+#             */
/*   Updated: 2020/01/15 13:55:55 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tablen(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
