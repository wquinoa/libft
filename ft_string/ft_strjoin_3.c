/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 19:54:50 by wquinoa           #+#    #+#             */
/*   Updated: 2020/11/09 11:05:20 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin_dlm(char *s1, char *s2, char *s3)
{
	char	*res;
	char	*tmp;

	if (!s1 || !s2 || !s3)
		return (NULL);
	if (!(tmp = ft_strjoin(s1, s2)))
		return (NULL);
	if (!(res = ft_strjoin(tmp, s3)))
		return (ft_del(tmp));
	free(tmp);
	return (res);
}
