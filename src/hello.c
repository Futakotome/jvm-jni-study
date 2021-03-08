#include "io_futakotome_jni_HelloWorld.h"
#include <jni.h>
#include <stdio.h>

JNIEXPORT void JNICALL Java_io_futakotome_jni_HelloWorld_sayHello(JNIEnv *env, jobject obj) {
    printf("hello jni!\n");
}