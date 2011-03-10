#include "test_mem_type.hpp"
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
  BOOST_TEST(boost::tti::mf_valid_member_type<BOOST_TTI_MEMBER_TYPE_GEN(AnIntType)<AType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<BOOST_TTI_TRAIT_GEN(NameStruct)<AType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<BOOST_TTI_MEMBER_TYPE_GEN(AnIntTypeReference)<AType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<BOOST_TTI_MEMBER_TYPE_GEN(BType)<AType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<BOOST_TTI_TRAIT_GEN(TheInteger)<AType::BType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<BOOST_TTI_MEMBER_TYPE_GEN(CType)<AType::BType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<BOOST_TTI_MEMBER_TYPE_GEN(AnotherIntegerType)<AType::BType::CType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<BOOST_TTI_TRAIT_GEN(SomethingElse)<AnotherType> >::value);
  
  return boost::report_errors();

  }
