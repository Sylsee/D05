/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:55:37 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 20:44:56 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	PresidentialPardonForm( std::string const & name );
	virtual ~PresidentialPardonForm( void );

	PresidentialPardonForm &	operator=( PresidentialPardonForm const & src );

	virtual void	execute( Bureaucrat const & executor ) const;

};

#endif /* PRESIDENTIALPARDONFORM_HPP */
