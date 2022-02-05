/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:55:37 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 20:44:31 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{

public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	ShrubberyCreationForm( std::string const & name );
	virtual ~ShrubberyCreationForm( void );

	ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & src );

	virtual void	execute( Bureaucrat const & executor ) const;

};

#endif /* SHRUBBERYCREATIONFORM_HPP */
