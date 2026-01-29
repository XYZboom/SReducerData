import java.io.BufferedReader;
import java.io.IOException;
             class JdtBugJavaSeven {
                        void a   ()
            {
            try {
                try {
                    System.out.println(             );
                } finally {
                    try {
                        ((BufferedReader) null).close();
                    } catch (      IOException a) {
                        return;
                    }
                }
            } finally {
                                              {
                    }
            }
        }
}
