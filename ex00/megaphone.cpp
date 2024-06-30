/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadouac <afadouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:28:05 by afadouac          #+#    #+#             */
/*   Updated: 2024/06/29 19:28:12 by afadouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    std::string result;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    for (int j = 1; j < ac; j++)
    {
        for (int i = 0; av[j][i]; i++)
        {
            av[j][i] = std::toupper(av[j][i]);
        }
        result += av[j];
    }
    std::cout << result << std::endl;
    return 0;
}
