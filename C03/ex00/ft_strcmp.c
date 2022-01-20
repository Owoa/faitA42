/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:00:14 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/19 15:13:57 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if(s1[i] !=  s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

int main()
{
	char a[] = "ABJ";
	char b[] = "ABC";
	printf("%d", ft_strcmp(a,b));
}
