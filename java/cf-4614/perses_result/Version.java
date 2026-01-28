import java.util.Map;
import java.util.stream.Collectors;
             class a       {
          static       Map                 b                  ;
         static Map<a     , a     > a                       () {
    return b                  ;
  }
                       {
          String b           = a      .a                       ().entrySet().stream()
      .map(a ->               ""                                )
      .collect(Collectors.joining(    ));
  }
}
