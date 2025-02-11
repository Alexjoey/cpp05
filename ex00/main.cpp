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
#include <exception>

int	main(void)
{
	Bureaucrat ben("ben", 0);
	try
	{
		ben--;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << ben;
	try
	{
		ben++;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << ben;
	Bureaucrat yom("yom", 155);
	std::cout << yom;
	try
	{
		yom++;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	try
	{
		yom--;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << yom;
}
