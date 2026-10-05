#include <jni.h>
#include <string>

extern "C" const char* duplicate_text(const char* text) {
    static std::string result;
    result = std::string(text) + std::string(text);
    return result.c_str();
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_adkokori_appforge_NativeTest_duplicate_1text(
    JNIEnv* env,
    jclass,
    jstring text
) {
    const char* input = env->GetStringUTFChars(text, nullptr);

    const char* result = duplicate_text(input);

    jstring output = env->NewStringUTF(result);

    env->ReleaseStringUTFChars(text, input);

    return output;
}
