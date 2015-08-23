#pragma once

#include <jank/translate/environment/scope.hpp>
#include <jank/translate/cell/detail/type_reference.hpp>

namespace jank
{
  namespace translate
  {
    namespace environment
    {
      namespace builtin
      {
        namespace type
        {
          cell::detail::type_definition normalize
          (cell::detail::type_definition type, scope &s);
        }
      }
    }
  }
}