/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:15:44 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 17:52:21 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name("default"),
					 _signed(false),
					 _gradeToSign(75),
					 _gradeToExec(75)
{
	return ;
}

Form::Form( Form const & src ) : _name(src.getName()),
								_signed(src.getSigned()),
								_gradeToSign(src.getGradeToSign()),
								_gradeToExec(src.getGradeToExec())
{
	return ;
}

Form::Form( std::string const & name, int gradeToSign, int gradeToExec ) :
	_name(name),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{
	this->_signed = false;
}

Form::~Form( void )
{
	return ;
}

Form &	Form::operator=( Form const & src )
{
	if ( this != &src )
		this->_signed = src.getSigned();

	return *this;
}

std::string const &	Form::getName( void ) const
{
	return this->_name;
}

bool	Form::getSigned( void ) const
{
	return this->_signed;
}

int	Form::getGradeToSign( void ) const
{
	return this->_gradeToSign;
}

int	Form::getGradeToExec( void ) const
{
	return this->_gradeToExec;
}

void	Form::beSigned( Bureaucrat const & b )
{
	if (b.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	this->_signed = true;
}

std::ostream &	operator<<( std::ostream & o, const Form & f )
{
	o << "Form name: " << f.getName() << std::endl
		<< "Form signed: " << f.getSigned() << std::endl
		<< "Form grade to sign: " << f.getGradeToSign() << std::endl
		<< "Form grade to execute: " << f.getGradeToExec() << std::endl;

	return o;
}
