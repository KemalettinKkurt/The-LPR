/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkocakur <kkocakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 04:59:46 by kkocakur          #+#    #+#             */
/*   Updated: 2025/06/28 06:21:17 by kkocakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t len1;
    size_t len2;
    char   *joined;
    size_t i;
    size_t j;

    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    joined = malloc(len1 + len2 + 1);
    if (!joined)
        return (NULL);
    i = 0;
    while (i < len1)
    {
        joined[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < len2)
    {
        joined[i++] = s2[j++];
    }
    joined[i] = '\0';
    return (joined);
}
