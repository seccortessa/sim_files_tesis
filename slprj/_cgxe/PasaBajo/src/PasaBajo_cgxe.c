/* Include files */

#include "PasaBajo_cgxe.h"
#include "m_B18doyDGgu6UCK4RTFow0F.h"

unsigned int cgxe_PasaBajo_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 1536147379 &&
      ssGetChecksum1(S) == 2774758842 &&
      ssGetChecksum2(S) == 2146269027 &&
      ssGetChecksum3(S) == 2405657701) {
    method_dispatcher_B18doyDGgu6UCK4RTFow0F(S, method, data);
    return 1;
  }

  return 0;
}
