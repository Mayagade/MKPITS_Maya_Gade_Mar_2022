#include <stdio.h>

int test(int n)
        {
            const int x = 51;

            if (n > x)
            {
                return (n - x)*3;
            }
            return x - n;
        }
        
        
int main() 
 {
 	int endl
  cout << test(53) << endl;  
  cout << test(30) << endl;  
  cout << test(51) << endl;  
  return 0;    
}
