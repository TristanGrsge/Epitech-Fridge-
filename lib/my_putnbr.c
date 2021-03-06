/*
** EPITECH PROJECT, 2022
** my_essential
** File description:
** my_putnbr
*/

#include "../include/my.h"

int my_putnbr(int number)
{
    if (number < 0) {
        number = -number;
        my_putstr("-");
    }
    if (number >= 0 && number <= 9) {
        my_putstr("0" + number);
    } else {
        my_putnbr(number / 10);
        my_putnbr(number % 10);
    }
    return (0);
}
