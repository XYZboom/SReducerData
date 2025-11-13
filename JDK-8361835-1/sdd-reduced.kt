// JVM_DEFAULT_MODE: all
// TARGET_BACKEND: JVM
// JVM_TARGET: 1.8
// FILE: BV4H.java
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;
public final class BV4H {
}

// FILE: CdEZ5F.java
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;
public interface CdEZ5F<T22 extends @NotNull BV4H, T24 extends @NotNull T22> {
}

// FILE: Dh5jdEw.java
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;
public abstract class Dh5jdEw {
    public abstract @NotNull CdEZ5F<@NotNull BV4H, @NotNull Object> xePfQbk();
}

// FILE: JavaTopLevelContainer.java
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;
public final class JavaTopLevelContainer {
}
// FILE: main.kt

fun box(): String {
	return "OK"
}
fun main(args: Array<String>) {
}
// FILE: org/jetbrains/annotations/NotNull.java
package org.jetbrains.annotations;

import java.lang.annotation.*;

// org.jetbrains.annotations used in the compiler is version 13, whose @NotNull does not support the TYPE_USE target (version 15 does).
// We're using our own @org.jetbrains.annotations.NotNull for testing purposes.
@Documented
@Retention(RetentionPolicy.CLASS)
@Target({ElementType.METHOD, ElementType.FIELD, ElementType.PARAMETER, ElementType.LOCAL_VARIABLE, ElementType.TYPE_USE})
public @interface NotNull {
}
// FILE: org/jetbrains/annotations/Nullable.java
package org.jetbrains.annotations;

import java.lang.annotation.*;

// org.jetbrains.annotations used in the compiler is version 13, whose @Nullable does not support the TYPE_USE target (version 15 does).
// We're using our own @org.jetbrains.annotations.Nullable for testing purposes.
@Documented
@Retention(RetentionPolicy.CLASS)
@Target({ElementType.METHOD, ElementType.FIELD, ElementType.PARAMETER, ElementType.LOCAL_VARIABLE, ElementType.TYPE_USE})
public @interface Nullable {
}
