/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkocakur <kkocakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:27:44 by kkocakur          #+#    #+#             */
/*   Updated: 2025/06/14 21:12:45 by kkocakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_isprint(int deg1)
{
    if (deg1 <= 127 && deg1 >= 32)
    {
        return 1;
    }
    
    return 0;
}
