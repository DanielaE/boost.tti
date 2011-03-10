#include "test_mf_has_static_fun.hpp"
#include <boost/mpl/assert.hpp>

int main()
  {
  
  using namespace boost::mpl::placeholders;
  
  // SomeStaticFunction does not exist at all
  
  BOOST_MPL_ASSERT((boost::tti::mf_has_static_member_function
                      <
                      BOOST_TTI_TRAIT_GEN(Pickedname)<_,_,_>,
                      boost::mpl::identity<AType>,
                      boost::mpl::identity<short>,
                      boost::mpl::vector
                        <
                        boost::mpl::identity<int>,
                        boost::mpl::identity<long>
                        >
                      >
                  ));
  
  return 0;

  }
