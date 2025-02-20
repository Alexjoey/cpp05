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
#include <exception>
#include <cstdlib>
#include <ctime>

int	main(void)
{
	std::srand(std::time(0));
	Bureaucrat	ben("ben", 1);
	PresidentialPardonForm Tom("Tom");
	Bureaucrat	yom("yom", 150);
	std::cout << ben << Tom;
	yom.executeForm(Tom);
	yom.signForm(Tom);
	ben.signForm(Tom);
	yom.executeForm(Tom);
	ben.executeForm(Tom);
	RobotomyRequestForm tsuki("Tsuki");
	yom.executeForm(tsuki);
	yom.signForm(tsuki);
	ben.signForm(tsuki);
	yom.executeForm(tsuki);
	ben.executeForm(tsuki);
	ben.executeForm(tsuki);
	ben.executeForm(tsuki);
	ben.executeForm(tsuki);
	ShrubberyCreationForm garden("garden");
	yom.executeForm(garden);
	yom.signForm(garden);
	ben.signForm(garden);
	yom.executeForm(garden);
	ben.executeForm(garden);
	ben.executeForm(garden);
	ben.executeForm(garden);
	ben.executeForm(garden);
}
