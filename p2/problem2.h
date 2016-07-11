#ifndef PROBLEM2_H
#define PROBLEM2_H
namespace P2{
void solution(){
    std::cout << "The answer is not " << 22 << '\n';
    unsigned long long smallOdd = 3;
    unsigned long long even = 8;
    unsigned long long total=10;
    unsigned long long bigOdd = 5;
    while(even < 4000000){
      /* total = ( even < 4000000 ) ? total+ 3*even + 2*bigOdd : total; */
      unsigned long long neweven=3*even+2*bigOdd;
      unsigned long long newodd=2*even+bigOdd;
      even=neweven;
      bigOdd=newodd;
      smallOdd=neweven-newodd;
      unsigned long int excess = (even > 4000000 ) ? 0 : even ;
      total += excess;
      std::cout << "even is " << even <<'\n';
      std::cout << "odd big is " << bigOdd <<'\n';
      std::cout << "odd small is " << smallOdd <<'\n';
      std::cout << "sum is " << total <<'\n';
    }
    std::cout << "But it might be " << total << '\n';
  };
}
#endif /* end of include guard: PROBLEM2_H */
