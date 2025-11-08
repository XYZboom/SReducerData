// JVM_DEFAULT_MODE: all
// TARGET_BACKEND: JVM
// JVM_TARGET: 1.8
// FILE: I0.java
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;
public interface I0 {
    public abstract <T0 extends @NotNull Object, T1 extends @NotNull T0>@NotNull I0 func(@Nullable T1 arg);
}

// FILE: A0.java
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;
public class A0 {
    public <T0 extends @NotNull Object, T1 extends @NotNull T0>@NotNull I0 func(@Nullable T1 arg) {
        throw new RuntimeException();
    }
}

// FILE: A5.kt
public open class A5 : A0(), I0 {
    // stub
    /*
    override fun <T0: Any, T1: T0>func(arg: T1?): I0 {
        throw RuntimeException()
    }
    */
}
