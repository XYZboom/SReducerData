typedef long long llong;
typedef char vchar8 __attribute__((__vector_size__(8 * sizeof(char))));
__attribute__((noinline, noclone)) vchar8 test1char8() {}
typedef llong vllong1 __attribute__((__vector_size__(1 * sizeof(llong))));
__attribute__((noinline, noclone)) vllong1 test2llong1() {
  llong c = *test1char8;
  vllong1 v = {c};
  return v;
}
