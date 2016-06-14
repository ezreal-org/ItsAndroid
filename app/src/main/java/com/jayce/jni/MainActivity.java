package com.jayce.jni;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        JniUtils jniUtils = new JniUtils();
        TextView tv = (TextView)findViewById(R.id.jniMessage);
        tv.setText(jniUtils.getCLanguageString());
    }
}
