/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_string_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:11:01 by yrhiba            #+#    #+#             */
/*   Updated: 2023/05/03 10:19:04 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmystr.h"

int	my_string_swap(char **s1, char **s2)
{
	char	*t;

	t = *s1;
	*s1 = *s2;
	*s2 = t;
	return (0);
}
