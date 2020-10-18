/* Include files */

#include "ex3p_cgxe.h"
#include "m_HRQ8wXDZJRP84ult25fVAH.h"

unsigned int cgxe_ex3p_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 1254837708 &&
      ssGetChecksum1(S) == 3000848223 &&
      ssGetChecksum2(S) == 475498307 &&
      ssGetChecksum3(S) == 1307654266) {
    method_dispatcher_HRQ8wXDZJRP84ult25fVAH(S, method, data);
    return 1;
  }

  return 0;
}
