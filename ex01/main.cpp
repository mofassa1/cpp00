/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadouac <afadouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:25:20 by afadouac          #+#    #+#             */
/*   Updated: 2024/06/29 19:25:28 by afadouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string    INPUT;
    PhoneBook      Book;
    Contact        contact;
    int            INDEX;

    INDEX = 0;
    Book.intro();
    while (true)
    {
        std::cout << "\033[1;31m>>>>\033[0m";
        std::getline(std::cin, INPUT);
        if (INPUT == "ADD")
        {
            start:
            std::cout << "enter the first name" << std::endl;
            std::getline(std::cin, INPUT);
            if (INPUT == "")
            {
                std::cout << "\033[1;31mINVALID ARGIMENT !!!!!!! TRY AGAIN\033[0m" << std::endl;
                goto start;
            }
            contact.SetFirstName(INPUT);
            
            start2:
            std::cout << "enter the last name" << std::endl;
            std::getline(std::cin, INPUT);
            if (INPUT == "")
            {
                std::cout << "\033[1;31mINVALID ARGIMENT !!!!!!! TRY AGAIN\033[0m" << std::endl;
                goto start2;
            }
            contact.SetLastName(INPUT);

            start3:
            std::cout << "enter the phone Number" << std::endl;
            std::getline(std::cin, INPUT);
            if (INPUT == "")
            {
                std::cout << "\033[1;31mINVALID ARGIMENT !!!!!!! TRY AGAIN\033[0m" << std::endl;
                goto start3;
            }
            contact.SetPhoneNumber(INPUT);

            start4:
            std::cout << "enter the Nickname" << std::endl;
            std::getline(std::cin, INPUT);
            if (INPUT == "")
            {
                std::cout << "\033[1;31mINVALID ARGIMENT !!!!!!! TRY AGAIN\033[0m" << std::endl;
                goto start4;
            }
            contact.SetNickName(INPUT);

            start5:
            std::cout << "enter the DarkestSecret" << std::endl;
            std::getline(std::cin, INPUT);
            if (INPUT == "")
            {
                std::cout << "\033[1;31mINVALID ARGIMENT !!!!!!! TRY AGAIN\033[0m" << std::endl;
                goto start5;
            }
            contact.SetDarkestSecret(INPUT);
            Book.SetContact(contact, INDEX);
            INDEX++;
        }
        else if (INPUT == "SEARCH")
        {
            Book.AffContacts(INDEX);
            start6:
            std::cout << "\033[1;31m  enter the INDEX of contact\033[0m";
            std::getline(std::cin, INPUT);
            if (INPUT.length() != 1 || (INPUT[0] - '0') >= INDEX)
            {
                std::cout << "invalid INPUT" << std::endl;
                goto start6;
            }
            Book.GetContact(INPUT[0] - '0').AffichContact();
        }
        else if (INPUT == "EXIT")
        {
            std::cout << "GOODBYE !!!!!!" << std::endl;
            return (0);
        }
        else
            std::cout << "\033[1;31mINVALID ARGIMENT !!!!!!!\033[0m" << std::endl;
    }
    return (0);
}
