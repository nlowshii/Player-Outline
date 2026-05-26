#include "hook.h"
#include "renderer.h"
#include "utils.h"

#include <jni.h>

JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM* vm, void* reserved) {

    LOGI("PlayerOutline Loaded");

    InitHooks();

    RenderOutline();

    return JNI_VERSION_1_6;
}
