/* Include files */

#include "untitled_cgxe.h"
#include "m_IMdxoTcX1frBzyfaPqKtSB.h"
#include "m_w3Iq9f6TtaPkClG6RmfRJG.h"

unsigned int cgxe_untitled_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 3730504811 &&
      ssGetChecksum1(S) == 1885115601 &&
      ssGetChecksum2(S) == 4171132429 &&
      ssGetChecksum3(S) == 2058214706) {
    method_dispatcher_IMdxoTcX1frBzyfaPqKtSB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3901269632 &&
      ssGetChecksum1(S) == 819560 &&
      ssGetChecksum2(S) == 3540553172 &&
      ssGetChecksum3(S) == 1449240043) {
    method_dispatcher_w3Iq9f6TtaPkClG6RmfRJG(S, method, data);
    return 1;
  }

  return 0;
}
