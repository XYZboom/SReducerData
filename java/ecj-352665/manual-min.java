class Outer {

    /* ought to be static */ class Inner {
    }

    static {
        if (System.getProperty("foo") == null)
            new Inner();
    }
}