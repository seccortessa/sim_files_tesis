/* Include files */

#include "ex3p_cgxe.h"
#include "m_FDL7jRmkFA0EUvyvAxwloG.h"

unsigned int cgxe_ex3p_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 842907001 &&
      ssGetChecksum1(S) == 2316881783 &&
      ssGetChecksum2(S) == 2827655303 &&
      ssGetChecksum3(S) == 3359478192) {
    method_dispatcher_FDL7jRmkFA0EUvyvAxwloG(S, method, data);
    return 1;
  }

  return 0;
}
