/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class vbhook_VBHook */

#ifndef _Included_vbhook_VBHook
#define _Included_vbhook_VBHook
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     vbhook_VBHook
 * Method:    init_glue
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_vbhook_VBHook_init_1glue
  (JNIEnv *, jobject, jstring);

/*
 * Class:     vbhook_VBHook
 * Method:    create_vb_client
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_vbhook_VBHook_create_1vb_1client
  (JNIEnv *, jobject);

/*
 * Class:     vbhook_VBHook
 * Method:    create_vb
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_vbhook_VBHook_create_1vb
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vbhook_VBHook
 * Method:    create_session
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_vbhook_VBHook_create_1session
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vbhook_VBHook
 * Method:    terminate_glue
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_terminate_1glue
  (JNIEnv *, jobject);

/*
 * Class:     vbhook_VBHook
 * Method:    get_vb_version
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_vbhook_VBHook_get_1vb_1version
  (JNIEnv *, jobject);

/*
 * Class:     vbhook_VBHook
 * Method:    find_or_create_vm
 * Signature: (JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_vbhook_VBHook_find_1or_1create_1vm
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     vbhook_VBHook
 * Method:    vm_values
 * Signature: (JJJJJJLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_vm_1values
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong, jlong, jstring, jstring);

/*
 * Class:     vbhook_VBHook
 * Method:    start_vm
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_start_1vm
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     vbhook_VBHook
 * Method:    stop_vm
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_stop_1vm
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vbhook_VBHook
 * Method:    create_hdd
 * Signature: (JJLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_create_1hdd
  (JNIEnv *, jobject, jlong, jlong, jstring, jstring);

/*
 * Class:     vbhook_VBHook
 * Method:    vm_powered_on
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_vbhook_VBHook_vm_1powered_1on
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vbhook_VBHook
 * Method:    vm_iso_ejected
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_vbhook_VBHook_vm_1iso_1ejected
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vbhook_VBHook
 * Method:    stop_vm_if_exists
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_stop_1vm_1if_1exists
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     vbhook_VBHook
 * Method:    tick_vm
 * Signature: (JJIIII[I)[J
 */
JNIEXPORT jlongArray JNICALL Java_vbhook_VBHook_tick_1vm
  (JNIEnv *, jobject, jlong, jlong, jint, jint, jint, jint, jintArray);

/*
 * Class:     vbhook_VBHook
 * Method:    screenshot_vm
 * Signature: (JJJJJLjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_screenshot_1vm
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong, jobject);

/*
 * Class:     vbhook_VBHook
 * Method:    free_vm
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_free_1vm
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vbhook_VBHook
 * Method:    free_vb
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_free_1vb
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vbhook_VBHook
 * Method:    free_session
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_free_1session
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vbhook_VBHook
 * Method:    free_vb_client
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vbhook_VBHook_free_1vb_1client
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
