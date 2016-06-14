//
// Created by Jayce on 6/14/16.
//

#include "com_jayce_jni_JniUtils.h"
#include <string>
#include <cstdlib>
using namespace std;

/*
 * Class:     com_jayce_jni_JniUtils
 * Method:    getCLanguageString
 * Signature: ()Ljava/lang/String;
 */

int calSum(int *array,int len)
{
    int sum = 0;
    for(int i=0;i<len;i++){
        sum += array[i];
    }
    return sum;
}
JNIEXPORT jstring JNICALL Java_com_jayce_jni_JniUtils_getCLanguageString
        (JNIEnv *env, jobject obj){
    int array[5] = {1,2,3,4,5};
    int sum = calSum(array,5);
    char sumBuff[20];
    string str = "sum = ";

    sprintf(sumBuff,"%d",sum);
    str += sumBuff;
    return env->NewStringUTF(str.c_str());
}