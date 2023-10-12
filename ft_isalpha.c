/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:06:11 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/11 11:55:17 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eventlib.h"

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((65 <= str[i] && str[i] <= 90)
				|| (97 <= str[i] && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}
