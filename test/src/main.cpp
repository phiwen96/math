#include <test/main.hpp>
#include <ph/math/math.hpp>
#include <ph/math/point.hpp>
#include <ph/math/test.hpp>

using namespace ph::math;

struct T{};

int main(int argc, char** argv)
{
       
//      Number n(6);
//      cout << is_arithmetic<decltype(n)>::value << endl;
      
      Testing t;
      t.run();
      
     
//      Number n1 = Complex (1, 2); // Label n1 for a complex number
//      Number n2 = RealNumber (10); // Label n2 for a real number
//      Number n3 = n1 + n2; // Result of addition is labelled n3 Number n2 = n3; // Re-labelling
      
      // constexpr auto s2 = Size<int, char>::value;
    return 0;
}
