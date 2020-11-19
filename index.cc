#include <iostream>

int main() {
  // Formula: 180(n - 2)
  // Take all your sides and subtract them by two. The numbers 
  // given will be the the amount of triangles made in the shape.
  // Finally, multiply your triangle count by 180.

  // Example: 4 - 2 = 2 * 180 = 360

  unsigned int i;
  unsigned int* ptr = &i;

  std::cout << "Input your number: ";
  std::cin >> i;
  
  *ptr = i - 2;
  int res = i * 180; 

  std::cout << "Your final value is " << res << std::endl;
}
