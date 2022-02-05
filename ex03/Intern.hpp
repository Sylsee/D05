/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:04:29 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 21:18:54 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Intern
{

public:

	Intern( void );
	Intern( Intern const & src );
	virtual ~Intern( void );

	Intern &	operator=( Intern const & rhs );

	Form *	makeForm( std::string const & name, std::string const & target ) const;

private:


};

#endif /* INTERN_HPP */
