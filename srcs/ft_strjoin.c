/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smdyan <smdyan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:18:33 by smdyan            #+#    #+#             */
/*   Updated: 2022/02/27 11:10:49 by smdyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *) malloc(sizeof (char) * (len_s1 + len_s2 + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, (len_s1 + 1));
	ft_strlcpy((str + len_s1), s2, (len_s2 + 1));
	return (str);
}
