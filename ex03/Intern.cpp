/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:12:07 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 19:13:27 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ostream>

Intern::Intern()
{
	std::cout << "Intern has been constructed\n";
}

Intern::~Intern()
{
	std::cout << "Intern has been destroyed\n";
}

Intern::Intern(const Intern& copy)
{
	(void) copy;
	std::cout << "Intern copy constructor\n";
}

Intern& Intern::operator=(const Intern &copy)
{
	(void) copy;
	return (*this);
}

static AForm* makePresForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

static AForm* makeShrubForm(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm* makeRoboForm(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makeForm(const std::string& form_name, const std::string& target)
{
	AForm *(*make_forms[])(const std::string &target) = {&makeShrubForm, &makeRoboForm, &makePresForm};
	std::string form_names[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++)
	{
		if (form_name == form_names[i])
		{
			std::cout << "Intern is creating a " << form_name << std::endl;
			return (make_forms[i](target));
		}
	}
	std::cout << "Intern cant make: " << form_name << std::endl;
	return (NULL);
}
