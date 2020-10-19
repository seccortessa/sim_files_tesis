/* Include files */

#include "ex3p_cgxe.h"
#include "m_AecrUGCXyQoh04x7HdjoCD.h"

unsigned int cgxe_ex3p_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 395643616 &&
      ssGetChecksum1(S) == 323057188 &&
      ssGetChecksum2(S) == 610860616 &&
      ssGetChecksum3(S) == 3703391759) {
    method_dispatcher_AecrUGCXyQoh04x7HdjoCD(S, method, data);
    return 1;
  }

  return 0;
}
