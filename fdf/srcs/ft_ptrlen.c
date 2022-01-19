/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgwyness <mgwyness@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:36:40 by mgwyness          #+#    #+#             */
/*   Updated: 2022/01/16 19:22:31 by mgwyness         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ptrlen(char **s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		free(s[i++]);
	free(s);
	return (i);
}