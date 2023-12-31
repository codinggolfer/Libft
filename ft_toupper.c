/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 07:58:51 by eagbomei          #+#    #+#             */
/*   Updated: 2023/11/13 13:26:03 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	a;

	a = c;
	if (a >= 'a' && a <= 'z')
	{
		a = a - 32;
		return (a);
	}
	return (c);
}
