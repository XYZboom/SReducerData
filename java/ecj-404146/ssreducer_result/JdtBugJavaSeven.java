import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public final class JdtBugJavaSeven {

    public static final void main() {

        try {

            try {

                try {

                    System.out.println((String) null);

                } finally {

                    try {
                        ((BufferedReader) null).close();
                    } catch (final IOException e) {
                        return;
                    }

                }

            } finally {

                try {
                    ((InputStreamReader) null).close();
                } catch (final IOException e) {}

            }

        } finally {

            }

    }

}