/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:21:18 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/08 12:05:10 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int s;
	char tmp;

	i = 0;
	s = 0;
	while (str[s])
		s++;
	s--;
	while (i < s)
	{
		tmp = str[s];
		str[s] = str[i];
		str[i] = tmp;
		i++;
		s--;
	}
	return (str);
}
