/* Include files */

#include "intentBLE_cgxe.h"
#include "m_RHDQrIaXNsZ5JtX4Xo2HNF.h"
#include "m_jy2tIwPoe1s8ALTGgdhz0.h"
#include "m_RoCtFZqzoy2MuRSqhBv9HC.h"
#include "m_y6O8KIgBCp7z8C6UHAgzZF.h"
#include "m_s1jvAIR8zQOwHmXL0DtSMF.h"
#include "m_SeDOQ8l2qZzhyrMZllF0aG.h"
#include "m_MvgkiIuLAQahlZOS1xpPhH.h"
#include "m_C75W88Xu8Lfy30u4v8RD7.h"
#include "m_2A1lCNxHIbRhU98NaiTyUD.h"
#include "m_24nS964txOkzyQmAGW8uHH.h"
#include "m_52XttFIibJYaIcbOjnV5eB.h"

unsigned int cgxe_intentBLE_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 21182351 &&
      ssGetChecksum1(S) == 4224131639 &&
      ssGetChecksum2(S) == 2494754714 &&
      ssGetChecksum3(S) == 1127174284) {
    method_dispatcher_RHDQrIaXNsZ5JtX4Xo2HNF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 222519087 &&
      ssGetChecksum1(S) == 3818884895 &&
      ssGetChecksum2(S) == 3635753014 &&
      ssGetChecksum3(S) == 2135253952) {
    method_dispatcher_jy2tIwPoe1s8ALTGgdhz0(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 254450365 &&
      ssGetChecksum1(S) == 1473859210 &&
      ssGetChecksum2(S) == 1695699478 &&
      ssGetChecksum3(S) == 3551658163) {
    method_dispatcher_RoCtFZqzoy2MuRSqhBv9HC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 915524568 &&
      ssGetChecksum1(S) == 645109393 &&
      ssGetChecksum2(S) == 3642275224 &&
      ssGetChecksum3(S) == 3479749011) {
    method_dispatcher_y6O8KIgBCp7z8C6UHAgzZF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1312943521 &&
      ssGetChecksum1(S) == 1368915616 &&
      ssGetChecksum2(S) == 291008464 &&
      ssGetChecksum3(S) == 392815120) {
    method_dispatcher_s1jvAIR8zQOwHmXL0DtSMF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1441176752 &&
      ssGetChecksum1(S) == 1335006707 &&
      ssGetChecksum2(S) == 1248038116 &&
      ssGetChecksum3(S) == 818500451) {
    method_dispatcher_SeDOQ8l2qZzhyrMZllF0aG(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2422463592 &&
      ssGetChecksum1(S) == 1799472185 &&
      ssGetChecksum2(S) == 3273050726 &&
      ssGetChecksum3(S) == 3679694306) {
    method_dispatcher_MvgkiIuLAQahlZOS1xpPhH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3001052545 &&
      ssGetChecksum1(S) == 1615218595 &&
      ssGetChecksum2(S) == 182290380 &&
      ssGetChecksum3(S) == 2336078263) {
    method_dispatcher_C75W88Xu8Lfy30u4v8RD7(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3025607194 &&
      ssGetChecksum1(S) == 3464022314 &&
      ssGetChecksum2(S) == 2323754876 &&
      ssGetChecksum3(S) == 4242184727) {
    method_dispatcher_2A1lCNxHIbRhU98NaiTyUD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3562735693 &&
      ssGetChecksum1(S) == 2756224494 &&
      ssGetChecksum2(S) == 3534557469 &&
      ssGetChecksum3(S) == 3416564271) {
    method_dispatcher_24nS964txOkzyQmAGW8uHH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 4062790649 &&
      ssGetChecksum1(S) == 883475760 &&
      ssGetChecksum2(S) == 2804624825 &&
      ssGetChecksum3(S) == 2745761468) {
    method_dispatcher_52XttFIibJYaIcbOjnV5eB(S, method, data);
    return 1;
  }

  return 0;
}
