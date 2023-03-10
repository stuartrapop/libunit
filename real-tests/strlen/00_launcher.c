/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:24:04 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 17:00:40 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_test.h"
#include "libunit.h"
#include "libft.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Basic test", &hello_test);
	load_test(&testlist, "NULL test", &blank_test);
	load_test(&testlist, "Bigger String Test", &bigger_str_test);
	load_test(&testlist, "Multiple Zero Test", &multiple_zero_test);
	load_test(&testlist, "One Character Test", &one_character_test);
	return (launch_test("strlen", testlist));
}
