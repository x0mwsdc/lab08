#pragma once

/**
 * @file print.hpp
 * @brief Заголовочный файл библиотеки вывода текста.
 */

#include <string>
#include <iostream>

/**
 * @brief Выводит переданный текст в указанный поток вывода.
 * @param text Строка текста для вывода.
 * @param out Поток вывода (по умолчанию задействован std::cout).
 */
void print(const std::string& text, std::ostream& out = std::cout);
