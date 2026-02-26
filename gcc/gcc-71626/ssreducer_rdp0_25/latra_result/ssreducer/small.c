                                            test1char8() {}
typedef
        long
              vllong1 __attribute__((__vector_size__(    sizeof(
        long
                                                                     ))));
                                   vllong1 test2llong1() {
        long
        c =  test1char8;
  vllong1 v = {c};
  return v;
}
