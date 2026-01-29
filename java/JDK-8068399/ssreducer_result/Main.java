import java.util.function.Function;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class Main {

    public static <T>T maxKey(Stream<T> stream, Function<T, Double> function) {

        return null;
    }

    protected int getXByFrequency(double frequency) {
        return 1;
    }

    void foo() {
        getXByFrequency(maxKey(IntStream.range(0, 1).boxed(), i -> Math.abs(((double[]) null)[i])));
    }
}