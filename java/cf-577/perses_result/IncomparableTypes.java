package java.util.stream;

import java.util.Arrays;
import java.util.PrimitiveIterator;
import java.util.Spliterator;
import java.util.Spliterators;
import java.util.function.Consumer;
import java.util.function.IntConsumer;

class d extends SpinedBuffer.OfPrimitive<Integer, int[], IntConsumer> {
    public void forEach(Consumer a) {
    }

    protected int[][] newArrayArray(int d) {
        return new int[d][];
    }

    public int[] newArray(int d) {
        return new int[d];
    }

    protected int arrayLength(int[] d) {
        return d.length;
    }

    protected void arrayForEach(int[] a, int d, int b, IntConsumer c) {
    }

    public PrimitiveIterator iterator() {
        return Spliterators.iterator(spliterator());
    }

    public a spliterator() {
        return new a(0, spineIndex, 0, elementIndex);
    }

    class a extends BaseSpliterator<Spliterator.OfInt> implements Spliterator.OfInt {
        a(int a, int d, int b, int c) {
            super(a, a, a, a);
        }

        a newSpliterator(int a, int d, int b, int c) {
            return new a(a, a, a, a);
        }

        void arrayForOne(int[] a, int b, IntConsumer c) {
        }

        OfInt arraySpliterator(int[] d, int a, int b) {
            return Arrays.spliterator(d);
        }
    }
}
