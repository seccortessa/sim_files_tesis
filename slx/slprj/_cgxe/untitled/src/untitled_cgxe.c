/* Include files */

#include "untitled_cgxe.h"
#include "m_qB5Jf0SlbbOQvmBmlCDBDH.h"
#include "m_6sTi5NDKfSrJpkIijcwSRF.h"
#include "m_0wSZGJoFj1v18U2hzH680B.h"
#include "m_XkUJQIpEx4P9GMZEppXpT.h"
#include "m_zvX9mNPRYKxOxtuYTF4sbB.h"

unsigned int cgxe_untitled_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 68861838 &&
      ssGetChecksum1(S) == 4029644138 &&
      ssGetChecksum2(S) == 3589287073 &&
      ssGetChecksum3(S) == 850510708) {
    method_dispatcher_qB5Jf0SlbbOQvmBmlCDBDH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 673129461 &&
      ssGetChecksum1(S) == 3450646856 &&
      ssGetChecksum2(S) == 2912050665 &&
      ssGetChecksum3(S) == 3906358721) {
    method_dispatcher_6sTi5NDKfSrJpkIijcwSRF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 834381121 &&
      ssGetChecksum1(S) == 291893306 &&
      ssGetChecksum2(S) == 3135456860 &&
      ssGetChecksum3(S) == 1161357034) {
    method_dispatcher_0wSZGJoFj1v18U2hzH680B(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1697875965 &&
      ssGetChecksum1(S) == 4253976560 &&
      ssGetChecksum2(S) == 1057816762 &&
      ssGetChecksum3(S) == 1285175115) {
    method_dispatcher_XkUJQIpEx4P9GMZEppXpT(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3087661241 &&
      ssGetChecksum1(S) == 990815918 &&
      ssGetChecksum2(S) == 3515072794 &&
      ssGetChecksum3(S) == 3261428476) {
    method_dispatcher_zvX9mNPRYKxOxtuYTF4sbB(S, method, data);
    return 1;
  }

  return 0;
}
