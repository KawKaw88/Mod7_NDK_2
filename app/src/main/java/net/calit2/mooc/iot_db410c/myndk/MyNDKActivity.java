package net.calit2.mooc.iot_db410c.myndk;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;

public class MyNDKActivity extends Activity {

    static{
        System.loadLibrary("ndkapplication");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_my_ndk);

        // $TODO@TJS 1-10-2016 original from course example
        ((TextView)findViewById(R.id.tv)).setText(getStringFromNDK());

        // $TODO@TJS 1-10-2016 TJS generated new *.h file and new function
        //((TextView)findViewById(R.id.tv)).setText(getStringFromNDK_1Tjs1());
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_my_ndk, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }

    public native String getStringFromNDK();

    // $TODO@TJS 1-10-2016 added to try creating new C++ function
    public native String getStringFromNDK_Tjs1();
}
