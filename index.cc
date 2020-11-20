// Beware, here be dragons...
#include <iostream>
#include <chrono>
#include <thread>

#ifdef _WIN32
#include <windows.h>
#endif // endif _WIN32

int main() {

#if __linux__
  using namespace std::this_thread;
  using namespace std::chrono;
#endif

  // Formula: 180(n - 2)
  // Take all your sides and subtract them by two. The numbers
  // given will be the the amount of triangles made in the shape.
  // Finally, multiply your triangle count by 180.

  // Example: 4 - 2 = 2 * 180 = 360

  unsigned int i;
  unsigned int *ptr = &i;

  std::cout << "Input your number: ";
  std::cin >> i;

  *ptr = i - 2;
  unsigned int res = i * 180;

  std::cout << "Hmm, we get.. " << *ptr << ". multiply that by 180!" << std::endl;
  
#ifdef _WIN32
  Sleep(1000); 
#else
  sleep_for(seconds(1));
#endif // endif _WIN32  

  std::cout << "Your final value is " << res << std::endl;
  
#ifdef _WIN32  
  system("pause"); // ohh nahh i'm down bad 
#endif // endif _WIN32
}
