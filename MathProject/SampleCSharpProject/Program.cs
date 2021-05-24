using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SampleCSharpProject
{
    public static class Program
    {

        public static int Divide(int a, int b)
        {
            if(a ==  0)
            {
                throw new Exception("Divide by zero exception");
            }
            return a / b;
        }
        static void Main(string[] args)
        {
            int res = Divide(10, 2);
            Console.WriteLine("10 / 2 = %d", res);
        }
    }
}
