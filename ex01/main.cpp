/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:59:03 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 17:53:54 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form		RSA("RSA", 50, 45);
		Bureaucrat	Jean("Jean", 50);
		Bureaucrat	Marc("Marc", 51);

		std::cout << RSA;
		std::cout << Jean;
		std::cout << Marc;
		Jean.signForm(RSA);
		Marc.signForm(RSA);
		std::cout << RSA;
		std::cout << Jean;
		std::cout << Marc;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
