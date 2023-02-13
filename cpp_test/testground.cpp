//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <map>
//#include <tuple>
//#include <functional>
//#include <cmath>
//#include <chrono>
//#include <thread>
//
//template <typename T>
//inline T const& max(T const& a, T const& b) {
//  return a < b ? b : a;
//}
//
//template <typename T>
//inline T const& min(T const& a, T const& b) {
//  return a < b ? a : b;
//}
//
//template <typename T>
//inline T power(T base, T exponent) {
//  T result = 1;
//  while (exponent != 0) {
//    if ((exponent & 1) == 1) {
//      result *= base;
//    }
//    exponent >>= 1;
//    base *= base;
//  }
//  return result;
//}
//
//std::map<int, std::string> const messages = {{1, "Hello"}, {2, ","}, {3, " "}, {4, "World"}, {5, "!"}};
//
//int main() {
//  std::vector<int> message_indices(messages.size());
//  std::iota(message_indices.begin(), message_indices.end(), 1);
//  std::sort(message_indices.begin(), message_indices.end(), [](int a, int b){
//    return messages.at(a).length() > messages.at(b).length();
//  });
//
//  for (int index : message_indices) {
//    auto message = messages.at(index);
//    std::cout << message << std::flush;
//    std::this_thread::sleep_for(std::chrono::milliseconds(
//        static_cast<int>(1000 * power(1.5, message.length()))));
//  }
//  return 0;
//}
