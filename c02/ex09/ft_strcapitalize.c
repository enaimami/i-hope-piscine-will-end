/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 01:19:10 by mdisbuda          #+#    #+#             */
/*   Updated: 2025/11/17 01:19:11 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_not_alpha_numeric(int a)
{
	if (
		(a >= 'A' && a <= 'Z')
		|| (a >= '0' && a <= '9')
		|| (a >= 'a' && a <= 'z')
	)
	{
		return (0);
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nw;

	str = ft_strlowcase(str);
	i = 0;
	nw = 1;
	while (str[i] != '\0')
	{
		if (nw && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			nw = 0;
		}
		nw = ft_is_not_alpha_numeric(str[i]);
		i++;
	}
	return (str);
}
