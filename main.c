/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:47:00 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 15:29:29 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "libunit.h"
#include "tests.h"


int	main(void)
{
	ft_printf("hello world\n");
	ft_printf("%s\n", ft_itoa(42));
	strlen_launcher();
}
