/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadouac <afadouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:25:33 by afadouac          #+#    #+#             */
/*   Updated: 2024/09/12 05:53:30 by afadouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::welcome(void)
{
    std::cout << "\033[1;32m          Welcome to PhoneBook\033[0m" << std::endl;
    std::cout << "\033[1;32m>>>>>>>>>\033[0m use ADD to Create A New Contact "  ;
    std::cout << " \033[1;32m<<<<<<<<<\033[0m"  << std::endl;
    std::cout << "\033[1;32m>>>>>>>>>\033[0m use SERCH to Serch for A Contact ";
    std::cout << "\033[1;32m<<<<<<<<<\033[0m"  << std::endl;
    std::cout << "\033[1;32m>>>>>>>>>\033[0m use EXIT Quite the PhoneBook ";
    std::cout << " \033[1;32m   <<<<<<<<<\033[0m"  << std::endl;
}

PhoneBook::PhoneBook(void)
{
	info[0] = "first name";
	info[1] = "last name";
	info[2] = "nick name";
	info[3] = "phone number";
	info[4] = "darkest secret";
}

bool	IsValid(std::string Input, int i)
{
	if (Input == "")
	{
		std::cout << "input is empty" << std::endl;
		return (false);
	}
	if (i == 3)
	{
		for (std::string::size_type i = 0; i < Input.length(); i++)
		{
			if (!isdigit(Input[i]))
			{
				std::cout << "phone number need to containe only digits" << std::endl;
				return (false);
			}
		}
	}
	return (true);
}

void PhoneBook::AddContact(int Index)
{
	std::string	Input[5];

	Index = (Index) % 8;
    for (int i = 0; i < 5; i++)
    {
		start:
		std::cout << "enter " << info[i] << std::endl;
		std::getline(std::cin, Input[i]);
        if (std::cin.eof())
            return ;
		if (!IsValid(Input[i], i))
			goto start;
    }
	contact[Index].SetFirstName(Input[0]);
	contact[Index].SetLastName(Input[1]);
	contact[Index].SetNickName(Input[2]);
	contact[Index].SetPhoneNumber(Input[3]);
	contact[Index].SetDarks(Input[4]);
	contact[Index].SetIndex(Index);
}

std::string fixStr(std::string str)
{
    int len = str.length();
    std::string Str;

    if (len > 10)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i >= 9)
                Str += '.';
            else
                Str += str[i];
        }
    }
    else if (len < 10)
    {
        
        for (int i = 0; i < (10 - len); i++)
            Str += ' ';
        Str += str;
    }
    else
        Str = str;
    return (Str);
}

void PhoneBook::Search(int Index)
{
    int i;
    std::string tmp;

	if (Index > 8)
		Index = 8;
    i = 0;
	if (Index == 0)
	{
		std::cout << "no contacts in phone book " << std::endl;
		return ;
	}
    std::cout << "\033[1;32m---------------------------------------------\033[0m" << std::endl;
    std::cout << "\033[1;32m|\033[0m" << "     index" << "\033[1;32m|\033[0m" << " FirstName" << "\033[1;32m|\033[0m" << "  LastName" << "\033[1;32m|\033[0m" << "  NickName" << "\033[1;32m|\033[0m" << std::endl;
    std::cout << "\033[1;32m---------------------------------------------\033[0m" << std::endl;
    while (i < (Index))
    {
        // tmp = fixStr(contact[i].getIndex());
        std::cout << "\033[1;32m|\033[0m" << "         " << contact[i].getIndex() ;
        tmp = fixStr(contact[i].getFirstName());
        std::cout << "\033[1;32m|\033[0m" << tmp ;
        tmp = fixStr(contact[i].getLastName());
        std::cout << "\033[1;32m|\033[0m"<<tmp ;
        tmp = fixStr(contact[i].getNickName());
        // std::cout << "\033[1;32m|\033[0m"<<tmp << std::endl;
        // tmp = fixStr(contact[i].getPhoneNumber());
        std::cout << "\033[1;32m|\033[0m"<<tmp << "\033[1;32m|\033[0m"<< std::endl;
        std::cout << "\033[1;32m---------------------------------------------\033[0m" << std::endl;
        i++;
    }
	start:
	std::cout << "\033[1;31m  enter the INDEX of contact\033[0m";
	std::getline(std::cin, tmp);
	if (std::cin.eof())
		return ;
	if (tmp.length() != 1 || (tmp[0] - '0') >= Index)
	{
		std::cout << "invalid INPUT" << std::endl;
		goto start;
	}
	contact[tmp[0] - '0'].affichContact();
}