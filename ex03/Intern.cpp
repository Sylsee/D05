/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:04:29 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 21:32:54 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( Intern const & src )
{
	*this = src;
}

Intern::~Intern( void )
{
	return ;
}

Intern &	Intern::operator=( Intern const & rhs )
{
	(void)rhs;

	return *this;
}

Form *	Intern::makeForm( std::string const & name, std::string const & target ) const
{
	Form	*res = NULL;
	Form	*forms[] = {
		new	ShrubberyCreationForm(target),
		new	RobotomyRequestForm(target),
		new	PresidentialPardonForm(target)
	};
	std::string	names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
		""
	};

	for (int i = 0; names[i].empty() == false; i++) {
		if (names[i].compare(name) == 0)
			res = forms[i];
		else
			delete forms[i];
	}
	if (res)
		std::cout << "Intern creates " << res->getName() << std::endl;
	else
		std::cout << "Form " << name << " doesn't exist" << std::endl;
	return res;
}
