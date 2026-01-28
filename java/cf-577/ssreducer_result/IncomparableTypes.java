package java.util.stream;

import java.util.PrimitiveIterator;
import java.util.Spliterator;
import java.util.function.Consumer;
import java.util.function.IntConsumer;

class IncomparableTypes extends SpinedBuffer.OfPrimitive<Integer, int[], IntConsumer> {
  @Override
  public void forEach(Consumer<? super Integer> consumer) {
    }

  @Override
  protected int[][] newArrayArray(int size) {
    return (int[][]) null;
  }

  @Override
  public int[] newArray(int size) {
    return (int[]) null;
  }

  @Override
  protected int arrayLength(int[] array) {
    return 1;
  }

  @Override
  protected void arrayForEach(int[] array,
      int from, int to,
      IntConsumer consumer) {
    }

  @Override
  public PrimitiveIterator.OfInt iterator() {
    return (java.util.PrimitiveIterator.OfInt) null;
  }

  class Splitr extends BaseSpliterator<Spliterator.OfInt> implements Spliterator.OfInt {
    Splitr() {
      super(1, 1,
          1, 1);
    }

    @Override
    Splitr newSpliterator(int firstSpineIndex, int lastSpineIndex,
        int firstSpineElementIndex, int lastSpineElementFence) {
      return (Splitr) null;
    }

    @Override
    void arrayForOne(int[] array, int index, IntConsumer consumer) {
      }

    @Override
    Spliterator.OfInt arraySpliterator(int[] array, int offset, int len) {
      return (java.util.Spliterator.OfInt) null;
    }
  }
}