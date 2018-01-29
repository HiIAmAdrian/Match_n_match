/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 14:54:05 by adstan            #+#    #+#             */
/*   Updated: 2017/08/27 13:01:53 by adstan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursiv(char *s1, int i, char *s2, int j)
{
	if (s1[i] == 0 && s2[j] == 0)
		return (1);
	if (s1[i] == s2[j])
		return (recursiv(s1, i + 1, s2, j + 1));
	if (s2[j] == '*')
	{
		if (s1[i] != 0)
			return (recursiv(s1, i + 1, s2, j) + recursiv(s1, i, s2, j + 1));
		return (recursiv(s1, i, s2, j + 1));
	}
	return (0);
}

int	nmatch(char *s1, char *s2)
{
	return (recursiv(s1, 0, s2, 0));
}
