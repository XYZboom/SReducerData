package net.mtu.eggplant.checker.parser_error;

import java.util.Map;
import java.util.stream.Collectors;

public final class Version {

  static {}

  public static Map<String, String> getAllVersionInformation() {
    return (Map<String, String>) null;
  }

  public void method() {
    Version.getAllVersionInformation().entrySet().stream()
      .map(e -> String.format("%s:%s", e.getKey(), e.getValue()))
      .collect(Collectors.joining("\n"));
  }
  
}