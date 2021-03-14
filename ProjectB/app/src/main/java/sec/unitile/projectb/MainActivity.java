package sec.unitile.projectb;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    private Button nativeMultiplyer;
    private TextView nativeInput, nativeMultiResult;

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        nativeMultiplyer = (Button)findViewById(R.id.multibutton);
        nativeInput = (EditText)findViewById(R.id.input_digit);
        nativeMultiResult = (TextView)findViewById(R.id.native_multi_result);
        nativeMultiplyer.setOnClickListener(this);

        TextView tv = findViewById(R.id.sample_text);
        tv.setText(CallNativeFunction.stringFromJNI2());
        //tv.setText(stringFromJNI());
    }


    @Override
    public void onClick(View v) {
        if(v==nativeMultiplyer){
            String inputdigit = nativeInput.getText().toString();
            int result = CallNativeFunction.processSumation(Double.parseDouble(inputdigit));
            nativeMultiResult.setText("Result: " + String.valueOf(result) );

        }
    }
}