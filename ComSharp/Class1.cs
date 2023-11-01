
using System.Runtime.InteropServices;

namespace ManageDLL {

  public interface ICalculator {
    int Add(int a, int b);
  };

  public class CCalculator : ICalculator {
    public int Add(int a, int b) { return a + b; }
  };

}
