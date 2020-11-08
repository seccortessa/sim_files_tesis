/* Include files */

#include "celBebe_cgxe.h"
#include "m_5IOryTwORVHfrrhVni6DVF.h"
#include "m_aDr9l3I9BOQhqe6x2IMMvH.h"
#include "m_J4iIaIRp0U85cfdghNRedG.h"
#include "m_uIfWITuwiHPEFj8zqrFTDF.h"

unsigned int cgxe_celBebe_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 571453994 &&
      ssGetChecksum1(S) == 2600040780 &&
      ssGetChecksum2(S) == 2872648160 &&
      ssGetChecksum3(S) == 2546083833) {
    method_dispatcher_5IOryTwORVHfrrhVni6DVF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1594188914 &&
      ssGetChecksum1(S) == 2820760069 &&
      ssGetChecksum2(S) == 1002705999 &&
      ssGetChecksum3(S) == 3516457108) {
    method_dispatcher_aDr9l3I9BOQhqe6x2IMMvH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3608745619 &&
      ssGetChecksum1(S) == 1104298290 &&
      ssGetChecksum2(S) == 3935808747 &&
      ssGetChecksum3(S) == 411749293) {
    method_dispatcher_J4iIaIRp0U85cfdghNRedG(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3948370205 &&
      ssGetChecksum1(S) == 2203858805 &&
      ssGetChecksum2(S) == 2020223846 &&
      ssGetChecksum3(S) == 1070404211) {
    method_dispatcher_uIfWITuwiHPEFj8zqrFTDF(S, method, data);
    return 1;
  }

  return 0;
}
