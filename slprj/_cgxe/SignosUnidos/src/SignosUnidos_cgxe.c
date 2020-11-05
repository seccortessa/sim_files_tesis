/* Include files */

#include "SignosUnidos_cgxe.h"
#include "m_9cm5ZNP95zNe4NdZr9GE5C.h"
#include "m_4gG8jcW7H5QV3KQ7FOK9sB.h"
#include "m_quATjvKQNK6yofZKBcVwJB.h"
#include "m_xjehGAySTGJ90JsFRWESpG.h"
#include "m_7ZoOcZTyJRqc0JHb0NmGxD.h"
#include "m_h9GcUCiDzeXoqgqRFi3gSF.h"

unsigned int cgxe_SignosUnidos_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 506369552 &&
      ssGetChecksum1(S) == 1401037405 &&
      ssGetChecksum2(S) == 912588627 &&
      ssGetChecksum3(S) == 2410312415) {
    method_dispatcher_9cm5ZNP95zNe4NdZr9GE5C(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1397568274 &&
      ssGetChecksum1(S) == 2810557266 &&
      ssGetChecksum2(S) == 990015038 &&
      ssGetChecksum3(S) == 1650406255) {
    method_dispatcher_4gG8jcW7H5QV3KQ7FOK9sB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2342029083 &&
      ssGetChecksum1(S) == 3797659878 &&
      ssGetChecksum2(S) == 3182119977 &&
      ssGetChecksum3(S) == 573375631) {
    method_dispatcher_quATjvKQNK6yofZKBcVwJB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3048608351 &&
      ssGetChecksum1(S) == 528293508 &&
      ssGetChecksum2(S) == 2644594093 &&
      ssGetChecksum3(S) == 2828385676) {
    method_dispatcher_xjehGAySTGJ90JsFRWESpG(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3189416854 &&
      ssGetChecksum1(S) == 89788349 &&
      ssGetChecksum2(S) == 1494685367 &&
      ssGetChecksum3(S) == 546282798) {
    method_dispatcher_7ZoOcZTyJRqc0JHb0NmGxD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3240112043 &&
      ssGetChecksum1(S) == 1198479142 &&
      ssGetChecksum2(S) == 1702072942 &&
      ssGetChecksum3(S) == 4167807354) {
    method_dispatcher_h9GcUCiDzeXoqgqRFi3gSF(S, method, data);
    return 1;
  }

  return 0;
}
