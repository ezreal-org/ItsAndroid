package com.jayce.jni;

/**
 * Created by jayce on 6/14/16.
 */
public class JniUtils {

    public native String getCLanguageString();

    static {
        System.loadLibrary("JniUtils");
    }
}
