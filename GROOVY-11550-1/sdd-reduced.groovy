// JVM_DEFAULT_MODE: all
// TARGET_BACKEND: JVM
// JVM_TARGET: 1.8
// FILE: TgqifT.groovy
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;
public interface TgqifT<T0 extends @Nullable Object> {
    public abstract @Nullable T0 cbnQTZ();
}

// FILE: OkCro.groovy
public interface OkCro extends TgqifT<@NotNull Void> {
    @Override
    public default @Nullable Object cbnQTZ() {
        throw new RuntimeException();
    }
}

// FILE: C1k9095.groovy
public final class C1k9095 implements OkCro {
    // stub
    /*
    @Override
    public @Nullable Object cbnQTZ() {
        throw new RuntimeException();
    }
    */
}

