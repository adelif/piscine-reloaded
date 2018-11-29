/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfelissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:00:20 by dfelissa          #+#    #+#             */
/*   Updated: 2018/09/03 16:00:55 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp1;
	int tmp2;

	tmp1 = *a;
	tmp2 = *b;
	*a = tmp2;
	*b = tmp1;
}
