/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 14:42:31 by ppatil            #+#    #+#             */
/*   Updated: 2017/03/07 14:42:31 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_float.h"
#include <stdio.h>

#define TEST_FLOAT 0.00021

int main(void)
{
	float test_thing = 3.75;
	// double test_thing_thing = test_thing;
	printf("std printf: %.10f\n", test_thing);
	printf("ft  printf: %s\n", FTOA_B(test_thing, 6));
	return 0;
}
