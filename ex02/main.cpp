/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:59:03 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 21:02:06 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat	Jean("Jean", 25);

		ShrubberyCreationForm	shrubbery("home");
		RobotomyRequestForm		robotomy("George");
		PresidentialPardonForm	presidential("Trump");

		Jean.executeForm(shrubbery);
		Jean.executeForm(robotomy);
		Jean.executeForm(presidential);

		Jean.signForm(shrubbery);
		Jean.signForm(robotomy);
		Jean.signForm(presidential);

		Jean.executeForm(shrubbery);
		Jean.executeForm(robotomy);
		Jean.executeForm(presidential);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
