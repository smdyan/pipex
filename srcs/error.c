/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smdyan <smdyan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:53:14 by smdyan            #+#    #+#             */
/*   Updated: 2022/02/28 13:56:32 by smdyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	msg(char *err)
{
	write(2, err, ft_strlen(err));
	return (1);
}

void	msg_error(char *err)
{
	perror(err);
	exit (1);
}

int	msg_fork(t_pipex pipex)
{
	if (pipex.pid1 == -1 || pipex.pid2 == -1)
		ft_putendl_fd(ERR_FORK, 2);
	return (0);
}
