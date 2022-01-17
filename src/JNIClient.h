/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JNIClient */

#include "sensor.h"
#include "config.h"
#include "report.h"

#ifndef _Included_JNIClient
#define _Included_JNIClient
#ifdef __cplusplus
extern "C" {
#endif

#define _nb_perf_counter 3

char* _perf_counters_type[_nb_perf_counter] = {
    "INSTRUCTIONS_RETIRED",
    "LLC_MISSES",
    "CYCLES"
};

#define _nb_rapl_counter 1

char* _rapl_counters_type[_nb_rapl_counter] = {
    "RAPL_ENERGY_PKG"
};

/*
 * Class:     JNIClient
 * Method:    start
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_fr_davidson_j_tlpc_sensor_JNIClient_start
  (JNIEnv *, jobject);

/*
 * Class:     JNIClient
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_fr_davidson_j_tlpc_sensor_JNIClient_stop
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif