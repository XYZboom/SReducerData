

package java.util;
import org.checkerframework.framework.qual.AnnotatedFor;
import java.io.Serializable;

@AnnotatedFor({"nullness"})
public class Collections {


    static class UnmodifiableCollection<E> implements Collection<E>, Serializable {

        public int size()                   {return 1;}
        public boolean isEmpty()            {return true;}
        public boolean contains(Object o)   {return true;}
        public Object[] toArray()           {return (java.lang.Object[]) null;}
        public <T> T[] toArray(T[] a)       {return (T[]) null;}

        public Iterator<E> iterator() {
            return (Iterator<E>) null;
        }

        public boolean add(E e) {
            throw new UnsupportedOperationException();
        }
        public boolean remove(Object o) {
            throw new UnsupportedOperationException();
        }

        public boolean containsAll(Collection<?> coll) {
            return true;
        }
        public boolean addAll(Collection<? extends E> coll) {
            throw new UnsupportedOperationException();
        }
        public boolean removeAll(Collection<?> coll) {
            throw new UnsupportedOperationException();
        }
        public boolean retainAll(Collection<?> coll) {
            throw new UnsupportedOperationException();
        }
        public void clear() {
            }

        }

    static class UnmodifiableSet<E> extends UnmodifiableCollection<E>
                                 implements Set<E>, Serializable {

        }

    static class UnmodifiableSortedSet<E>
                             extends UnmodifiableSet<E>
                             implements SortedSet<E>, Serializable {

        public Comparator<? super E> comparator() {return (java.util.Comparator<? super E>) null;}

        public SortedSet<E> subSet(E fromElement, E toElement) {
            return (java.util.Collections.UnmodifiableSortedSet) null;
        }
        public SortedSet<E> headSet(E toElement) {
            return (java.util.Collections.UnmodifiableSortedSet) null;
        }
        public SortedSet<E> tailSet(E fromElement) {
            return (java.util.Collections.UnmodifiableSortedSet) null;
        }

        public E first()                   {return null;}
        public E last()                    {return null;}
    }

    static class UnmodifiableNavigableSet<E>
                             extends UnmodifiableSortedSet<E>
                             implements NavigableSet<E>, Serializable {

        private static class EmptyNavigableSet extends UnmodifiableNavigableSet<Object>
            implements Serializable {

            }

        @SuppressWarnings("rawtypes")
        private static final NavigableSet<?> EMPTY_NAVIGABLE_SET =
                new java.util.Collections.UnmodifiableNavigableSet.EmptyNavigableSet();

        public E lower(E e)                             { return null; }
        public E floor(E e)                             { return null; }
        public E ceiling(E e)                         { return null; }
        public E higher(E e)                           { return null; }
        public E pollFirst()     { throw new UnsupportedOperationException(); }
        public E pollLast()      { throw new UnsupportedOperationException(); }
        public NavigableSet<E> descendingSet()
                 { return (java.util.Collections.UnmodifiableNavigableSet) null; }
        public Iterator<E> descendingIterator()
                                         { return (java.util.Iterator<E>) null; }

        public NavigableSet<E> subSet(E fromElement, boolean fromInclusive, E toElement, boolean toInclusive) {
            return (java.util.Collections.UnmodifiableNavigableSet) null;
        }

        public NavigableSet<E> headSet(E toElement, boolean inclusive) {
            return (java.util.Collections.UnmodifiableNavigableSet) null;
        }

        public NavigableSet<E> tailSet(E fromElement, boolean inclusive) {
            return (java.util.Collections.UnmodifiableNavigableSet) null;
        }
    }


    }
