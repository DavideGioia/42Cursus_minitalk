/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:32:27 by dgioia            #+#    #+#             */
/*   Updated: 2022/05/22 16:32:27 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "libft/includes/libft.h"

int main(int argc, char **argv)
{
    if (argc != 3)
        return (0);
    kill(ft_atoi(argv[1]), SIGUSR1);

    while (1)
        pause();
}