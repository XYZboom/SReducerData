

package java.util;
import org.checkerframework.checker.initialization.qual.Initialized;
import org.checkerframework.checker.nullness.qual.NonNull;
import org.checkerframework.checker.nullness.qual.Nullable;
import org.checkerframework.checker.nullness.qual.UnknownKeyFor;
import org.checkerframework.dataflow.qual.Pure;
import org.checkerframework.dataflow.qual.SideEffectFree;

public abstract class AbstractList<@Initialized E extends @Initialized Object> extends AbstractCollection<E> implements List<E> {


    @Pure
    public @Initialized int indexOf(@Initialized @Nullable @UnknownKeyFor Object o) {
        return 1;
    }

    @Pure
    public @Initialized int lastIndexOf(@Initialized @Nullable @UnknownKeyFor Object o) {
        return 1;
    }


    public @Initialized @NonNull ListIterator<E> listIterator(final @Initialized @UnknownKeyFor int index) {

        return (java.util.AbstractList.ListItr) null;
    }

    private class Itr implements Iterator<E> {

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

        }

    private class ListItr extends Itr implements ListIterator<E> {

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
            return 1;
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
    public @Initialized @NonNull List<E> subList(@Initialized @UnknownKeyFor int fromIndex, @Initialized @UnknownKeyFor int toIndex) {
        return (List<E>) null;
    }

    }

class SubList extends AbstractList<Object> {

    public Object set(int index, Object element) {
        return null;
    }

    public Object get(int index) {
        return null;
    }

    public int size() {
        return 1;
    }

    public void add(int index, Object element) {
        }

    public Object remove(int index) {
        return null;
    }

    public boolean addAll(int index, Collection<? extends Object> c) {
        if (1==0)
            return true;

        return true;
    }

    public Iterator<Object> iterator() {
        return (java.util.ListIterator<Object>) null;
    }

    public ListIterator<Object> listIterator() {

        return new ListIterator<Object>() {
            private final ListIterator<Object> i = ((AbstractList<Object>) null).listIterator(1+1);

            public boolean hasNext() {
                return true;
            }

            public Object next() {
                if (hasNext())
                    return null;
                else
                    throw new NoSuchElementException();
            }

            public boolean hasPrevious() {
                return true;
            }

            public Object previous() {
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

            public void set(Object e) {
                }

            public void add(Object e) {
                }
        };
    }

    }

