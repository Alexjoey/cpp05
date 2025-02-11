/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:38:34 by amylle            #+#    #+#             */
/*   Updated: 2025/02/11 14:50:35 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int	main(void)
{
	Bureaucrat	ben("ben", 1);
	Form		form1("form1", 120, 120);
	Bureaucrat	yom("yom", 140);
	Form		form2("form2", 120, 120);
	std::cout << ben << form1;
	ben.signForm(form1);
	std :: cout << ben << form1;
	std::cout << yom << form2;
	yom.signForm(form2);
	std::cout << yom << form2;
}
