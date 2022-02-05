/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:15:44 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 17:49:04 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:

	Form( void );
	Form( Form const & src );
	Form( std::string const & name, int gradeToSign, int gradeToExec );
	virtual ~Form( void );

	Form &	operator=( Form const & src );

	std::string const &	getName( void ) const;
	bool				getSigned( void ) const;
	int					getGradeToSign( void ) const;
	int					getGradeToExec( void ) const;

	void				beSigned( Bureaucrat const & b );

	class GradeTooHighException : public std::exception
	{
	public:
		const char * what() const throw() { return "grade too high"; }
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char * what() const throw() { return "grade too low"; }
	};

private:

	std::string const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExec;

};

std::ostream &	operator<<( std::ostream & o, const Form & f );

#endif /* FORM_HPP */
