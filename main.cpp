/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  entry point to project euler solutions
 *
 *        Version:  1.0
 *        Created:  05/19/2016 01:09:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Nate Yonkee
 *   Organization:  Me
 *
 * =====================================================================================
 */
#include <iostream>
#include <boost/program_options.hpp>
#include "problems.h"
namespace bpo = boost::program_options;
int main(int argc, char** argv){
  int problem_number;
  // Declare the supported options.
  bpo::options_description desc("Allowed options");
  desc.add_options()
    ("p", bpo::value<int>(&problem_number), "problem to solve")
    ;

  bpo::variables_map vm;
  bpo::store(bpo::parse_command_line(argc,argv,desc), vm);
  bpo::notify(vm);

  std::cout << "solving problem " << problem_number << '\n';
  switch ( problem_number ) {
    case 1:
      P1::solution();
      break;

    case 2:
      P2::solution();
      break;

    default:
      std::cout << "problem number is bad or not solved yet .....\n" << problem_number;
      break;
  }				/* -----  end switch  ----- */
  return 0;
}
