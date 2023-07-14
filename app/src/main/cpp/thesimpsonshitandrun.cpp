#include <jni.h>
#include <main/singletons.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_me_iscle_thesimpsonshitandrun_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {
    CreateSingletons();
    return nullptr;
}