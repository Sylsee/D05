/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:42:23 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 22:13:08 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{

public:

	Bureaucrat( void );
	Bureaucrat( Bureaucrat const & src );
	Bureaucrat( std::string const & name, int grade );
	virtual ~Bureaucrat( void );

	Bureaucrat &	operator=( Bureaucrat const & src );

	std::string const &	getName( void ) const;
	int					getGrade( void ) const;

	void	increment( void );
	void	decrement( void );

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
	int					_grade;

};

std::ostream &	operator<<( std::ostream & o, const Bureaucrat & b );

#endif /* BUREAUCRAT_HPP */
