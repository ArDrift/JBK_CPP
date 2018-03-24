#include <jni.h>
#include <string>
// #include <inttypes.h>
#include <iostream>
#include <fstream>
#include "math.h"
#include <sstream>


extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_balin_jbkcpp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */);
jstring Java_com_example_balin_jbkcpp_MainActivity_stringFromJNI(JNIEnv *env, jobject) {
    std::string hello = "Hello from the other side";
    return env->NewStringUTF(hello.c_str());
}

// Change the displayed text in sample_text

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_balin_jbkcpp_MainActivity_changeText(
        JNIEnv *env,
        jobject /* change text */);
jstring Java_com_example_balin_jbkcpp_MainActivity_changeText(JNIEnv *env, jobject) {
    std::string hello = "Hello calc button";
    return env->NewStringUTF(hello.c_str());
}


/** Add value to the min integer displayed in mainMinCount

extern "C"
JNIEXPORT jint

JNICALL
Java_com_example_balin_jbkcpp_MainActivity_addValue(
        JNIEnv *env,
        jobject);
jint Java_com_example_balin_jbkcpp_MainActivity_min(JNIEnv *env, jobject) {
    std::int min++;
    return env->NewIntArray(min);
}
 */

