/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpryce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:40:58 by lpryce            #+#    #+#             */
/*   Updated: 2022/10/25 21:47:51 by lpryce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n){
	if(n >= 0)
	{
	write(1,"P",1);
	}
	else
	{
	write(1,"N",1);
	}

}

