using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using SampleCSharpProject;
namespace SampleCSharpTest
{
    [TestClass]
    public class DivideTest
    {
        [TestMethod]
        public void DivideByZeroTest()
        {
            int expected = 5;
            int result = Program.Divide(10, 2);
            Assert.AreEqual(expected, result);
        }
    }
}
