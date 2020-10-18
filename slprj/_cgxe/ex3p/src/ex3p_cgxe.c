/* Include files */

#include "ex3p_cgxe.h"
#include "m_XdjgHVyaSXyLz2FIvvYz4G.h"

unsigned int cgxe_ex3p_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 2301697238 &&
      ssGetChecksum1(S) == 937728669 &&
      ssGetChecksum2(S) == 1092453701 &&
      ssGetChecksum3(S) == 3025855583) {
    method_dispatcher_XdjgHVyaSXyLz2FIvvYz4G(S, method, data);
    return 1;
  }

  return 0;
}
