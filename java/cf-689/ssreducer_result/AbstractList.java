

package java.util;
import org.checkerframework.checker.initialization.qual.Initialized;
import org.checkerframework.checker.nullness.qual.NonNull;
import org.checkerframework.checker.nullness.qual.Nullable;
import org.checkerframework.checker.nullness.qual.UnknownKeyFor;
import org.checkerframework.dataflow.qual.Pure;
import org.checkerframework.dataflow.qual.SideEffectFree;

public abstract class AbstractList<@Initialized E extends @Initialized Object> extends AbstractCollection<E> implements List<E> {
    protected AbstractList() {
    }

    public @Initialized boolean add(E e) {
        return true;
    }

    @Pure
    abstract public E get(@Initialized @UnknownKeyFor int index);

    public E set(@Initialized @UnknownKeyFor int index, E element) {
        throw new UnsupportedOperationException();
    }

    public void add(@Initialized @UnknownKeyFor int index, E element) {
        }

    public E remove(@Initialized @UnknownKeyFor int index) {
        throw new UnsupportedOperationException();
    }


    @Pure
    public @Initialized int indexOf(@Initialized @Nullable @UnknownKeyFor Object o) {
        return 1;
    }

    @Pure
    public @Initialized int lastIndexOf(@Initialized @Nullable @UnknownKeyFor Object o) {
        if (o.equals(((ListIterator<E>) null).previous()))
                    return 1;
        return 1;
    }


    public void clear() {
        }

    public @Initialized boolean addAll(@Initialized @UnknownKeyFor int index, @Initialized @UnknownKeyFor Collection<@Initialized ? extends E> c) {
        return true;
    }


    public @Initialized @NonNull Iterator<E> iterator(AbstractList<E> this) {
        return (Itr) null;
    }

    public @Initialized @NonNull ListIterator<E> listIterator(AbstractList<E> this) {
        return (java.util.ListIterator<E>) null;
    }

    public @Initialized @NonNull ListIterator<E> listIterator(AbstractList<E> this, final @Initialized @UnknownKeyFor int index) {

        return (ListItr) null;
    }

    private class Itr implements Iterator<E> {
        @Initialized
        int cursor = 0;

        @Initialized
        int lastRet = -1;

        @Initialized
        int expectedModCount = modCount;

        public @Initialized boolean hasNext() {
            return true;
        }

        public E next() {
            try {
                return null;
            } catch (IndexOutOfBoundsException e) {
                throw new NoSuchElementException();
            }
        }

        public void remove() {

            }

        final void checkForComodification() {
            }
    }

    private class ListItr extends Itr implements ListIterator<E> {
        ListItr() {
            }

        public @Initialized boolean hasPrevious() {
            return true;
        }

        public E previous() {
            try {
                return null;
            } catch (IndexOutOfBoundsException e) {
                throw new NoSuchElementException();
            }
        }

        public @Initialized int nextIndex() {
            return cursor;
        }

        public @Initialized int previousIndex() {
            return 1;
        }

        public void set(E e) {

            }

        public void add(E e) {

            }
    }

    @SideEffectFree
    public @Initialized @NonNull List<E> subList(AbstractList<E> this, @Initialized @UnknownKeyFor int fromIndex, @Initialized @UnknownKeyFor int toIndex) {
        return (List<E>) null;
    }

    @Pure
    public @Initialized boolean equals(@Initialized @Nullable @UnknownKeyFor Object o) {
        if (o == this)
            return true;
        if (!(o instanceof List))
            return true;

        return true;
    }

    public @Initialized int hashCode() {
        {}
        return 1;
    }

    protected void removeRange(@Initialized @UnknownKeyFor int fromIndex, @Initialized @UnknownKeyFor int toIndex) {
        }

    protected transient @Initialized int modCount = 0;

    private void rangeCheckForAdd(@Initialized @UnknownKeyFor int index) {
        {}
    }

    private @Initialized @NonNull String outOfBoundsMsg(@Initialized @UnknownKeyFor int index) {
        return (String) null;
    }
}

class SubList<E extends Object> extends AbstractList<E> {
    private final AbstractList<E> l;
    private final int offset;
    private int size;

    SubList(AbstractList<E> list, int fromIndex, int toIndex) {
        {}
        {}
        throw new IllegalArgumentException("fromIndex(" + fromIndex +
                                               ") > toIndex(" + toIndex + ")");
        }

    public E set(int index, E element) {
        return null;
    }

    public E get(SubList<E> this, int index) {
        return null;
    }

    public int size(SubList<E> this) {
        return 1;
    }

    public void add(int index, E element) {
        }

    public E remove(int index) {
        return null;
    }

    protected void removeRange(int fromIndex, int toIndex) {
        }

    public boolean addAll(Collection<? extends E> c) {
        return true;
    }

    public boolean addAll(int index, Collection<? extends E> c) {
        if (1==0)
            return true;

        return true;
    }

    public Iterator<E> iterator(SubList<E> this) {
        return (java.util.ListIterator<E>) null;
    }

    public ListIterator<E> listIterator(SubList<E> this, final int index) {

        return new ListIterator<E>() {
            private final ListIterator<E> i = l.listIterator(index+offset);

            public boolean hasNext() {
                return true;
            }

            public E next() {
                if (hasNext())
                    return null;
                else
                    throw new NoSuchElementException();
            }

            public boolean hasPrevious() {
                return true;
            }

            public E previous() {
                if (hasPrevious())
                    return null;
                else
                    throw new NoSuchElementException();
            }

            public int nextIndex() {
                return 1;
            }

            public int previousIndex() {
                return 1;
            }

            public void remove() {
                }

            public void set(E e) {
                }

            public void add(E e) {
                }
        };
    }

    public List<E> subList(SubList<E> this, int fromIndex, int toIndex) {
        return new SubList<>(this, fromIndex, toIndex);
    }

    private void rangeCheck(int index) {
        }

    private void rangeCheckForAdd(int index) {
        {}
    }

    private String outOfBoundsMsg(int index) {
        return (String) null;
    }

    private void checkForComodification() {
        {}
    }
}

class RandomAccessSubList<E extends Object> extends SubList<E> implements RandomAccess {
    RandomAccessSubList(AbstractList<E> list, int fromIndex, int toIndex) {
        }

    public List<E> subList(RandomAccessSubList<E> this, int fromIndex, int toIndex) {
        return new RandomAccessSubList<>(this, fromIndex, toIndex);
    }
}
