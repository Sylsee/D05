/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:42:23 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 17:15:09 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(75)
{
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src.getName())
{
	*this = src;
}

Bureaucrat::Bureaucrat( std::string const & name, int grade ) : _name(name)
{
	if (grade < 1) {
		this->_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150) {
		this->_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & src )
{
	if ( this != &src )
		this->_grade = src._grade;

	return *this;
}

std::string const &	Bureaucrat::getName( void ) const
{
	return this->_name;
}

int	Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void	Bureaucrat::increment( void )
{
	if (this->_grade < 2)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrement( void )
{
	if (this->_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream &	operator<<( std::ostream & o, const Bureaucrat & b )
{
	std::cout << b.getName() << ", bureaucrat grade "
				<< b.getGrade() << "." << std::endl;
	return o;
}
