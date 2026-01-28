package java.util;
class b                                                 {
                  AbstractList    e;
           ListIterator    a           (                       int b    ) {
        return new ListIterator<b>() {
                          ListIterator    a = e.listIterator(            );
            public boolean hasNext() {
                return b           < b   ;
            }
            public b next() {
                    throw new NoSuchElementException();
            }
            public boolean hasPrevious() {
                return b               >= 0;
            }
            public b previous() {
                    throw new NoSuchElementException();
            }
            public int nextIndex() {
                return                 b     ;
            }
            public int previousIndex() {
                return                     b     ;
            }
            public void remove() {
            }
            public void set(b a) {
            }
            public void add(b a) {
            }
        };
    }
}
