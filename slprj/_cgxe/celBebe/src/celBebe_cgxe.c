/* Include files */

#include "celBebe_cgxe.h"
#include "m_PGHqiVkIzM3GqbsZrllcmB.h"
#include "m_rxrUhDJ8v8GroQHXnm35hB.h"
#include "m_5IOryTwORVHfrrhVni6DVF.h"
#include "m_t6gfzhy2H9OHbRzISw1CpF.h"
#include "m_esq8r6hCXoet8LGnEsjgw.h"
#include "m_5Nu8XxBOlRImD0lB783YvG.h"
#include "m_txY1tResNP1bDTnjeHgAW.h"

unsigned int cgxe_celBebe_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 195530892 &&
      ssGetChecksum1(S) == 113830415 &&
      ssGetChecksum2(S) == 1234181756 &&
      ssGetChecksum3(S) == 4167853903) {
    method_dispatcher_PGHqiVkIzM3GqbsZrllcmB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 423185046 &&
      ssGetChecksum1(S) == 1650285668 &&
      ssGetChecksum2(S) == 898442620 &&
      ssGetChecksum3(S) == 2619198846) {
    method_dispatcher_rxrUhDJ8v8GroQHXnm35hB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 571453994 &&
      ssGetChecksum1(S) == 2600040780 &&
      ssGetChecksum2(S) == 2872648160 &&
      ssGetChecksum3(S) == 2546083833) {
    method_dispatcher_5IOryTwORVHfrrhVni6DVF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 868521204 &&
      ssGetChecksum1(S) == 3204850203 &&
      ssGetChecksum2(S) == 462053822 &&
      ssGetChecksum3(S) == 1482703587) {
    method_dispatcher_t6gfzhy2H9OHbRzISw1CpF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1938401385 &&
      ssGetChecksum1(S) == 1964306693 &&
      ssGetChecksum2(S) == 1396155398 &&
      ssGetChecksum3(S) == 2501066867) {
    method_dispatcher_esq8r6hCXoet8LGnEsjgw(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3556373960 &&
      ssGetChecksum1(S) == 1979121035 &&
      ssGetChecksum2(S) == 524583230 &&
      ssGetChecksum3(S) == 1467883277) {
    method_dispatcher_5Nu8XxBOlRImD0lB783YvG(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3657009818 &&
      ssGetChecksum1(S) == 2042584842 &&
      ssGetChecksum2(S) == 1474509762 &&
      ssGetChecksum3(S) == 1944982131) {
    method_dispatcher_txY1tResNP1bDTnjeHgAW(S, method, data);
    return 1;
  }

  return 0;
}
