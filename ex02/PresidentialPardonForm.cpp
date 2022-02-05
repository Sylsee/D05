/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:55:37 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 20:33:39 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("default_presidential", 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :
	Form(src.getName(), 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const & name ):
	Form(name, 25, 5)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
	(void)src;

	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	this->checkExecRequirement(executor);

	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
