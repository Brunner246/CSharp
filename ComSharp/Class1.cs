
using System.Runtime.InteropServices;

namespace CSharp {

  [Guid("EAA4976A-45C3-4BC5-BC0B-E474F4C3C83F")]
  public interface IHelloWorldInterface {
    string GetGreeting();
  }

  [Guid("7BD20046-DF8C-44A6-8F6B-687FAA26FA71")]
  [ClassInterface(ClassInterfaceType.None)]
  [ComVisible(true)]
  public class HelloWorldClass : IHelloWorldInterface {
    public string GetGreeting() { return "Hello, World!"; }
  }
}
