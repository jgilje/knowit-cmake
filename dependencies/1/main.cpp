#include <drogon/HttpAppFramework.h>

#include <drogon/utils/Utilities.h>
#include <iostream>

int main() {
    auto ret = drogon::utils::base64Encode("hello, drogon");
    std::cout << ret << std::endl;
    return 0;
}
