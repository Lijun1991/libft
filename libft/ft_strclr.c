/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 20:06:53 by lwang             #+#    #+#             */
/*   Updated: 2016/10/20 13:49:04 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int j;

	j = 0;
	if (!s)
		return ;
	while (s[j])
	{
		s[j] = '\0';
		j++;
	}
	s[j] = '\0';
}
