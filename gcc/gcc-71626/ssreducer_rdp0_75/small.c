typedef long long llong;
__attribute__((noinline, noclone)) void *** test1char8() {}
typedef llong vllong1 __attribute__((__vector_size__(1 * sizeof(llong))));
__attribute__((noinline, noclone)) vllong1 test2llong1() {
  llong c = *test1char8;
  vllong1 v = {c};
  return v;
}
