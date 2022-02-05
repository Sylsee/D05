/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:59:03 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 17:38:41 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include "Bureaucrat.hpp"

int main()
{
	{
		try
		{
			Bureaucrat Jean("Jean", -1);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat Jean("Jean", 151);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat	Jean("Jean", 2);
			Bureaucrat	Marc("Marc", 149);

			std::cout << Jean;
			std::cout << Marc;
			try
			{
				Jean.increment();
				Jean.increment();
			}
			catch (std::exception & e)
			{
				std::cout << e.what() << std::endl;
			}
			try
			{
				Marc.decrement();
				Marc.decrement();
			}
			catch (std::exception & e)
			{
				std::cout << e.what() << std::endl;
			}
			std::cout << Jean;
			std::cout << Marc;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}
