
#include<com_andryyu_ndk_jni_JNIDemo.h>

JNIEXPORT jstring JNICALL Java_com_andryyu_ndk_jni_JNIDemo_getStringFromNative
        (JNIEnv *env,  jclass jcls){
    printf("getStringFromNative");
    return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
  }

