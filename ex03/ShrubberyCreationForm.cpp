/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:55:37 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 20:58:27 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("default_shrubbery", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :
	Form(src.getName(), 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & name ):
	Form(name, 145, 137)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
{
	(void)src;

	return *this;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	this->checkExecRequirement(executor);

	std::ofstream	ofs;
	std::string		file_name = this->getName() + "_shrubbery";
	ofs.open(file_name.c_str());
	ofs << "                                                         ." << std::endl
        << "                                              .         ;  " << std::endl
        << "                 .              .              ;%     ;;   " << std::endl
        << "                   ,           ,                :;%  %;   " << std::endl
        << "                    :         ;                   :;%;'     .,   " << std::endl
        << "           ,.        %;     %;            ;        %;'    ,;" << std::endl
        << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl
        << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl
        << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl
        << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl
        << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl
        << "                    `:%;.  :;bd%;          %;@%;'" << std::endl
        << "                      `@%:.  :;%.         ;@@%;'   " << std::endl
        << "                        `@%.  `;@%.      ;@@%;         " << std::endl
        << "                          `@%%. `@%%    ;@@%;        " << std::endl
        << "                            ;@%. :@%%  %@@%;       " << std::endl
        << "                              %@bd%%%bd%%:;     " << std::endl
        << "                                #@%%%%%:;;" << std::endl
        << "                                %@@%%%::;" << std::endl
        << "                                %@@@%(o);  . '         " << std::endl
        << "                                %@@@o%;:(.,'         " << std::endl
        << "                            `.. %@@@o%::;         " << std::endl
        << "                               `)@@@o%::;         " << std::endl
        << "                                %@@(o)::;        " << std::endl
        << "                               .%@@@@%::;         " << std::endl
        << "                               ;%@@@@%::;.          " << std::endl
        << "                              ;%@@@@%%:;;;. " << std::endl
        << "                          ...;%@@@@@%%:;;;;,.. " << std::endl;
	ofs.close();
}
