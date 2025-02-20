/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:37:24 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 18:43:56 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():
	AForm("RobotomyRequestForm", 72, 45),
	_target("default")
{
	std::cout << "RobotomyRequestForm has been constructed with target: "<< _target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
	AForm("RobotomyRequestForm", 72, 45),
	_target(target)
{
	std::cout << "RobotomyRequestForm has been constructed with target: "<< _target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy):
	AForm("RobotomyRequestForm", 72, 45),
	_target(copy._target)
{
	std::cout << "RobotomyRequestForm copy constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destroyed\n";
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	(void) executor;
	std::cout << "BRRRRRRRR,";
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized\n";
	else
		std::cout << "robotomy has failed on: " << this->_target << std::endl;
}
