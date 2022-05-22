/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:32:30 by dgioia            #+#    #+#             */
/*   Updated: 2022/05/22 16:32:30 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "libft/includes/ft_printf.h"

int main()
{
    ft_printf("%d\n", getpid());
    while (1)
        pause();
}