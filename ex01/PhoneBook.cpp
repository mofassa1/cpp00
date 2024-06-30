/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadouac <afadouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:25:33 by afadouac          #+#    #+#             */
/*   Updated: 2024/06/29 19:26:50 by afadouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::intro(void)
{
    std::cout << "\033[1;32m          Welcome to PhoneBook\033[0m" << std::endl;
    std::cout << "\033[1;32m>>>>>>>>>\033[0m use ADD to Create A New Contact "  ;
    std::cout << "\033[1;32m<<<<<<<<<\033[0m"  << std::endl;
    std::cout << "\033[1;32m>>>>>>>>>\033[0m use SERCH to Serch Of A Contact ";
    std::cout << "\033[1;32m<<<<<<<<<\033[0m"  << std::endl;
    std::cout << "\033[1;32m>>>>>>>>>\033[0m use ADD to Create A New Contact ";
    std::cout << "\033[1;32m<<<<<<<<<\033[0m"  << std::endl;
    std::cout << "\033[1;32m>>>>>>>>>\033[0m use EXIT Quite the PhoneBook ";
    std::cout << "\033[1;32m   <<<<<<<<<\033[0m"  << std::endl;
}

std::string PhoneBook::fixStr(std::string str)
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

void    PhoneBook::AffContacts(int INDEX)
{
    int i;
    Contact CONTACT;
    std::string tmp;

    i = 0;
    std::cout << "\033[1;32m--------------------------------------------------------\033[0m" << std::endl;
    std::cout << "\033[1;32m|\033[0m" << " FirstName" << "\033[1;32m|\033[0m" << "  LastName" << "\033[1;32m|\033[0m" << "  NickName" << "\033[1;32m|\033[0m" << \
                "  PhoneNum" << "\033[1;32m|\033[0m" << "DarkestSec" << "\033[1;32m|\033[0m" << std::endl;
    std::cout << "\033[1;32m--------------------------------------------------------\033[0m" << std::endl;
    if (INDEX >= 8)
        INDEX = 8;
    while (i < (INDEX ))
    {
        CONTACT = GetContact(i);
        tmp = fixStr(CONTACT.GetFirstName());
        std::cout << "\033[1;32m|\033[0m" << tmp ;
        tmp = fixStr(CONTACT.GetLastName());
        std::cout << "\033[1;32m|\033[0m"<<tmp ;
        tmp = fixStr(CONTACT.GetNickName());
        std::cout << "\033[1;32m|\033[0m"<<tmp ;
        tmp = fixStr(CONTACT.GetPhoneNumber());
        std::cout << "\033[1;32m|\033[0m"<<tmp ;
        tmp = fixStr(CONTACT.GetDarkestSecret());
        std::cout << "\033[1;32m|\033[0m" << tmp <<"\033[1;32m|\033[0m"<< std::endl;
        std::cout << "\033[1;32m--------------------------------------------------------\033[0m" << std::endl;
        i++;
    }
}