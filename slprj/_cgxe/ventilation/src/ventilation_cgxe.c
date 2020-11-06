/* Include files */

#include "ventilation_cgxe.h"
#include "m_jWiszH9ndMpOHQP0Gaxh1F.h"
#include "m_dTwwpZcrKEyRC8SQ3jVJZE.h"

unsigned int cgxe_ventilation_method_dispatcher(SimStruct* S, int_T method, void*
  data)
{
  if (ssGetChecksum0(S) == 199122601 &&
      ssGetChecksum1(S) == 2010016719 &&
      ssGetChecksum2(S) == 84139140 &&
      ssGetChecksum3(S) == 3557621613) {
    method_dispatcher_jWiszH9ndMpOHQP0Gaxh1F(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2960893302 &&
      ssGetChecksum1(S) == 1808120044 &&
      ssGetChecksum2(S) == 3637274418 &&
      ssGetChecksum3(S) == 360154005) {
    method_dispatcher_dTwwpZcrKEyRC8SQ3jVJZE(S, method, data);
    return 1;
  }

  return 0;
}
