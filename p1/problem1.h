#ifndef PROBLEM1_H
#define PROBLEM1_H
namespace P1{
  const int factors_summed( const int factor, const int bound){
    int sum = 0;
    for ( int i = 0; i < bound; i += factor, sum+=i ) { }
    return sum;
  }
  void solution(){
    std::cout << "The answer is not " << 52 <<'\n';
    int total = factors_summed(3,1000) + factors_summed(5,1000) - factors_summed(15,1000);
    std::cout << "But it might be " << total << '\n';
  };
}
#endif /* end of include guard: PROBLEM1_H */
