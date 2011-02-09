#if !defined(TT_INTROSPECTION_TEMPLATE_HPP)
#define TT_INTROSPECTION_TEMPLATE_HPP

#include <boost/config.hpp>
#include <boost/mpl/identity.hpp>
#include <boost/mpl/apply.hpp>
#include "detail/TTIntrospectionDetail.hpp"

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

namespace tti
  {
  
/// A metafunction which checks whether a class template with its parameters exists within an enclosing type.
/**

    This metafunction takes its enclosing type as nullary metafunctions whose typedef 'type' member is the actual type used.
    
    The metafunction types and return:

      HasTemplateCheckParams = a Boost MPL lambda expression using the metafunction generated from either the TTI_HAS_TEMPLATE_CHECK_PARAMS ( TTI_TRAIT_HAS_TEMPLATE_CHECK_PARAMS ) 
                    or TTI_VM_HAS_TEMPLATE_CHECK_PARAMS ( TTI_VM_TRAIT_HAS_TEMPLATE_CHECK_PARAMS ) macros.<br />
                    The easiest way to generate the lambda expression is to use a Boost MPL placeholder expression of the form 'metafunction<_>'.<br />
      T           = The enclosing type as a nullary metafunction.
      
      returns = 'value' is true if the template exists within the enclosing type,
                otherwise 'value' is false.
                          
*/
  template
    <
    class HasTemplateCheckParams,
    class T
    >
  struct mf_has_template_check_params :
    boost::mpl::apply
      <
      HasTemplateCheckParams,
      typename T::type
      >::type
    {
    };
  }
  
#endif // TT_INTROSPECTION_TEMPLATE_HPP
