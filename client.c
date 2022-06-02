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
#include "libft/includes/ft_printf.h"

static void send_str(int pid, char *str)
{
    int i;
    char single_char;

    while (*str)
    {
        i = 8;
        single_char = *str++;
        while (i--)
        {
            if (single_char >> i & 1)
                kill(pid, SIGUSR1);
            else
                kill(pid, SIGUSR2);
            usleep(100);
        }
    }
}

int main(int argc, char **argv)
{

    send_str(ft_atoi(argv[1]), argv[2]);

    if (argc != 2)
        return (0);

    while (1)
        pause();
}