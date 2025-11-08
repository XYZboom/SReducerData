interface I0 {
    <T0, T1 extends T0, T2> I0 func(T1 arg);
}
class A1 {
    <T0, T1 extends T0, T2> I0 func(T1 arg) {
    }
}
class A4 extends A1 implements I0 {
}