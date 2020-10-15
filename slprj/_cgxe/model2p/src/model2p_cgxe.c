/* Include files */

#include "model2p_cgxe.h"
#include "m_CN7GENClZWqDLffIoNIwe.h"

unsigned int cgxe_model2p_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 3292739615 &&
      ssGetChecksum1(S) == 3663123688 &&
      ssGetChecksum2(S) == 4004260522 &&
      ssGetChecksum3(S) == 3619811382) {
    method_dispatcher_CN7GENClZWqDLffIoNIwe(S, method, data);
    return 1;
  }

  return 0;
}
