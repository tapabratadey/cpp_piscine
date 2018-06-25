/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:58:03 by tadey             #+#    #+#             */
/*   Updated: 2018/06/25 10:58:05 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    megaphone(char **argv)
{
    int i;
    int j;
    char store;

    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] >= 97 && argv[i][j] <= 122)
            {
                store = argv[i][j] - 32;
                std::cout << store;
            }
            else
                std::cout << argv[i][j];
            j++;
        }
        i++;
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    if (argc > 1)
        megaphone(argv);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}