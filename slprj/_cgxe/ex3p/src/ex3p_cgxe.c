/* Include files */

#include "ex3p_cgxe.h"
#include "m_UhNDwmFuUQVCsNJ5LcX6NB.h"

unsigned int cgxe_ex3p_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 2435157066 &&
      ssGetChecksum1(S) == 4289893355 &&
      ssGetChecksum2(S) == 1074504954 &&
      ssGetChecksum3(S) == 2387154881) {
    method_dispatcher_UhNDwmFuUQVCsNJ5LcX6NB(S, method, data);
    return 1;
  }

  return 0;
}
