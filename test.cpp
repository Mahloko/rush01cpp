/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 03:29:12 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/17 04:09:47 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sys/sysctl.h>
char* getMachine( void )
{
    size_t  tst = 100;

    char    cpy[100];
    sysctlbyname("ls.model", &cpy, &tst, NULL, 0);
    char    *ret = cpy;
	return (ret);
}

int main()
{
    // std::cout << getCPUName();
	return (0);
}