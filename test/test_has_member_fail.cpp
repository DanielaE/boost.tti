#include "test_has_member.hpp"
#include <boost/mpl/assert.hpp>

int main()
  {
  
  // Wrong function signature for sFunction
  
  BOOST_MPL_ASSERT(( boost::tti::has_comp_member_function_sFunction<AType::AnIntType (AnotherType::*)(short,long,double)> ));
  
  return 0;

  }
