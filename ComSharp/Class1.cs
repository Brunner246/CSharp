
using System.Runtime.InteropServices;

namespace ManageDLL {

  public interface ICalculator {
    int Add(int a, int b);
  };

  public class CCalculator : ICalculator {
    public int Add(int a, int b) { return a + b; }
  };

  public interface IGreeter {
    string Greet();
  };

  public class CGreeter : IGreeter {
    public string Greet() { return "hello world from C#"; }
  }
}
