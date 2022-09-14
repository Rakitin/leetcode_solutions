#pragma once

#include <exception>
#include <iostream>
#include <iomanip>
#include <chrono>

void assert_that(bool statement, const char *message)
{
    if (!statement) {
        throw std::runtime_error(message);
    }
}

void run_test(void (*test_fun)(), const char *name)
{
    try {
        std::chrono::system_clock clock;
        auto start = clock.now();
        test_fun();
        std::chrono::duration<double> timeDiff = clock.now() - start;
        std::cout << std::fixed << std::setprecision(10) << std::left;
        std::cout << "[+] Test [" << name << "] successful [time: "<< timeDiff.count() << "]" << std::endl;
    } catch (const std::exception &ex) {
        std::cout << "[-] Test failure in [" << name << "]. " << ex.what() << std::endl;
    }
}
