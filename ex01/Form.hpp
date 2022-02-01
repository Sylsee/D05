/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:15:44 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 22:20:56 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{

public:

	Form( void );
	Form( Form const & src );
	virtual ~Form( void );

	Form &	operator=( Form const & src );

	std::string const &	getName( void ) const;
	bool				getSigned( void ) const;
	int const			getGradeToSign( void ) const;
	int const			getGradeToExec( void ) const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char * what() const throw() { return "Grade too high"; }
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char * what() const throw() { return "Grade too low"; }
	};

private:

	std::string const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExec;

};

std::ostream &	operator<<( std::ostream & o, const Form & f );

#endif /* FORM_HPP */
