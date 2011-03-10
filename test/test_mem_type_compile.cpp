#include "test_mem_type.hpp"
#include <boost/mpl/assert.hpp>

int main()
  {
  
  BOOST_MPL_ASSERT((boost::tti::mf_valid_member_type<BOOST_TTI_MEMBER_TYPE_GEN(AnIntType)<AType> >));
  BOOST_MPL_ASSERT((boost::tti::mf_valid_member_type<BOOST_TTI_TRAIT_GEN(NameStruct)<AType> >));
  BOOST_MPL_ASSERT((boost::tti::mf_valid_member_type<BOOST_TTI_MEMBER_TYPE_GEN(AnIntTypeReference)<AType> >));
  BOOST_MPL_ASSERT((boost::tti::mf_valid_member_type<BOOST_TTI_MEMBER_TYPE_GEN(BType)<AType> >));
  BOOST_MPL_ASSERT((boost::tti::mf_valid_member_type<BOOST_TTI_TRAIT_GEN(TheInteger)<AType::BType> >));
  BOOST_MPL_ASSERT((boost::tti::mf_valid_member_type<BOOST_TTI_MEMBER_TYPE_GEN(CType)<AType::BType> >));
  BOOST_MPL_ASSERT((boost::tti::mf_valid_member_type<BOOST_TTI_MEMBER_TYPE_GEN(AnotherIntegerType)<AType::BType::CType> >));
  BOOST_MPL_ASSERT((boost::tti::mf_valid_member_type<BOOST_TTI_TRAIT_GEN(SomethingElse)<AnotherType> >));
  
  return 0;

  }
