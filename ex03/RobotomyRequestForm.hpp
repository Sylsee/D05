/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:55:37 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 20:44:44 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{

public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	RobotomyRequestForm( std::string const & name );
	virtual ~RobotomyRequestForm( void );

	RobotomyRequestForm &	operator=( RobotomyRequestForm const & src );

	virtual void	execute( Bureaucrat const & executor ) const;

};

#endif /* ROBOTOMYREQUESTFORM_HPP */
