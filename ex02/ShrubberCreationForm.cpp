/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:53:04 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 18:58:41 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():
	AForm("ShrubberyCreationForm", 147, 137),
	_target("default")
{
	std::cout << "ShrubberyCreationForm has been constructed with target: "<< _target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
	AForm("ShrubberyCreationForm", 147, 137),
	_target(target)
{
	std::cout << "ShrubberyCreationForm has been constructed with target: "<< _target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy):
	AForm("ShrubberyCreationForm", 147, 137),
	_target(copy._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
std::cout << "ShrubberyCreationForm destroyed\n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	(void) executor;
	std::ofstream outfile((this->_target + "_shrubbery").c_str());
	for (int i = 0; i < 5; i++)
	{
		outfile <<
		"         v" << std::endl <<
		"        >X<" << std::endl <<
		"         A" << std::endl <<
		"        d$b" << std::endl <<
		"      .d\\$$b." << std::endl <<
		"    .d$i$$\\$$b." << std::endl <<
		"       d$$@b" << std::endl <<
		"      d\\$$$ib" << std::endl <<
		"    .d$$$\\$$$b" << std::endl <<
		"  .d$$@$$$$\\$$ib." << std::endl <<
		"      d$$i$$b" << std::endl <<
		"     d\\$$$$@$b" << std::endl <<
		"  .d$@$$\\$$$$$@b." << std::endl <<
		".d$$$$i$$$\\$$$$$$b." << std::endl <<
		"        ###" << std::endl <<
		"        ###" << std::endl <<
		"        ###" << std::endl <<
	std::endl;
	}
	outfile.close();
	std::cout << "Planted shrubbery at: " << this->_target + "_shrubbery" << std::endl;
}
