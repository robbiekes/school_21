/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgwyness <mgwyness@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:11:30 by mgwyness          #+#    #+#             */
/*   Updated: 2022/01/06 20:31:48 by mgwyness         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_seps(char const *s, char c)
{
	int	seps;
	int	i;

	i = 0;
	seps = 0;
	while (s[i] == c)
		i++;
	if (s[i] != '\0')
		i++;
	else
		return (-1);
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
			seps++;
		i++;
	}
	return (seps);
}

static int	ft_free_mem(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (1);
}

static int	ft_allocate_mem(const char *s, char **arr, char c)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		count = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			count++;
			i++;
		}
		if (count > 0)
		{
			arr[j] = (char *)malloc(sizeof(char) * (count + 1));
			if (arr[j++] == 0)
				return (ft_free_mem(arr));
		}
	}
	return (0);
}

static void	ft_fill_str(const char *s, char **arr, char c)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		count = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			arr[j][count++] = s[i++];
		if (count > 0)
			arr[j++][count] = '\0';
	}
	arr[j] = 0;
}

char	**ft_split(char *s, char c, int *argc)
{
	char	**arr;
	int		seps;

	if (s == 0)
		return (0);
	seps = ft_seps(s, c);
	*argc = seps + 2;
	arr = (char **)malloc(sizeof(char *) * (seps + 2));
	if (arr == 0)
		return (0);
	if (ft_allocate_mem(s, arr, c))
		return (0);
	ft_fill_str(s, arr, c);
	return (arr);
}
