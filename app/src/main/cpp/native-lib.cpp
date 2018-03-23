#include <jni.h>
#include <string>
#include <iostream>
#include <fstream>
#include "math.h"
#include <sstream>


extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_balin_jbkcpp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from the other side";
    return env->NewStringUTF(hello.c_str());
}