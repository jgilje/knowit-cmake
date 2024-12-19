#include <drogon/HttpAppFramework.h>

#include <drogon/utils/Utilities.h>
#include <iostream>

int main() {
  // malloc(1024);
  // std::uint32_t a = 1;
  // double b = 1.0;
  // auto c = (int)a + b;
  auto ret = drogon::utils::base64Encode("hello, drogon");
  std::cout << ret << std::endl;
  return 0;
}
