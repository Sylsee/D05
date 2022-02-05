/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:59:03 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 21:34:58 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern	someRandomIntern;
		Form	*rrf[3];

		rrf[0] = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf[1] = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf[2] = someRandomIntern.makeForm("presidential pardon", "Bender");

		for (int i = 0; i < 3; i++) {
			std::cout << rrf[i]->getName() << std::endl;
			std::cout << rrf[i]->getGradeToSign() << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
