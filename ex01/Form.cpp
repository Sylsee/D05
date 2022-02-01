/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:15:44 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 22:15:44 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void )
{
	return ;
}

Form::Form( Form const & src )
{
	*this = src;

	return ;
}

Form::~Form( void )
{
	return ;
}

Form &	Form::operator=( Form const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}
