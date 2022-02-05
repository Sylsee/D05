/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:55:37 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 20:29:26 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("default_robotomy", 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) :
	Form(src.getName(), 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string const & name ):
	Form(name, 72, 45)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & src )
{
	(void)src;

	return *this;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	this->checkExecRequirement(executor);

	std::cout << "DRRRAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
	if (rand() % 2)
		std::cout << executor.getName() << " has been robotomized" << std::endl;
	else
		std::cout << executor.getName() << " robotomization failed" << std::endl;
}
