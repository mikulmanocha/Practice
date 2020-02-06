#include <iostream>
#include <iomanip>
using namespace std;
                #define LIMIT  1000                   // Upper limit
                bool flags[LIMIT] = { false, false};  // Array with flags
 int main() {
   register int i, j;
   for( i = 2; i < LIMIT; ++i)
       flags[i] = true;
   // Sieving:
   for( i = 2; i < LIMIT/2; ++i)
   {
// Indices
// Sets flags to true
{
} }
// Yes -> Delete multiples. for( j = i+i; j < LIMIT; j += i)
if( flags[i])             // Is i a prime number?
flags[j] = false;
// To count:
int count = 0;
for( i = 2; i < LIMIT; ++i)
   if(flags[i])
     ++count;
// Counter
// If i is a prime number // -> count
// Output:
cout << "There are"<< count <<" prime numbers less than"
<< LIMIT << endl;
cout << "\nTo output prime numbers? (y/n) "; char reply; cin.get(reply);
if( reply == 'y' || reply == 'Y')
{ for( i = 2; i < LIMIT; ++i)
     if(flags[i])            // If i is a prime number
{
} }
// -> cout.width(8); cout << i;
to output it.
   cout << endl;    return 0;
}
