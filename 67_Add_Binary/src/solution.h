#pragma once

#include <iostream>

#include <string>


class Solution {
public:
    std::string addBinary(std::string a, std::string b) {

        int ia = a.length() - 1;
        int ib = b.length() - 1;
        int len = std::max<int>(ia, ib) + 1;
        std::string result(len, '0');
        int carry = 0;
        while (ia >= 0 || ib >= 0) {
            int da = ia >= 0 ? a[ia] - '0' : 0;
            int db = ib >= 0 ? b[ib] - '0' : 0;

            int sum = da + db + carry;
            carry = sum > 1;
            result[len - 1] = '0' + sum % 2;


//            std::cout << "da: " << da << " db: " << db << std::endl;

//            if ((da == '0' && db == '1') ||(da == '1' && db == '0')) {

//            }

            --ia;
            --ib;
            --len;
        }
        if (carry) {
            result.insert(result.begin(), '1');
        }

        return result;
    }
};
