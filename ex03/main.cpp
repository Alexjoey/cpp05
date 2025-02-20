/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:38:34 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 18:32:24 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <exception>
#include <cstdlib>
#include <ctime>

int	main(void)
{
	std::srand(std::time(0));
	Bureaucrat	ben("ben", 1);
	Intern	meow;
	AForm	*rref;

	rref = meow.makeForm("PresidentialPardonForm", "ben");
	if (!rref)
		std::cout << "yom\n";
	ben.signForm(*rref);
	ben.executeForm(*rref);
	delete rref;
	rref = meow.makeForm("residentialPardonForm", "ben");
	if (!rref)
		std::cout << "rref is a nullpointer\n";
}
