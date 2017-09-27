package com.andryyu.ndk.jni;

/**
 * Created by yufei on 2017/9/24.
 */

public class JNIDemo {

    public native static String  getStringFromNative();

    static {
        System.loadLibrary("jniDemo");   //defaultConfig.ndk.moduleName
    }
}
