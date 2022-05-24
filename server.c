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
    if (sig == SIGUSR1)
        ft_printf("Segnale ricevuto");
}

int main()
{
    ft_printf("%d\n", getpid());
    signal(SIGUSR1, sighandler);
    while (1)
        pause();
}