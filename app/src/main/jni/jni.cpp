//
// Created by Jayce on 6/14/16.
//

#include "com_jayce_jni_JniUtils.h"
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

/*
 * Class:     com_jayce_jni_JniUtils
 * Method:    getCLanguageString
 * Signature: ()Ljava/lang/String;
 * test use of common use of stl
 */
int calSum1(vector<int> &v1)
{
    int size = v1.size();
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += v1[i];
    }
    return sum;
}
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
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    int sum = calSum1(v1);
    char sumBuff[20];
    string str = "sum = ";

    sprintf(sumBuff,"%d",sum);
    str += sumBuff;
    return env->NewStringUTF(str.c_str());
}