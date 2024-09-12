/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadouac <afadouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:25:20 by afadouac          #+#    #+#             */
/*   Updated: 2024/09/12 05:54:08 by afadouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook	Book;
    std::string	Input;
    int       	Index;

    Index = 0;
    Book.welcome();
    while (true)
    {
        std::cout << "\033[1;31m>>>>\033[0m";
        std::getline(std::cin, Input);
        if (std::cin.eof())
            return (0);
		if (Input == "ADD")
        {
       		Book.AddContact(Index);
            Index++;
        }
		else if (Input == "SEARCH")
			Book.Search(Index);
		else if (Input == "EXIT")
			return 0;
    }
        
}
