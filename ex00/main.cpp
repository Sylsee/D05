/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:59:03 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 22:14:18 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	Jean("Jean", 2);
	Bureaucrat	Marc("Marc", 149);

	std::cout << Jean;
	std::cout << Marc;

	Jean.increment();
	Jean.increment();
	Marc.decrement();
	Marc.decrement();

	std::cout << Jean;
	std::cout << Marc;

	return 0;
}
