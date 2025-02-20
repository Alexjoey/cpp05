/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:04:41 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 19:12:29 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& copy);
	~Intern();

	Intern& operator=(const Intern& copy);
	AForm	*makeForm(const std::string& form, const std::string& target);
};
