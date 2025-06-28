/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkocakur <kkocakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 04:53:17 by kkocakur          #+#    #+#             */
/*   Updated: 2025/06/28 06:29:59 by kkocakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!*needle)
        return ((char *)haystack);
    i = 0;
    while (i < len && haystack[i])
    {
        j = 0;
        while ((i + j) < len && needle[j] && haystack[i + j] == needle[j])
            j++;
        if (!needle[j])
            return ((char *)haystack + i);
        i++;
    }
    return (NULL);
}
