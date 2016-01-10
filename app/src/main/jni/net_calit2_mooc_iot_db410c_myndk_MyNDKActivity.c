#include "net_calit2_mooc_iot_db410c_myndk_MyNDKActivity.h"
#include <jni.h>
#include <stdlib.h> // $TODO@TJS 1-10-2016 added, see what can do with it
#include <stdio.h> // $TODO@TJS 1-10-2016 added, see what can do with it

/*
 * Class:     net_calit2_mooc_iot_db410c_myndk_MyNDKActivity
 * Method:    getStringFromNDK
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_calit2_mooc_iot_1db410c_myndk_MyNDKActivity_getStringFromNDK
  (JNIEnv * env, jobject obj) {
    return (*env)->NewStringUTF(env,"Hello DragonBoard! from: NDK 1-10-2016 1:17pm");
}

/*
 * Class:     net_calit2_mooc_iot_db410c_myndk_MyNDKActivity
 * Method:    getStringFromNDK_Tjs1
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_calit2_mooc_iot_1db410c_myndk_MyNDKActivity_getStringFromNDKTjs1
  (JNIEnv * env, jobject obj){

  // $TODO@TJS 1-10-2016 a little check of compiler error messages
  //when not commented, this line should generate a c compiler error (c compiler since *.c file)


  // $TODO@TJS 1-10-2016 try some of stdlib functions, eventually output as Java string

  float valFloat;
  valFloat = atof("1.23");

  char strFloat[40];
  sprintf(strFloat, "%f", valFloat);

  char str1[120];
  sprintf(str1, "getStringFromNDKTjs1() from: NDK 1-10-2016 2:02pm, float=%s", strFloat);

  // $TODO@TJS 1-10-2016 new, try using some C libraries to generate output string
  return (*env)->NewStringUTF(env,str1);

  // $TODO@TJS 1-10-2016 works
  //return (*env)->NewStringUTF(env,"getStringFromNDKTjs1() from: NDK 1-10-2016 1:16pm");

}

