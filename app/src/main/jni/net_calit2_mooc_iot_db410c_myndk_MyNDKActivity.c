#include "net_calit2_mooc_iot_db410c_myndk_MyNDKActivity.h"
#include <jni.h>

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
       return (*env)->NewStringUTF(env,"getStringFromNDKTjs1() from: NDK 1-10-2016 1:16pm");
  }

