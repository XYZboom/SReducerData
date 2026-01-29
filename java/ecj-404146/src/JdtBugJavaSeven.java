import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.charset.Charset;

public final class JdtBugJavaSeven {

    public static final void main(final String[] args) {

        final File f = new File("file_to_read");
        final FileInputStream fis;

        try {
            fis = new FileInputStream(f);
        } catch (final FileNotFoundException e) {
            e.printStackTrace();
            System.exit(1);
            return;
        }

        try {
            final InputStreamReader isr = new InputStreamReader(fis, Charset.forName("UTF-8"));

            try {
                final BufferedReader br = new BufferedReader(isr);

                try {
                    String l;

                    try {
                        l = br.readLine();
                    } catch (final IOException e) {
                        e.printStackTrace();
                        System.exit(1);
                        return;
                    }

                    while (l != null) {
                        System.out.println(l);

                        try {
                            l = br.readLine();
                        } catch (final IOException e) {
                            e.printStackTrace();
                            System.exit(1);
                            return;
                        }

                    }

                } finally {

                    try {
                        br.close();
                    } catch (final IOException e) {
                        e.printStackTrace();
                        System.exit(1);
                        return;
                    }

                }

            } finally {

                try {
                    isr.close();
                } catch (final IOException e) {
                    e.printStackTrace();
                    System.exit(1);
                    return;
                }

            }

        } finally {

            try {
                fis.close();
            } catch (final IOException e) {
                e.printStackTrace();
                System.exit(1);
                return;
            }

        }

    }

}