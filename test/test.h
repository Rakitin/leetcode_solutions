#pragma once

#include <exception>
#include <iostream>

void assert_that(bool statement, const char *message)
{
    if (!statement) {
        throw std::runtime_error(message);
    }
}

void run_test(void (*test_fun)(), const char *name)
{
    try {
        test_fun();
        std::cout << "[+] Test [" << name << "] successful" << std::endl;
    } catch (const std::exception &ex) {
        std::cout << "[-] Test failure in [" << name << "]. " << ex.what() << std::endl;
    }
}
