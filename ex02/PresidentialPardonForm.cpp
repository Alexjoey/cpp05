/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:07:21 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 18:54:20 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	AForm("PresidentialPardonForm", 25, 5),
	_target("default")
{
	std::cout << "PresidentialPardonForm has been constructed with target: "<< _target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
	AForm("PresidentialPardonForm", 25, 5),
	_target(target)
{
	std::cout << "PresidentialPardonForm has been constructed with target: "<< _target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy):
	AForm("PresidentialPardonForm", 25, 5),
	_target(copy._target)
{
	std::cout << "PresidentialPardonForm copy constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
std::cout << "PresidentialPardonForm destroyed\n";
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	(void) executor;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
}
