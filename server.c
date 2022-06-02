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

static void sighandler(int sig)
{
    static int i = 0;
    static unsigned char c = 0;

    c = c | (sig == SIGUSR1);

    if (++i == 8)
    {
        i = 0;
        ft_printf("%c", c);
        c = 0;
    }
    else
        c <<= 1;
}
int main()
{
    struct sigaction sa;

    sa.sa_handler = sighandler;

    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);

    ft_printf("%d\n", getpid());
    while (1)
        pause();
    return (0);
}