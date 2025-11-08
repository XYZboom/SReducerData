// JVM_DEFAULT_MODE: all
// TARGET_BACKEND: JVM
// JVM_TARGET: 1.8
// FILE: I0.java
interface I0 {
    public abstract <T0 extends @NotNull Object, T1 extends @NotNull T0>@NotNull I0 func(@Nullable T1 arg);
}

class A0 {
    public <T0 extends @NotNull Object, T1 extends @NotNull T0>@NotNull I0 func(@Nullable T1 arg) {
        throw new RuntimeException();
    }
}

