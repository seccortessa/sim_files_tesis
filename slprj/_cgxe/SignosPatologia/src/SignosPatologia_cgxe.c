/* Include files */

#include "SignosPatologia_cgxe.h"
#include "m_jdGGvS3Rnz7QCJoveIMzxF.h"
#include "m_cYOAWMEvdMf2Or2Gk75wi.h"
#include "m_qVU1wpLpVqNPxIo6YD2XfH.h"
#include "m_eZpB8QET6W2Wqbio119w9F.h"
#include "m_Tz3kuOhgyU1XSwtEbltTnF.h"
#include "m_eOwhERlrSfLIP5fIwtHmQG.h"

unsigned int cgxe_SignosPatologia_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 137429461 &&
      ssGetChecksum1(S) == 294345294 &&
      ssGetChecksum2(S) == 3444986081 &&
      ssGetChecksum3(S) == 1873955079) {
    method_dispatcher_jdGGvS3Rnz7QCJoveIMzxF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2448586475 &&
      ssGetChecksum1(S) == 1271394761 &&
      ssGetChecksum2(S) == 325361542 &&
      ssGetChecksum3(S) == 3538590340) {
    method_dispatcher_cYOAWMEvdMf2Or2Gk75wi(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2674324184 &&
      ssGetChecksum1(S) == 1332799537 &&
      ssGetChecksum2(S) == 1749339719 &&
      ssGetChecksum3(S) == 3495636717) {
    method_dispatcher_qVU1wpLpVqNPxIo6YD2XfH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2977687752 &&
      ssGetChecksum1(S) == 2056177492 &&
      ssGetChecksum2(S) == 119671706 &&
      ssGetChecksum3(S) == 993607583) {
    method_dispatcher_eZpB8QET6W2Wqbio119w9F(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3149406295 &&
      ssGetChecksum1(S) == 403241472 &&
      ssGetChecksum2(S) == 1044121387 &&
      ssGetChecksum3(S) == 2161604980) {
    method_dispatcher_Tz3kuOhgyU1XSwtEbltTnF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3806425617 &&
      ssGetChecksum1(S) == 1643069475 &&
      ssGetChecksum2(S) == 865217725 &&
      ssGetChecksum3(S) == 2232354195) {
    method_dispatcher_eOwhERlrSfLIP5fIwtHmQG(S, method, data);
    return 1;
  }

  return 0;
}
