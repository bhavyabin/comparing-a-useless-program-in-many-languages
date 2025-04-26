#include <iostream>
#include <chrono>

int main() {
	
  auto start = std::chrono::high_resolution_clock::now();
  
  int result;
	
  for (int i = 1; i <= 1000000; i++){
		
    std::cout << i << "\n";;
    result += i;
	
  };
  
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

  std::cout << "Runtime: " << duration.count() << " microseconds" << std::endl;

	
  return 0;
  
}