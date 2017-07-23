using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication20161201
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 0;
            for (int i = 2 ; i < 100; i++)
            {
                int k = 0;
                for (int j = 2; j <= (int)Math.Sqrt(i); j++)
                {
                    if (i%j==0)
                    {
                        k++;
                    }
                }
                if (k>0)
                {
                    continue;
                }
                else
                {
                    sum += i;
                }
            }
            Console.WriteLine("总和{0}",sum);
            Console.ReadKey();
        }
    }
}
