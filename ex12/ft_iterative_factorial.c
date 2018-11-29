/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfelissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:04:46 by dfelissa          #+#    #+#             */
/*   Updated: 2018/09/06 15:08:56 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int resultat;

	if (nb <= 0 || nb > 12)
	{
		if (nb == 0)
			return (1);
		return (0);
	}
	resultat = 1;
	while (nb > 1)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}
