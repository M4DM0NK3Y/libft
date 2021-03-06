/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:14:08 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:15 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Attempts t find string "needle", in string "haystack" up to 
	"len" amount of characters.
	Returns pointer to "needle" if found, or NULL.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	lneedle;
	char			*hay;

	lneedle = ft_strlen(needle) - 1;
	hay = (char *)haystack;
	a = 0;
	if (!*needle)
		return (hay);
	while (hay[a] && a < len)
	{
		i = 0;
		if (hay[a] == needle[0])
			while (hay[a + i] == needle[i] && (i + a) < len)
			{
				if (i == lneedle)
					return (&hay[a]);
				i++;
			}
		a++;
	}
	return (NULL);
}
